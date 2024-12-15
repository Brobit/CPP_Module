#pragma once

#include <string>

class WrongAnimal {
	public:
		WrongAnimal();
		WrongAnimal(const std::string &type);
		WrongAnimal(const WrongAnimal &copy);

		WrongAnimal &operator=(const WrongAnimal &other);

		void	makeSound() const;	
		std::string		getType() const;

		~WrongAnimal();

	protected:
		std::string _type;
};
