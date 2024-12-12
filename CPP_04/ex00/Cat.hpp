#pragma once

#include "./Animal.hpp"
#include <string>

class Cat : public Animal {
	public:
		Cat();
		Cat(const Cat &copy);

		Cat &operator=(const Cat &);

		virtual void	makeSound() const;

		virtual ~Cat();

	protected:
		std::string _type;
};
