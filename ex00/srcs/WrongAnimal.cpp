/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bsengeze <bsengeze@student.42berlin.de>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/19 21:19:50 by bsengeze          #+#    #+#             */
/*   Updated: 2025/03/19 21:19:57 by bsengeze         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAnimal.hpp"

// Default constructor
WrongAnimal::WrongAnimal() : type("WrongAnimal")
{
  std::cout << "WrongAnimal default constructor called" << std::endl;
}

// Copy constructor
WrongAnimal::WrongAnimal(const WrongAnimal &other) : type(other.type)
{
  std::cout << "WrongAnimal copy constructor called" << std::endl;
}

// Copy assignment operator
WrongAnimal &WrongAnimal::operator=(const WrongAnimal &other)
{
  std::cout << "WrongAnimal assignment operator called" << std::endl;
  if (this != &other)
  {
    this->type = other.type;
  }
  return *this;
}

// Destructor
WrongAnimal::~WrongAnimal()
{
  std::cout << "WrongAnimal destructor called" << std::endl;
}

std::string WrongAnimal::getType() const
{
  return this->type;
}

void WrongAnimal::makeSound() const
{
  std::cout << "* wrong silence *" << std::endl;
}
