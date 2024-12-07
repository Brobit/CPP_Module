#pragma once
#include "Contact.hpp"
#include <string>

class Phonebook {
	public:
		Phonebook();
		void addContact(const Contact &newContact);
		bool searchContact();
		~Phonebook();
	private:
		Contact			_contactList[8];
		int				_indexContactToAdd;
		int				_totalContact;
		bool			_getUserInput(std::string &userInput, int &index);
		bool			_checkIndex(int index) const;
};
