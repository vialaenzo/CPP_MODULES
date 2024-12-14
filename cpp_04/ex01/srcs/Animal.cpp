#include "Animal.hpp"

Animal::Animal() : _type("(null)")
{
	std::cout << "Objet Animal has been created !" << std::endl;
}

Animal::Animal(const std::string type) : _type(type)
{
	std::cout << "Objet Animal (" << this->_type << ") has been created !" << std::endl;
}

Animal::~Animal()
{
	std::cout << "Objet Animal has been deleted !" << std::endl;
}

Animal::Animal(Animal const &src) : _type(src._type)
{
	std::cout << "Objet Animal has been copied !" << std::endl;
}

Animal &Animal::operator=(Animal const &src)
{
	if (this != &src)
	{
		_type = src._type;
	}
	return (*this);
}
std::string Animal::getType() const
{
	return (this->_type);
}

void Animal::makeSound() const
{
	std::cout << "l'animal fait le son" << std::endl;
}

void Animal::think() const
{
	std::cout << "l'animal pense" << std::endl;
}

void Animal::explainideas() const
{
	std::cout << "l'animal explique ses idées" << std::endl;
}