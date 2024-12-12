#pragma once

#include <string>
#include "./Animal.hpp"

class Dog : public Animal {
	public:
		Dog();
		Dog(const Dog &copy);

		Dog &operator=(const Dog &);

		virtual void	makeSound() const;

		virtual ~Dog();

	protected:
		std::string _type;
};
