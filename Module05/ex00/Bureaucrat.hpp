/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: russelenc <russelenc@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/03 18:07:38 by russelenc         #+#    #+#             */
/*   Updated: 2024/02/03 20:36:36 by russelenc        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRAT_HPP
#define BUREAUCRAT_HPP

#include <iostream>
#include <string>

class Bureaucrat{
	private:
	std::string const _name;
	int _grade;
	public :
	Bureaucrat();
	~Bureaucrat();
	Bureaucrat(std::string name, int grade);
	Bureaucrat(Bureaucrat const &og);
	Bureaucrat &operator=(Bureaucrat const &og);
	std::string const getName() const;
	int		getGrade()const ;
	void	incrementGrade();
	void	decrementGrade();
	class GradeTooHighException : public std::exception{
		virtual const char *what() const throw();
	};
	class GradeTooLowException : public std::exception{
		virtual const char *what() const throw();
	};
};

std::ostream& operator<<(std::ostream &out, Bureaucrat const &bureaucrat);

#endif