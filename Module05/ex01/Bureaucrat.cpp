/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: russelenc <russelenc@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/03 18:32:39 by russelenc         #+#    #+#             */
/*   Updated: 2024/02/04 17:05:04 by russelenc        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat(){
	
};

Bureaucrat::~Bureaucrat(){
	
};

Bureaucrat::Bureaucrat(std::string name, int grade) : _name(name){
	if(grade > 150)
		throw GradeTooLowException();
	else if(grade < 1)
		throw GradeTooHighException();
	else
		_grade = grade;
};

Bureaucrat::Bureaucrat(Bureaucrat const &og) : _name(og._name) , _grade(og._grade){
	
};

Bureaucrat &Bureaucrat::operator=(Bureaucrat const &og){
	if(this != &og)
	{
		*this = og;
	}
	return *this;
};
std::ostream& operator<<(std::ostream &out, Bureaucrat const &bureaucrat)
{
	out << bureaucrat.getName() << ", bureaucrat grade " <<  bureaucrat.getGrade() << std::endl;
	return(out);
}

std::string const Bureaucrat::getName() const{
	return this->_name;
};

int Bureaucrat::getGrade()const{
	return this->_grade;
};

void Bureaucrat::incrementGrade(){
	if(_grade == 1)
		throw(GradeTooHighException());
	this->_grade--;
};

void Bureaucrat::decrementGrade(){
	if(_grade == 150)
		throw(GradeTooLowException());
	this->_grade++;
};

const char*	Bureaucrat::GradeTooHighException::what() const throw(){
	return ("Grade is too high");
}

const char*	Bureaucrat::GradeTooLowException::what() const throw(){
	return ("Grade is too low");
}
void				Bureaucrat::signForm(Form &form){
	try{
		form.beSigned(*this);
		std::cout << _name << " signed " << form.getName() << std::endl;
	}
	catch(std::exception &e){
		std::cout << _name << " couldn't sign the form : " << form.getName() \
		<< ", because "<< e.what() << std::endl;
	}
};