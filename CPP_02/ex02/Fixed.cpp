#include "./Fixed.hpp"
#include <cmath>
#include <iostream>
#include <ostream>

// Constructor -------------------------------------------

Fixed::Fixed() : _fixedPointNumber(0) {
	// std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed(const int number) {
	// std::cout << "Int constructor called" << std::endl;
	_fixedPointNumber = number << _fractionalBits;
}

Fixed::Fixed(const float number) {
	// std::cout << "Float constructor called" << std::endl;
	_fixedPointNumber = roundf(number * (1 << _fractionalBits));
}

Fixed::Fixed(const Fixed &copy) {
	// std::cout << "Copy constructor called" << std::endl;
	*this = copy;
}

// Operator ----------------------------------------------

// Assignment --------------------------------------------
Fixed &Fixed::operator=(const Fixed &copy)
{
	// std::cout << "Copy assignment operator called" << std::endl;
	if (this != &copy)
		this->_fixedPointNumber = copy.getRawBits();
	return (*this);
}

// Comparaison ------------------------------------------
bool	Fixed::operator>(const Fixed &other) const
{
	return (this->_fixedPointNumber > other._fixedPointNumber);
}

bool	Fixed::operator<(const Fixed &other) const
{
	return (this->_fixedPointNumber < other._fixedPointNumber);
}

bool	Fixed::operator>=(const Fixed &other) const
{
	return (this->_fixedPointNumber >= other._fixedPointNumber);
}

bool	Fixed::operator<=(const Fixed &other) const
{
	return (this->_fixedPointNumber <= other._fixedPointNumber);
}

bool	Fixed::operator==(const Fixed &other) const
{
	return (this->_fixedPointNumber == other._fixedPointNumber);
}

bool	Fixed::operator!=(const Fixed &other) const
{
	return (this->_fixedPointNumber != other._fixedPointNumber);
}

// Operation ---------------------------------------------

Fixed	Fixed::operator+(const Fixed &other)
{
	return (this->toFloat() + other.toFloat());
}

Fixed	Fixed::operator-(const Fixed &other)
{
	return (this->toFloat() - other.toFloat());
}

Fixed	Fixed::operator*(const Fixed &other)
{
	return (this->toFloat() * other.toFloat());
}

Fixed	Fixed::operator/(const Fixed &other)
{
	if (other.toFloat() == 0)
		return (0);
	return (this->toFloat() / other.toFloat());
}

// Increment / decrement ----------------------------------

Fixed	&Fixed::operator++()
{
	this->_fixedPointNumber++;
	return (*this);
}

Fixed	&Fixed::operator--()
{
	this->_fixedPointNumber--;
	return (*this);
}

Fixed	Fixed::operator++(int)
{
	Fixed	tmp(*this);
	this->_fixedPointNumber++;
	return (tmp);
}

Fixed	Fixed::operator--(int)
{
	Fixed	tmp(*this);
	this->_fixedPointNumber--;
	return (tmp);
}

// Min & Max ----------------------------------------------

Fixed	&Fixed::min(Fixed &a, Fixed &b)
{
	return ((a.getRawBits() < b.getRawBits()) ? a : b);
}

const Fixed	&Fixed::min(const Fixed &a, const Fixed &b)
{
	return ((a.getRawBits() < b.getRawBits()) ? a : b);
}

Fixed	&Fixed::max(Fixed &a, Fixed &b)
{
	return ((a.getRawBits() > b.getRawBits()) ? a : b);
}

const Fixed	&Fixed::max(const Fixed &a, const Fixed &b)
{
	return ((a.getRawBits() > b.getRawBits()) ? a : b);
}

// Member functions --------------------------------------

int	Fixed::getRawBits() const
{
	// std::cout << "getRawBits member function called" << std::endl;
	return (this->_fixedPointNumber);
}

void	Fixed::setRawBits(int const raw)
{
	// std::cout << "setRawBits member function called" << std::endl;
	this->_fixedPointNumber = raw;
}

float	Fixed::toFloat() const
{
	return (static_cast<float>(this->_fixedPointNumber) / (1 << this->_fractionalBits));
}

int		Fixed::toInt() const
{
	return (this->_fixedPointNumber >> this->_fractionalBits);
}

// Output stream operator ---------------------------------

std::ostream& operator<<(std::ostream& out, const Fixed& fixed)
{
	return (out << fixed.toFloat());
}

// Destructor ---------------------------------------------

Fixed::~Fixed() {
	// std::cout << "Destructor called !" << std::endl;
}
