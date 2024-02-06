#ifndef PRESIDENTIALPARDONFORM_HPP
#define PRESIDENTIALPARDONFORM_HPP

#include "AForm.hpp"
#include <iostream>
#include "Bureaucrat.hpp"
class PresidentialPardonForm: public AForm{
public:
    PresidentialPardonForm();
    ~PresidentialPardonForm();
	PresidentialPardonForm(std::string target);
    PresidentialPardonForm(const PresidentialPardonForm &rhs);
    PresidentialPardonForm &operator=(const PresidentialPardonForm &rhs);
	void execute(Bureaucrat const &bureaucrat) const;
private:
	std::string _target;
};

#endif // PRESIDENTIALPARDONFORM_HPP
