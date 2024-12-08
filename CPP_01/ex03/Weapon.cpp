#include "./Weapon.hpp"
#include <string>

Weapon::Weapon(std::string &type) : _type(type) {
}

const std::string&	Weapon::getType() const
{
	return (_type);
}

void	Weapon::setType(std::string newType)
{
	this->_type = newType;
}

Weapon::~Weapon() {
}
