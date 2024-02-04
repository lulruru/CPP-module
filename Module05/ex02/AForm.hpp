/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: russelenc <russelenc@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/03 21:18:07 by russelenc         #+#    #+#             */
/*   Updated: 2024/02/04 20:08:02 by russelenc        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AFORM_HPP
#define AFORM_HPP

#include <iostream>
#include "Bureaucrat.hpp"

class Bureaucrat;

class AForm {
	private :
	const std::string _name;
	bool _signed;
	const int _signedGrade;
	const int _execGrade;
	
	public :
	AForm();
	virtual ~AForm();
	AForm(std::string const name, int const signedGrade, int const execGrade);
	AForm(AForm const& src);
	AForm	&operator=(AForm const& og);
	
	std::string const	getName(void) const;
	int					getSignedGrade()const ;
	int					getExecGrade()const ;
	bool 				getState(void) const;
	virtual void execute(Bureaucrat const &bureaucrat) const = 0;
	void				beSigned(Bureaucrat signatory);
	class GradeTooHighException : public std::exception{
		virtual const char *what() const throw();
	};
	class GradeTooLowException : public std::exception{
		virtual const char *what() const throw();
	};
};
std::ostream& operator<<(std::ostream& o, AForm const& form);

#endif