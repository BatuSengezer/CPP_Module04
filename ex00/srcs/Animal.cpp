/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bsengeze <bsengeze@student.42berlin.de>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/19 21:14:04 by bsengeze          #+#    #+#             */
/*   Updated: 2025/03/19 21:40:42 by bsengeze         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

Animal::Animal() : type("Animal")
{
  std::cout << "Animal default constructor called" << std::endl;
}

Animal::Animal(const Animal &other) : type(other.type)
{
  std::cout << "Animal copy constructor called" << std::endl;
}

Animal &Animal::operator=(const Animal &other)
{
  std::cout << "Animal assignment operator called" << std::endl;
  if (this != &other)
  {
    this->type = other.type;
  }
  return *this;
}

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
