#pragma once
#include "Contact.hpp"
#include <cstddef>
#include <string>

class Phonebook {
	public:
		Phonebook();
		void addContact(const Contact &newContact);
		bool searchContact();
		~Phonebook();
	private:
		Contact			_contactList[8];
		std::size_t		_indexContactToAdd;
		std::size_t		_totalContact;
		bool			_getUserInput(std::string &userInput, int &index);
		bool			_checkIndex(int index) const;
};
