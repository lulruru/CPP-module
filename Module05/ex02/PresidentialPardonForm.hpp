#ifndef PRESIDENTIALPARDONFORM_HPP
#define PRESIDENTIALPARDONFORM_HPP

#include "AForm.hpp"
#include <iostream>
#include "Bureaucrat.hpp"
class PresidentialPardonForm: public AForm{
public:
    PresidentialPardonForm();
    ~PresidentialPardonForm();
    PresidentialPardonForm(const PresidentialPardonForm &rhs);
    PresidentialPardonForm &operator=(const PresidentialPardonForm &rhs);
	void execute(Bureaucrat const &bureaucrat);
};

#endif // PRESIDENTIALPARDONFORM_HPP
