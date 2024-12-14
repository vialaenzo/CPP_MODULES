#include "Bureaucrat.hpp"

// Constructeur
Bureaucrat::Bureaucrat(const std::string &name, int grade) : _name(name), _grade(grade)
{
	if (grade < 1)
		throw GradeTooHighException();
	if (grade > 150)
		throw GradeTooLowException();
}

// Destructeur
Bureaucrat::~Bureaucrat() {}

// Getters
const std::string &Bureaucrat::getName() const
{
	return _name;
}

int Bureaucrat::getGrade() const
{
	return _grade;
}

// Modifier le grade
void Bureaucrat::incrementGrade()
{
	if (_grade <= 1)
		throw GradeTooHighException();
	_grade--;
}

void Bureaucrat::decrementGrade()
{
	if (_grade >= 150)
		throw GradeTooLowException();
	_grade++;
}

// Surcharge de l'opérateur <<
std::ostream &operator<<(std::ostream &os, const Bureaucrat &b)
{
	os << b._name << ", bureaucrat grade " << b._grade << ".";
	return os;
}

void Bureaucrat::signForm(Form &f)
{
	try
	{
		f.beSigned(*this);
		std::cout << _name << " signs " << f.getName() << std::endl;
	}
	catch (std::exception &e)
	{
		std::cout << _name << " couldn’t sign " << f.getName() << " because " << e.what() << std::endl;
	}
}
