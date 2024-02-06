#include <iostream>
#include "Bureaucrat.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"
#include <unistd.h>

int main()
{
	{
		ShrubberyCreationForm form("test");
		ShrubberyCreationForm formB("test2");
		Bureaucrat buroA("Jean", 3);
		Bureaucrat buroB("Jeanne", 50);
		Bureaucrat buroC("Jen", 100);

		try{
			std::cout << form << std::endl;
			std::cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" << std::endl;
			buroA.signForm(form);
			buroA.executeForm(form);
			// buroA.signForm(form);
			std::cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" << std::endl;
			std::cout << buroB << std::endl;
			buroB.executeForm(formB);
			buroB.signForm(formB);
			std::cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" << std::endl;
			buroB.executeForm(formB);
			// buroC.signForm(formB);
			// buroC.signForm(formC);
			std::cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" << std::endl;
		}
		catch(std::exception &e){
			std::cout << e.what() << std::endl;
		}
	}
	{
		RobotomyRequestForm form("test");
		RobotomyRequestForm formB("test2");
		Bureaucrat buroA("Jean", 3);
		Bureaucrat buroB("Jeanne", 50);
		Bureaucrat buroC("Jen", 45);

		try{
			std::cout << form << std::endl;
			std::cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" << std::endl;
			buroA.signForm(form);
			buroA.executeForm(form);
			// buroA.signForm(form);
			std::cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" << std::endl;
			std::cout << buroB << std::endl;
			buroB.executeForm(formB);
			buroB.signForm(formB);
			std::cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" << std::endl;
			sleep(1);
			buroC.executeForm(formB);
			// buroC.signForm(formB);
			// buroC.signForm(formC);
			std::cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" << std::endl;
		}
		catch(std::exception &e){
			std::cout << e.what() << std::endl;
		}
	}
	{
		PresidentialPardonForm form("test");
		PresidentialPardonForm formB("test2");
		Bureaucrat buroA("Jean", 25);
		Bureaucrat buroB("Jeanne", 50);
		Bureaucrat buroC("Jen", 3);

		try{
			std::cout << form << std::endl;
			std::cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" << std::endl;
			std::cout << buroA << std::endl;
			buroA.signForm(form);
			std::cout << form << std::endl;
			buroA.executeForm(form);
			// buroA.signForm(form);
			std::cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" << std::endl;
			std::cout << buroB << std::endl;
			buroB.executeForm(formB);
			buroB.signForm(formB);
			std::cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" << std::endl;
			sleep(1);
			std::cout << buroC << std::endl;
			std::cout << formB << std::endl;
			buroC.executeForm(formB);
			buroC.signForm(formB);
			std::cout << formB << std::endl;
			buroC.executeForm(formB);
			// buroC.signForm(formB);
			// buroC.signForm(formC);
			std::cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" << std::endl;
		}
		catch(std::exception &e){
			std::cout << e.what() << std::endl;
		}
	}
}