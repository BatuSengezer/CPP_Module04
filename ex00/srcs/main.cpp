/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bsengeze <bsengeze@student.42berlin.de>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/19 21:45:49 by bsengeze          #+#    #+#             */
/*   Updated: 2025/03/19 21:45:54 by bsengeze         ###   ########.fr       */
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
  // Test proper polymorphic behavior
  std::cout << "=== Testing proper polymorphism ===" << std::endl;
  const Animal *meta = new Animal();
  const Animal *j = new Dog();
  const Animal *i = new Cat();

  std::cout << j->getType() << " " << std::endl;
  std::cout << i->getType() << " " << std::endl;
  i->makeSound();    // will output the cat sound
  j->makeSound();    // will output the dog sound
  meta->makeSound(); // will output the animal sound

  // Cleanup
  delete meta;
  delete j;
  delete i;

  // Test improper polymorphic behavior
  std::cout << "\n=== Testing improper polymorphism ===" << std::endl;
  const WrongAnimal *wrongMeta = new WrongAnimal();
  const WrongAnimal *wrongCat = new WrongCat();

  std::cout << wrongCat->getType() << " " << std::endl;
  wrongCat->makeSound(); // will NOT output the cat sound, but the animal sound!
  wrongMeta->makeSound();

  // Cleanup
  delete wrongMeta;
  delete wrongCat;

  return 0;
}
