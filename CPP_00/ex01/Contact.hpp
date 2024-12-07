#pragma once

#include <cstddef>
#include <string>
class Contact {
	public:
		Contact();
		void setContact(const std::string firstName, const std::string lastName,
						const std::string nickName, const std::string phoneNumber,
						const std::string darkestSecret);
		void displayContact() const;
		void displayHeader(std::size_t index);
		~Contact();
	private:
		std::string _firstName;
		std::string _lastName;
		std::string _nickName;
		std::string _phoneNumber;
		std::string _darkestSecret;
		std::string	_formatColumn(std::string &str);
		std::string	_castToString(std::size_t index);
};
