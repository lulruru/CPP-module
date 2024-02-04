#ifndef SHRUBBERYCREATIONFORM_HPP
#define SHRUBBERYCREATIONFORM_HPP

#include "AForm.hpp"
#include <iostream>
#include "Bureaucrat.hpp"

class ShrubberyCreationForm : public AForm{
public:
    ShrubberyCreationForm();
	ShrubberyCreationForm(std::string target);
    ~ShrubberyCreationForm();
    ShrubberyCreationForm(const ShrubberyCreationForm &rhs);
    ShrubberyCreationForm &operator=(const ShrubberyCreationForm &rhs);
	void printTree() const;
	void execute(Bureaucrat const &bureaucrat) const;

private :
	std::string _target;
};

#endif // SHRUBBERYCREATIONFORM_HPP
