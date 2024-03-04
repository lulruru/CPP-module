/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: russelenc <russelenc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/25 21:43:54 by russelenc          #+#    #+#             */
/*   Updated: 2024/02/25 21:43:54 by russelenc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../incs/BitcoinExchange.hpp"

bool estAlpha(const std::string& str) {
    std::string::const_iterator it;

    for (it = str.begin(); it != str.end(); ++it) {
        
        if (!std::isalpha(*it)) {
            return false; 
        }
    }
    return true; 
}

bool estDigit(const std::string& str) {
    std::string::const_iterator it;

    for (it = str.begin(); it != str.end(); ++it) {
        
        if (!std::isdigit(*it) &&  *it != '.') {
            return true; 
        }
    }
    return false; 
}

bool estDigit2(const std::string& str) {
    std::string::const_iterator it;

    for (it = str.begin(); it != str.end(); ++it) {
        
        if (!std::isdigit(*it) && *it != '-') {
            return true; 
        }
    }
    return false; 
}

void check_value(float value, int i)
{
	if(value < 0)
		throw std::runtime_error("negative number found at line : " + std::to_string(i));
	else if(value > 1000)
		throw std::runtime_error("number too large found at line : " + std::to_string(i));
	else if(estDigit(std::to_string(value)))
		throw std::runtime_error("non digit found at line : " + std::to_string(i));
}

void check_date(std::string& value, int i)
{
	if(estDigit2(value))
		throw std::runtime_error("non digit found at line : " + std::to_string(i));
	int year;
	int months;
	int bigmonth[4] = {4, 6, 9 ,11};
	int days;
	size_t pos = value.find("-");
	size_t pos2 = value.substr(pos + 1, value.npos).find("-");
	year = atoi((value.substr(0, pos)).c_str());
	months = atoi((value.substr(pos + 1, pos2)).c_str());
	days = atoi((value.substr(pos2 + 2 + pos, value.npos)).c_str());
	bool isbis = year % 4 == 0 ? true : false;
	if (year < 2009 || months < 1 || months > 12 || days < 1 || days > 31)
		throw std::runtime_error("date input error : " + value);
	for(int y = 0; y <= 4; y++)
		if(bigmonth[y] == months)
			if (days > 30)
				throw std::runtime_error("no 31 for this month : " + value);
	if (!isbis && months == 2 && days > 28)
		throw std::runtime_error("non bisextile year too much days : " + value);
}

void check_all(std::ifstream &file, BitcoinExchange& btc)
{
	std::string line;
	std::getline(file, line);
	std::string date;
	float value;
	size_t		sep;
	int i = 0;
	float result;

	if (line != "date | value")
		throw std::runtime_error("Bad file header");
	i++;
	while(std::getline(file, line))
	{
		i++;
		try{
			if(line.length() > 10){
				sep = line.find("|");
				if (sep != std::string::npos){
					date = line.substr(0, sep - 1);
					value = atof(line.substr(sep + 2, std::string::npos).c_str());
					check_value(value, i);
					check_date(date, i);
					// std::cout << date << '\''<< std::endl ;
					// std::cout << value << std::endl;
					result = btc.findClosestDate(date, value);
					std::cout << result << std::endl;
				}
			}
			else
				throw std::runtime_error("Synthaxe Error");
		}catch (std::exception& e) {
        	std::cerr << "An error occurred : " << e.what() << std::endl;
  		}	
		
		// std::cout << line << std::endl;

	}

}
int	main(int ac , char **av)
{
	std::ifstream file(av[1]);
	if(ac == 2)
	{
		try {
			BitcoinExchange bitcoin;
        	if (!file.is_open()) {
        	    throw std::runtime_error("Failed to open \"" + std::string(av[1]) + "\"");
        	}
			check_all(file, bitcoin);
        	file.close();
    	} catch (std::exception& e) {
        	std::cerr << "An error occurred : " << e.what() << std::endl;
  		}	
	}
	else
		std::cout<< " Input Error " << std::endl;
	return(0);
}


