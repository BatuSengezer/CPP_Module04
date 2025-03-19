/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bsengeze <bsengeze@student.42berlin.de>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/19 21:16:06 by bsengeze          #+#    #+#             */
/*   Updated: 2025/03/19 21:16:40 by bsengeze         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
#define DOG_HPP

#include <string>
#include <iostream>
#include "Animal.hpp"

class Dog : public Animal
{
public:
  // Orthodox Canonical Form
  Dog();                            // Default constructor
  Dog(const Dog &other);            // Copy constructor
  Dog &operator=(const Dog &other); // Copy assignment operator
  virtual ~Dog();                   // Destructor

  // Override makeSound method
  virtual void makeSound() const;
};

#endif
