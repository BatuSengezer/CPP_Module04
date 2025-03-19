/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bsengeze <bsengeze@student.42berlin.de>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/19 21:16:06 by bsengeze          #+#    #+#             */
/*   Updated: 2025/03/19 21:39:25 by bsengeze         ###   ########.fr       */
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
  Dog();
  Dog(const Dog &other);
  Dog &operator=(const Dog &other);
  virtual ~Dog();

  // Override makeSound method
  virtual void makeSound() const;
};

#endif
