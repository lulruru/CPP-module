#ifndef ROBOTOMYREQUESTFORM_HPP
#define ROBOTOMYREQUESTFORM_HPP

#include "AForm.hpp"
#include <iostream>
#include "Bureaucrat.hpp"
class RobotomyRequestForm: public AForm{
public:
    RobotomyRequestForm();
    ~RobotomyRequestForm();
    RobotomyRequestForm(const RobotomyRequestForm &rhs);
    RobotomyRequestForm &operator=(const RobotomyRequestForm &rhs);
	void execute(Bureaucrat const &bureaucrat);
};

#endif // ROBOTOMYREQUESTFORM_HPP
