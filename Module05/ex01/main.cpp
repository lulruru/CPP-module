#include <iostream>
#include "Bureaucrat.hpp"
int main()
{
	{
		Form formA("Contract", 1, 2);
		Form formB("Contract", 5, 2);
		Form formC("Contract", 99, 2);
		Bureaucrat buroA("Jean", 3);
		Bureaucrat buroB("Jeanne", 50);
		Bureaucrat buroC("Jen", 100);

		try{
			std::cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" << std::endl;
			buroA.signForm(formA);
			buroA.signForm(formB);
			buroA.signForm(formC);
			std::cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" << std::endl;
			buroB.signForm(formA);
			buroB.signForm(formB);
			buroB.signForm(formC);
			std::cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" << std::endl;
			buroC.signForm(formA);
			buroC.signForm(formB);
			buroC.signForm(formC);
			std::cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" << std::endl;
		}
		catch(std::exception &e){
			std::cout << e.what() << std::endl;
		}
	}
	{
		try{
			Form formD("Contract", 0, 15);
			Form formE("Contract", 12, 178);
		}
		catch(std::exception &e){
			std::cout << e.what() << std::endl;
		}
	}
}