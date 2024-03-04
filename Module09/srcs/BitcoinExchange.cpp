/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: russelenc <russelenc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/25 21:43:54 by russelenc          #+#    #+#             */
/*   Updated: 2024/02/25 21:43:54 by russelenc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../incs/BitcoinExchange.hpp"

/* ************************************************************************** */
/*                     Constructeurs & Destructeurs                   		  */
/* ************************************************************************** */

BitcoinExchange::BitcoinExchange() {
	fill_map();
}


BitcoinExchange::BitcoinExchange(BitcoinExchange const &src) {
	(void)src;
	std::cout <<  "Copy Constructor called: BitcoinExchange"  << std::endl;
}

BitcoinExchange::~BitcoinExchange() {

	std::cout <<  "Destructor called: BitcoinExchange"  << std::endl;
}

/* ************************************************************************** */
/*                     Surcharges d'opérateurs                  		      */
/* ************************************************************************** */

BitcoinExchange&	BitcoinExchange::operator=(BitcoinExchange const &rhs) {
	(void)rhs;
	std::cout <<  "Assignment Operator called: BitcoinExchange"  << std::endl;
	return (*this);
}

void BitcoinExchange::fill_map(){
	// size_t pos;
	std::ifstream file("data.csv");
	std::string line;

	if (!file.is_open()) {
    	std::cerr << "Impossible d'ouvrir le fichier." << std::endl;
    	throw std::runtime_error("Can't open data file");
    }
    while (std::getline(file, line)) {
        std::stringstream ss(line);
        std::string dateStr;
        float valeur;

        // Extraction de la date et de la valeur à partir de la ligne
        if (std::getline(ss, dateStr, ',') && ss >> valeur) {
            // Stockage des données dans le std::map
            _valueMap[dateStr] = valeur;
        }
    }
	// std::map<std::string, float>::iterator it;
    // for (it = _valueMap.begin(); it != _valueMap.end(); ++it) {
    //     std::cout << "Clé: " << it->first << ", Valeur: " << it->second << std::endl;
    // }
    file.close();
}


// Convertir une chaîne de caractères représentant une date au format "YYYY-MM-DD" en un nombre à virgule flottante
float BitcoinExchange::convertDateToFloat(const std::string& dateStr) {
    // Supposons que la date soit au format "YYYY-MM-DD"
	   if (dateStr.size() != 10 ||
        dateStr[4] != '-' || dateStr[7] != '-') {
        std::cerr << "Format de date invalide : " << '\'' << dateStr << '\''  << std::endl;
        return 0.0f; // ou une autre valeur par défaut selon le contexte
    }

    std::string year = dateStr.substr(0, 4);
    std::string month = dateStr.substr(5, 2);
    std::string day = dateStr.substr(8, 2);
	// std::cout << "Year: " << year << ", Month: " << month << ", Day: " << day << std::endl;
    return std::stof(year) * 10000.0f + std::stof(month) * 100.0f + std::stof(day);
}

// Trouver la date la plus proche dans la map par rapport à la date donnée
float BitcoinExchange::findClosestDate(const std::string& inputDate, float btc) {
	// fill_map();
    float inputDateFloat = convertDateToFloat(inputDate);
    std::string closestDate;
    float minDiff = std::numeric_limits<float>::max();
    std::map<std::string, float>::iterator it;
    for (it = _valueMap.begin(); it != _valueMap.end(); ++it) {
        float currentDateFloat = convertDateToFloat(it->first);
        float diff = std::abs(currentDateFloat - inputDateFloat);
        if (diff < minDiff) {
            minDiff = diff;
            closestDate = it->first;
        }
    }
	// std::cout << closestDate << std::endl;
    return _valueMap[closestDate] * btc;
}
