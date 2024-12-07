#include "./Phonebook.hpp"
#include "Contact.hpp"
#include <cctype>
#include <cstdlib>
#include <iostream>
#include <string>

Phonebook::Phonebook() : _indexContactToAdd(0), _totalContact(0)
{
	std::cout << "Phonebook constructor called" << std::endl;
}

void	Phonebook::addContact(const Contact &newContact)
{
	_contactList[_indexContactToAdd] = newContact;
	_indexContactToAdd++;
	if (_indexContactToAdd > 7)
		_indexContactToAdd = 0;
	if (_totalContact < 8)
		_totalContact++;
}

bool	Phonebook::_getUserInput(std::string &userInput, int &index)
{
	std::cout << "Enter index to display ! : ";

	std::getline(std::cin, userInput);
	if (!std::cin)
		return (std::cin.eof(), false);
	for (std::string::size_type i = 0; i < userInput.length(); i++) {
		if (!std::isdigit(userInput[i]))
			return (false);
	}
	index = atoi(userInput.c_str());
	return (true);
}

bool	Phonebook::_checkIndex(int	index) const
{
	if (index < 1 || index > _totalContact)
		return (false);
	return (true);
}

bool	Phonebook::searchContact()
{
	std::string	userInput;
	int			index;

	std::cout << "Contact list :" << std::endl;
	for (int i = 0; i < _totalContact; i++) {
		_contactList[i].displayHeader(i + 1);
	}

	if (!Phonebook::_getUserInput(userInput, index))
		return (std::cout << "Invalid input !" << std::endl, false);
	if (!Phonebook::_checkIndex(index))
		return (std::cout << "Invalid index !" << std::endl, false);
	_contactList[index - 1].displayContact();
	return (true);
}

Phonebook::~Phonebook()
{
	std::cout << "Phonebook destroyer called" << std::endl;
}
