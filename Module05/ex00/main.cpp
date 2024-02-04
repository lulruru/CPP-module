#include <iostream>
#include "Bureaucrat.hpp"
int main()
{
	{
	Bureaucrat tom("Tom", 10);

	for(int i = 0; i < 10; i++)
	{
		try{
			tom.incrementGrade();
			std::cout << tom << std::endl; 
		}
		catch(std::exception &e){
			std::cout << e.what() << std::endl;
		}
	}
	}
	{
		Bureaucrat tom("Tom", 141);
		Bureaucrat pere(tom);
		for(int i = 0; i < 10; i++)
		{
			try{
				tom.decrementGrade();
				std::cout << tom << std::endl; 
			}
			catch(std::exception &e){
				std::cout << e.what() << std::endl;
			}
		}
		for(int i = 0; i < 10; i++)
		{
			try{
				pere.decrementGrade();
				std::cout << pere << std::endl; 
			}
			catch(std::exception &e){
				std::cout << e.what() << std::endl;
			}
		}
	}
}