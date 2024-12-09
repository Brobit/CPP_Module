#include "./Fixed.hpp"
#include <iostream>

Fixed::Fixed() : _fixedPointNumber(0) {
	std::cout << "Constructor called !" << std::endl;
}

Fixed::Fixed(const Fixed &copy) {
	std::cout << "Copy constructor called !" << std::endl;
	*this = copy;
}

Fixed &Fixed::operator=(const Fixed &copy)
{
	std::cout << "Assignment operator called !" << std::endl;
	if (this != &copy)
		this->_fixedPointNumber = copy._fixedPointNumber;
	return (*this);
}

int	Fixed::getRawBits() const
{
	return (this->_fixedPointNumber);
}

void	Fixed::setRawBits(int const raw)
{
	this->_fixedPointNumber = raw;
}

Fixed::~Fixed() {
	std::cout << "Destructor called !" << std::endl;
}
