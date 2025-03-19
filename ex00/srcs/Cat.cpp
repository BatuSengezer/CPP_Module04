/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bsengeze <bsengeze@student.42berlin.de>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/19 21:18:05 by bsengeze          #+#    #+#             */
/*   Updated: 2025/03/19 21:18:06 by bsengeze         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

// Default constructor
Cat::Cat()
{
  this->type = "Cat";
  std::cout << "Cat default constructor called" << std::endl;
}

// Copy constructor
Cat::Cat(const Cat &other) : Animal(other)
{
  std::cout << "Cat copy constructor called" << std::endl;
}

// Copy assignment operator
Cat &Cat::operator=(const Cat &other)
{
  std::cout << "Cat assignment operator called" << std::endl;
  if (this != &other)
  {
    Animal::operator=(other);
  }
  return *this;
}

// Destructor
Cat::~Cat()
{
  std::cout << "Cat destructor called" << std::endl;
}

void Cat::makeSound() const
{
  std::cout << "Meow!" << std::endl;
}
