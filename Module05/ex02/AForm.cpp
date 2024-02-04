/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: russelenc <russelenc@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/03 21:18:06 by russelenc         #+#    #+#             */
/*   Updated: 2024/02/04 20:23:47 by russelenc        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AForm.hpp"
// CONSTRUCTOR

AForm::AForm() : _name("Name"), _signed(false),_signedGrade(150), _execGrade(150) {
	
};

AForm::~AForm(){
	
};

AForm::AForm(std::string const name, int const signedGrade, int const execGrade) 
: _name(name), _signed(false),_signedGrade(signedGrade), _execGrade(execGrade) {
	if(signedGrade > 150){
		throw AForm::GradeTooLowException();
	}
	else if(execGrade > 150){
		throw AForm::GradeTooLowException();
	}
	if(signedGrade < 1){
		throw AForm::GradeTooHighException();
	}
	else if(execGrade < 1){
		throw AForm::GradeTooHighException();
	}
};

// COPY FUNCTION
AForm::AForm(AForm const& src)
: _name(src._name), _signed(src._signed),_signedGrade(src._signedGrade), _execGrade(src._execGrade) {
};

AForm	&AForm::operator=(AForm const& og){
	if(this != &og){
		this->_signed = og._signed;
	}
	return *this;
};

// GET ATTRIBUT FUNCTION
std::string const	AForm::getName(void) const{
	return(_name);
};

int		AForm::getSignedGrade()const{
	return(_signedGrade);
}
int					AForm::getExecGrade()const {
	return(_execGrade);
};
bool 				AForm::getState(void) const{
	return(_signed);
};

void				AForm::beSigned(Bureaucrat signatory){
	if(_signedGrade >= signatory.getGrade())
		_signed = true;
	else
		throw(AForm::GradeTooLowException());
};

//std::exception Function
const char*	AForm::GradeTooHighException::what() const throw(){
	return ("Grade is too high");
}

const char*	AForm::GradeTooLowException::what() const throw(){
	return ("Grade is too low");
}
const char*	AForm::FormNotSigned::what() const throw(){
	return ("Form is not Signed");
}
//surcharge d'operateur output
std::ostream&	operator<<(std::ostream& o, AForm const& form){
	o << "Forms's name : " << form.getName() << std::endl;
	if(form.getState())
		o << "Form's state : signed" << std::endl;
	else
		o << "Form's state : not signed" << std::endl;
	o << "Grade for signature : " << form.getSignedGrade() << std::endl;
	o << "Grade for execution : " << form.getExecGrade() << std::endl;
	return (o);
};