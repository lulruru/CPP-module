#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm()  : AForm("RobotomyRequestForm",72, 45), _target("Default"){
}

RobotomyRequestForm::~RobotomyRequestForm() {
}

RobotomyRequestForm::RobotomyRequestForm(std::string target) : AForm("RobotomyRequestForm",72, 45), _target(target){

}

RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm &rhs) {
    *this = rhs;
}

RobotomyRequestForm &RobotomyRequestForm::operator=(const RobotomyRequestForm &rhs) {
    if (this != &rhs) {
       _target = rhs._target;
    }
    return *this;
}

void RobotomyRequestForm::execute(Bureaucrat const &bureaucrat) const{
 	if(bureaucrat.getGrade() <= this->getExecGrade() && this->getState())
	{
		std::cout << " \'Makes some drilling noises...\' " << std::endl;
		std::srand(static_cast<unsigned int>(std::time(nullptr)));
		if((std::rand() % 2 ) == 0)
			std::cout << _target << " have been robotomized." << std::endl;
		else
			std::cout << _target <<" robotomized failed" << std::endl;

	}
	else if(bureaucrat.getGrade() > this->getExecGrade())
		throw GradeTooLowException();
	else
		throw FormNotSigned();
}