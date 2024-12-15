#pragma once

#include "WrongAnimal.hpp"

class WrongCat : public WrongAnimal{
	public:
		WrongCat();
		WrongCat(const WrongCat &copy);
		void	makeSound() const;
		WrongCat &operator=(const WrongCat &other);
		~WrongCat();
};
