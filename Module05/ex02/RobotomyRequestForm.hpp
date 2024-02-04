#ifndef ROBOTOMYREQUESTFORM_HPP
#define ROBOTOMYREQUESTFORM_HPP

#include "AForm.hpp"
#include <iostream>
#include "Bureaucrat.hpp"
#include <cstdlib>
#include <ctime>
class RobotomyRequestForm: public AForm{
public:
    RobotomyRequestForm();
	RobotomyRequestForm(std::string target);
    ~RobotomyRequestForm();
    RobotomyRequestForm(const RobotomyRequestForm &rhs);
    RobotomyRequestForm &operator=(const RobotomyRequestForm &rhs);
	void execute(Bureaucrat const &bureaucrat) const;
private:
	std::string _target;
};

#endif // ROBOTOMYREQUESTFORM_HPP
