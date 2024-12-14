#include "./Animal.hpp"
#include "./Dog.hpp"
#include "./Cat.hpp"
#include "./WrongAnimal.hpp"
#include "./WrongCat.hpp"
#include <iostream>

int main() {
    std::cout << "=== Testing Animal, Dog, and Cat ===" << std::endl;

    // Polymorphism with Animal, Dog, and Cat
    const Animal* animalDog = new Dog();
    const Animal* animalCat = new Cat();

    std::cout << "-------------------------------------" << std::endl;

    animalDog->makeSound(); // Dog's makeSound
    animalCat->makeSound(); // Cat's makeSound

    std::cout << "-------------------------------------" << std::endl;

    delete animalDog;
    delete animalCat;

    std::cout << "-------------------------------------" << std::endl;

    // Direct instances of Animal, Dog, and Cat
    std::cout << "=== Direct instances of Animal, Dog, and Cat ===" << std::endl;

    Dog dogInstance;
    Cat catInstance;
    Animal animalInstance;

    std::cout << "-------------------------------------" << std::endl;

    dogInstance.makeSound(); // Dog's makeSound
    catInstance.makeSound(); // Cat's makeSound
    animalInstance.makeSound(); // Animal's makeSound

    std::cout << "-------------------------------------" << std::endl;

    // Testing WrongAnimal and WrongCat
    std::cout << "=== Testing WrongAnimal and WrongCat ===" << std::endl;

    const WrongAnimal* wrongAnimal = new WrongAnimal();
    const WrongAnimal* wrongCat = new WrongCat();

    std::cout << "-------------------------------------" << std::endl;

    wrongAnimal->makeSound(); // WrongAnimal's makeSound
    wrongCat->makeSound();    // Incorrectly calls WrongAnimal's makeSound

    std::cout << "-------------------------------------" << std::endl;

    delete wrongAnimal;
    delete wrongCat;

    std::cout << "-------------------------------------" << std::endl;

    // Direct instances of WrongAnimal and WrongCat
    std::cout << "=== Direct instances of WrongAnimal and WrongCat ===" << std::endl;

    WrongAnimal wrongAnimalInstance;
    WrongCat wrongCatInstance;

    wrongAnimalInstance.makeSound(); // WrongAnimal's makeSound
    wrongCatInstance.makeSound();    // WrongCat's makeSound

    std::cout << "-------------------------------------" << std::endl;

    // Array of Animal pointers to test polymorphism
    std::cout << "=== Testing Polymorphism with an Array of Animals ===" << std::endl;

    const Animal* animals[4];
    animals[0] = new Dog();
    animals[1] = new Cat();
    animals[2] = new Dog();
    animals[3] = new Cat();

    for (int i = 0; i < 4; i++) {
        animals[i]->makeSound();
    }

    for (int i = 0; i < 4; i++) {
        delete animals[i];
    }

    std::cout << "-------------------------------------" << std::endl;

    return 0;
}


// int	main(void)
// {
// 	const Animal	*meta = new Animal();
// 	const Animal	*j = new Dog();
// 	const Animal	*i = new Cat();
//
// 	std::cout << j->getType() << " " << std::endl;
// 	std::cout << i->getType() << " " << std::endl;
//
// 	i->makeSound();
// 	j->makeSound();
// 	meta->makeSound();
//
// 	delete meta;
// 	delete i;
// 	delete j;
// 	return (0);
// }
