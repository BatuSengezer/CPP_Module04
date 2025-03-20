/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bsengeze <bsengeze@student.42berlin.de>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/19 21:45:49 by bsengeze          #+#    #+#             */
/*   Updated: 2025/03/20 17:23:06 by bsengeze         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"
int main()
{
  // Test basic functionality
  std::cout << "=== Basic functionality test ===" << std::endl;
  const Animal *j = new Dog();
  const Animal *i = new Cat();
  delete j; // should not create a leak
  delete i;

  // Test array of animals
  std::cout << "\n=== Array of animals test ===" << std::endl;
  const int numAnimals = 4;
  Animal *animals[numAnimals];

  // Fill half with Dogs and half with Cats
  for (int i = 0; i < numAnimals / 2; ++i)
  {
    animals[i] = new Dog();
  }
  for (int i = numAnimals / 2; i < numAnimals; ++i)
  {
    animals[i] = new Cat();
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
    Dog copyDog = originalDog; // Test copy constructor
  } // copyDog is destroyed here

  // This will still work because originalDog has its own Brain
  std::cout << "Original dog still exists" << std::endl;

  return 0;
}
