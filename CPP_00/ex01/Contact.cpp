#include "./Contact.hpp"
#include <iomanip>
#include <iostream>
#include <sstream>
#include <string>

Contact::Contact()
{
}

void Contact::setContact(const std::string firstName, const std::string lastName,
						const std::string nickName, const std::string phoneNumber,
						const std::string darkestSecret)
{
	this->_firstName = firstName;
	this->_lastName = lastName;
	this->_nickName = nickName;
	this->_phoneNumber = phoneNumber;
	this->_darkestSecret = darkestSecret;
}

void	Contact::displayContact() const
{
	std::cout << "first name : " << this->_firstName << std::endl;
	std::cout << "last name : " << this->_lastName << std::endl;
	std::cout << "nickname : " << this->_nickName << std::endl;
	std::cout << "phone number : " << this->_phoneNumber << std::endl;
	std::cout << "darkest secret : " << this->_darkestSecret << std::endl;
}

std::string	Contact::_formatColumn(std::string &str)
{
	if (str.length() > 10)
		return (str.substr(0, 9) + ".");
	else
		return (std::string(10 - str.length(), ' ') + str);
}

std::string	Contact::_castToString(int i)
{
	std::ostringstream	streamString;
	std::string			str;
	streamString << i;
	str = streamString.str();
	return (str);
}

void	Contact::displayHeader(int index)
{
	std::cout << "|" << std::setw(9) << index
		<< "|" << Contact::_formatColumn(this->_firstName)
		<< "|" << Contact::_formatColumn(this->_lastName)
		<< "|" << Contact::_formatColumn(this->_nickName)
		<< std::endl;
}

Contact::~Contact()
{
}
