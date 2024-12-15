#include "./Animal.hpp"
#include "./Dog.hpp"
#include "./Cat.hpp"
#include <iostream>

int	main()
{
	// Animal	pilou;
	// Animal	*pilou = new Animal();
	// pilou->makeSound();

	Animal	*animal_array[10];

	for (int i = 0; i < 10; i++)
	{
		if (i < 5)
			animal_array[i] = new Cat();
		else
			animal_array[i] = new Dog();
	}
	std::cout << std::endl;
	for (int i = 0; i < 10; i++)
		animal_array[i]->makeSound();
	std::cout << std::endl;
	for (int i = 0; i < 10; i++)
		delete animal_array[i]; 

	return (0);
}


// int main() {
//     const Animal* dog = new Dog();
//     const Animal* cat = new Cat();
//
//     std::cout << "Dog sound: ";
//     dog->makeSound();
//
//     std::cout << "Cat sound: ";
//     cat->makeSound();
//
//     delete dog;
//     delete cat;
//
//     std::cout << "\nTesting deep copy:" << std::endl;
//
//     Dog dog1;
//     Dog dog2 = dog1;  // Calls copy constructor
//
//     dog1.makeSound();
//     dog2.makeSound();
//
//     return 0;
// }

// int	main(void)
// {
// 	const Animal	*j = new Dog();
// 	const Animal	*i = new Cat();
//
// 	delete i;
// 	delete j;
// 	return (0);
// }
