/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bsengeze <bsengeze@student.42berlin.de>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/19 21:45:49 by bsengeze          #+#    #+#             */
/*   Updated: 2025/03/20 19:47:10 by bsengeze         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongCat.hpp"

int main()
{
  // This line would not compile:
  // const AAnimal* meta = new AAnimal();

  // Test basic functionality
  std::cout << "=== Basic functionality test ===" << std::endl;
  const AAnimal *j = new Dog();
  const AAnimal *i = new Cat();

  std::cout << j->getType() << " " << std::endl;
  j->makeSound();
  std::cout << i->getType() << " " << std::endl;
  i->makeSound();

  delete j;
  delete i;

  // Test array of animals
  std::cout << "\n=== Array of animals test ===" << std::endl;
  const int numAnimals = 4;
  AAnimal *animals[numAnimals];

  // Fill half with Dogs and half with Cats
  for (int i = 0; i < numAnimals / 2; ++i)
  {
    animals[i] = new Dog();
  }
  for (int i = numAnimals / 2; i < numAnimals; ++i)
  {
    animals[i] = new Cat();
  }

  // Make sounds
  for (int i = 0; i < numAnimals; ++i)
  {
    animals[i]->makeSound();
  }

  // Delete all animals
  for (int i = 0; i < numAnimals; ++i)
  {
    delete animals[i];
  }

  // Test deep copy
  std::cout << "\n=== Deep copy test ===" << std::endl;
  Dog originalDog;
  {
    Dog copyDog = originalDog;
  }
  std::cout << "Original dog still exists" << std::endl;

  return 0;
}