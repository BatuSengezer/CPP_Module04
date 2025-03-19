/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bsengeze <bsengeze@student.42berlin.de>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/19 21:16:51 by bsengeze          #+#    #+#             */
/*   Updated: 2025/03/19 21:17:00 by bsengeze         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

// Default constructor
Dog::Dog()
{
  this->type = "Dog";
  std::cout << "Dog default constructor called" << std::endl;
}

// Copy constructor
Dog::Dog(const Dog &other) : Animal(other)
{
  std::cout << "Dog copy constructor called" << std::endl;
}

// Copy assignment operator
Dog &Dog::operator=(const Dog &other)
{
  std::cout << "Dog assignment operator called" << std::endl;
  if (this != &other)
  {
    Animal::operator=(other);
  }
  return *this;
}

// Destructor
Dog::~Dog()
{
  std::cout << "Dog destructor called" << std::endl;
}

void Dog::makeSound() const
{
  std::cout << "Woof!" << std::endl;
}
