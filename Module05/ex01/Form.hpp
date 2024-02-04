/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: russelenc <russelenc@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/03 21:18:07 by russelenc         #+#    #+#             */
/*   Updated: 2024/02/04 17:12:45 by russelenc        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FORM_HPP
#define FORM_HPP

#include <iostream>
#include "Bureaucrat.hpp"

class Bureaucrat;

class Form {
	private :
	const std::string _name;
	bool _signed;
	const int _signedGrade;
	const int _execGrade;
	
	public :
	Form();
	~Form();
	Form(std::string const name, int const signedGrade, int const execGrade);
	Form(Form const& src);
	Form	&operator=(Form const& og);
	
	std::string const	getName(void) const;
	int					getSignedGrade()const ;
	int					getExecGrade()const ;
	bool 				getState(void) const;
	void				beSigned(Bureaucrat signatory);
	class GradeTooHighException : public std::exception{
		virtual const char *what() const throw();
	};
	class GradeTooLowException : public std::exception{
		virtual const char *what() const throw();
	};
};
std::ostream& operator<<(std::ostream& o, Form const& form);

#endif