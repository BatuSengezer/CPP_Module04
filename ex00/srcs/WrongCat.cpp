/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bsengeze <bsengeze@student.42berlin.de>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/19 21:20:39 by bsengeze          #+#    #+#             */
/*   Updated: 2025/03/20 18:46:55 by bsengeze         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongCat.hpp"

WrongCat::WrongCat() : WrongAnimal()
{
  this->type = "WrongCat";
  std::cout << "WrongCat default constructor called" << std::endl;
}

WrongCat::WrongCat(const WrongCat &other) : WrongAnimal(other)
{
  std::cout << "WrongCat copy constructor called" << std::endl;
}

WrongCat &WrongCat::operator=(const WrongCat &other)
{
  std::cout << "WrongCat assignment operator called" << std::endl;
  if (this != &other)
  {
    WrongAnimal::operator=(other);
  }
  return *this;
}

WrongCat::~WrongCat()
{
  std::cout << "WrongCat destructor called" << std::endl;
}

void WrongCat::makeSound() const
{
  std::cout << "Wrong Meow!" << std::endl;
}
