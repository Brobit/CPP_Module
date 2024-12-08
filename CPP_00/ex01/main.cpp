#include "Phonebook.hpp"
#include "Contact.hpp"
#include <iostream>
#include <string>

#define COMMAND		"The available command are ADD, SEARCH and EXIT !"

int	main(void)
{
	Phonebook phonebook;
	std::string commandLine;

	std::cout << "Welcome to your personal Phonebook !" << std::endl;
	std::cout << COMMAND << std::endl;

	while (true)
	{
		std::cout << "Which command would you like to use ? : ";
		std::getline(std::cin, commandLine);

		if (std::cin.eof())
			return (std::cin.clear(), 0);
		if (commandLine == "ADD")
		{
			std::string firstName, lastName, nickName, phoneNumber, darkestSecret;

			std::cout << "Contact :" << std::endl;
			std::cout << "First name : ";
			std::getline(std::cin, firstName);
			std::cout << "Last name : ";
			std::getline(std::cin, lastName);
			std::cout << "Nickname : ";
			std::getline(std::cin, nickName);
			std::cout << "Phone number : ";
			std::getline(std::cin, phoneNumber);
			std::cout << "Darkest secret : ";
			std::getline(std::cin, darkestSecret);

			Contact newContact;
			newContact.setContact(firstName, lastName, nickName, phoneNumber, darkestSecret);
			phonebook.addContact(newContact);
		}
		else if (commandLine == "SEARCH")
		{
			if (!phonebook.searchContact())
				std::cout << "Exit SEARCH command due to an input error" << std::endl;
		}
		else if (commandLine == "EXIT")
			return (std::cout << "See you soon !" << std::endl, 0);
		std::cout << COMMAND << std::endl;
		commandLine.clear();
		std::cin.clear();
	}
	return (0);
}
