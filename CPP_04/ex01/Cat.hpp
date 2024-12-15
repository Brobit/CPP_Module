#pragma once

#include "./Animal.hpp"
#include "./Brain.hpp"

class Cat : public Animal {
	public:
		Cat();
		Cat(const Cat &copy);

		Cat &operator=(const Cat &);

		virtual void	makeSound() const;

		virtual ~Cat();

	private:
		Brain *_brain;
};
