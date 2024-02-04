#include "ShrubberyCreationForm.hpp"
#include <fstream>

ShrubberyCreationForm::ShrubberyCreationForm() : AForm("ShrubberyCreationForm", 145, 137), _target("Default"){
}
ShrubberyCreationForm::ShrubberyCreationForm(std::string target) : AForm("ShrubberyCreationForm", 145, 137), _target(target){
}
ShrubberyCreationForm::~ShrubberyCreationForm() {
}

ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm &rhs) {
    *this = rhs;
}
void ShrubberyCreationForm::printTree(){
	std::ofstream o;
	o.open((_target + "_shrubbery").c_str());
	o <<"	                                                         ." << std::endl
	<<"                                              .         ;  " << std::endl
	<<"                 .              .              ;%     ;;   " << std::endl
	<<"                   ,           ,                :;%  %;   " << std::endl
	<<"                    :         ;                   :;%;'     .,"    << std::endl
	<<"           ,.        %;     %;            ;        %;'    ,;" << std::endl
	<<"             ;       ;%;  %%;        ,     %;    ;%;    ,%'" << std::endl
	<<"              %;       %;%;      ,  ;       %;  ;%;   ,%;' " << std::endl
	<<"               ;%;      %;        ;%;        % ;%;  ,%;'" << std::endl
	<<"                `%;.     ;%;     %;'         `;%%;.%;'" << std::endl
	<<"                 `:;%.    ;%%. %@;        %; ;@%;%'" << std::endl
	<<"                    `:%;.  :;bd%;          %;@%;'" << std::endl
	<<"                      `@%:.  :;%.         ;@@%;'   " << std::endl
	<<"                        `@%.  `;@%.      ;@@%;         " << std::endl
	<<"                          `@%%. `@%%    ;@@%;        " << std::endl
	<<"                            ;@%. :@%%  %@@%;       " << std::endl
	<<"                              %@bd%%%bd%%:;     " << std::endl
	<<"                                #@%%%%%:;;" << std::endl
	<<"                                %@@%%%::;" << std::endl
	<<"                                %@@@%(o);  . '         " << std::endl
	<<"                                %@@@o%;:(.,'         " << std::endl
	<<"                            `.. %@@@o%::;         " << std::endl
	<<"                               `)@@@o%::;         " << std::endl
	<<"                                %@@(o)::;        " << std::endl
	<<"                               .%@@@@%::;         " << std::endl
	<<"                               ;%@@@@%::;.          " << std::endl
	<<"                              ;%@@@@%%:;;;. " << std::endl
	<<"                          ...;%@@@@@%%:;;;;,..    " << std::endl;
};

void ShrubberyCreationForm::execute(Bureaucrat const &bureaucrat){
	if(bureaucrat.getGrade() <= this->getExecGrade() && this->getState())
		printTree();
	else
		throw GradeTooLowException();
}

ShrubberyCreationForm &ShrubberyCreationForm::operator=(const ShrubberyCreationForm &rhs) {
    if (this != &rhs) {
		this->_target = rhs._target;
    }
    return *this;
}
