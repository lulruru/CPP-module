#include <iostream>
#include "Bureaucrat.hpp"
#include "ShrubberyCreationForm.hpp"

int main()
{
	{
		ShrubberyCreationForm form;
		Bureaucrat buroA("Jean", 3);
		Bureaucrat buroB("Jeanne", 50);
		Bureaucrat buroC("Jen", 100);

		try{
			std::cout << form << std::endl;
			std::cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" << std::endl;
			buroA.signForm(form);
			// buroA.signForm(form);
			// buroA.signForm(form);
			std::cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" << std::endl;
			buroB.signForm(form);
			// buroB.signForm(formB);
			// buroB.signForm(formC);
			std::cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" << std::endl;
			buroC.signForm(form);
			// buroC.signForm(formB);
			// buroC.signForm(formC);
			std::cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" << std::endl;
		}
		catch(std::exception &e){
			std::cout << e.what() << std::endl;
		}
	}
}