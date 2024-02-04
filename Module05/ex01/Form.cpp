/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: russelenc <russelenc@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/03 21:18:06 by russelenc         #+#    #+#             */
/*   Updated: 2024/02/04 19:46:14 by russelenc        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"


// CONSTRUCTOR

Form::Form() : _name("Name"), _signed(false),_signedGrade(150), _execGrade(150) {
	
};

Form::~Form(){
	
};

std::ostream&	operator<<(std::ostream& o, Form const& form){
	o << form.getName() << "'s form " << std::endl;
	if(form.getState())
		o << "signed" << std::endl;
	else
		o << "not signed" << std::endl;
	o << "Grade for signature : " << form.getSignedGrade() << std::endl;
	o << "Grade for execution : " << form.getExecGrade() << std::endl;
	return (o);
};

Form::Form(std::string const name, int const signedGrade, int const execGrade) 
: _name(name), _signed(false),_signedGrade(signedGrade), _execGrade(execGrade) {
	if(signedGrade > 150){
		throw Form::GradeTooLowException();
	}
	else if(execGrade > 150){
		throw Form::GradeTooLowException();
	}
	if(signedGrade < 1){
		throw Form::GradeTooHighException();
	}
	else if(execGrade < 1){
		throw Form::GradeTooHighException();
	}
};

// COPY FUNCTION
Form::Form(Form const& src)
: _name(src._name), _signed(src._signed),_signedGrade(src._signedGrade), _execGrade(src._execGrade) {
};

Form	&Form::operator=(Form const& og){
	if(this != &og){
		this->_signed = og._signed;
	}
	return *this;
};

// GET ATTRIBUT FUNCTION
std::string const	Form::getName(void) const{
	return(_name);
};

int		Form::getSignedGrade()const{
	return(_signedGrade);
}
int					Form::getExecGrade()const {
	return(_execGrade);
};
bool 				Form::getState(void) const{
	return(_signed);
};

void				Form::beSigned(Bureaucrat signatory){
	if(_signedGrade >= signatory.getGrade())
		_signed = true;
	else
		throw(Form::GradeTooLowException());
};

//std::exception Function
const char*	Form::GradeTooHighException::what() const throw(){
	return ("Grade is too high");
}

const char*	Form::GradeTooLowException::what() const throw(){
	return ("Grade is too low");
}