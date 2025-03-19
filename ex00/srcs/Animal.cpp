/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bsengeze <bsengeze@student.42berlin.de>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/19 21:14:04 by bsengeze          #+#    #+#             */
/*   Updated: 2025/03/19 21:14:14 by bsengeze         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

// Default constructor
Animal::Animal() : type("Animal")
{
  std::cout << "Animal default constructor called" << std::endl;
}

// Copy constructor
Animal::Animal(const Animal &other) : type(other.type)
{
  std::cout << "Animal copy constructor called" << std::endl;
}

// Copy assignment operator
Animal &Animal::operator=(const Animal &other)
{
  std::cout << "Animal assignment operator called" << std::endl;
  if (this != &other)
  {
    this->type = other.type;
  }
  return *this;
}

// Destructor
Animal::~Animal()
{
  std::cout << "Animal destructor called" << std::endl;
}

std::string Animal::getType() const
{
  return this->type;
}

void Animal::makeSound() const
{
  std::cout << "* silence *" << std::endl;
}
