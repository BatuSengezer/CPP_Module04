/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AAnimal.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bsengeze <bsengeze@student.42berlin.de>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/20 19:44:33 by bsengeze          #+#    #+#             */
/*   Updated: 2025/03/20 19:44:35 by bsengeze         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AAnimal.hpp"

AAnimal::AAnimal() : type("AAnimal")
{
  std::cout << "AAnimal default constructor called" << std::endl;
}

AAnimal::AAnimal(const AAnimal &other) : type(other.type)
{
  std::cout << "AAnimal copy constructor called" << std::endl;
}

AAnimal &AAnimal::operator=(const AAnimal &other)
{
  std::cout << "AAnimal assignment operator called" << std::endl;
  if (this != &other)
  {
    this->type = other.type;
  }
  return *this;
}

AAnimal::~AAnimal()
{
  std::cout << "AAnimal destructor called" << std::endl;
}

std::string AAnimal::getType() const
{
  return this->type;
}