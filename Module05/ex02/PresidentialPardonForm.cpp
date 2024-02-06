#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm() : AForm("PresidentialPardonForm",25, 5), _target("Default") {
}
PresidentialPardonForm::PresidentialPardonForm(std::string target) : AForm("PresidentialPardonForm",25, 5), _target(target) {
}
PresidentialPardonForm::~PresidentialPardonForm() {
}

PresidentialPardonForm::PresidentialPardonForm(const PresidentialPardonForm &rhs) {
    *this = rhs;
}

PresidentialPardonForm &PresidentialPardonForm::operator=(const PresidentialPardonForm &rhs) {
    if (this != &rhs) {
       _target = rhs._target;
    }
    return *this;
}

void PresidentialPardonForm::execute(Bureaucrat const &bureaucrat) const{
	if(bureaucrat.getGrade() <= this->getExecGrade() && this->getState())
		std::cout <<  _target << " has been pardoned by Zaphod Beeblebrox." << std::endl;
	else if(bureaucrat.getGrade() > this->getExecGrade())
		throw GradeTooLowException();
	else
		throw FormNotSigned();
}