#pragma once

#include <string>

class Animal {
	public:
		Animal();
		Animal(const std::string &type);
		Animal(const Animal &copy);

		Animal &operator=(const Animal &);

		virtual	void	makeSound() const;	

		virtual ~Animal();

	protected:
		std::string _type;
};
