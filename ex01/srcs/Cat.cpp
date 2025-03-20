/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bsengeze <bsengeze@student.42berlin.de>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/19 21:18:05 by bsengeze          #+#    #+#             */
/*   Updated: 2025/03/20 17:21:06 by bsengeze         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"
#include "Brain.hpp"

Cat::Cat() : brain(new Brain())
{
  this->type = "Cat";
  std::cout << "Cat default constructor called" << std::endl;
}

Cat::Cat(const Cat &other) : Animal(other), brain(new Brain(*other.brain))
{
  std::cout << "Cat copy constructor called" << std::endl;
}

Cat &Cat::operator=(const Cat &other)
{
  std::cout << "Cat assignment operator called" << std::endl;
  if (this != &other)
  {
    Animal::operator=(other);
    delete brain;
    brain = new Brain(*other.brain);
  }
  return *this;
}

Cat::~Cat()
{
  delete brain;
  std::cout << "Cat destructor called" << std::endl;
}

void Cat::makeSound() const
{
  std::cout << "Meow!" << std::endl;
}
