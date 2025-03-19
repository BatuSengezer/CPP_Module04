/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bsengeze <bsengeze@student.42berlin.de>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/19 21:17:46 by bsengeze          #+#    #+#             */
/*   Updated: 2025/03/19 21:19:23 by bsengeze         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
#define CAT_HPP

#include <string>
#include <iostream>
#include "Animal.hpp"

class Cat : public Animal
{
public:
  // Orthodox Canonical Form
  Cat();                            // Default constructor
  Cat(const Cat &other);            // Copy constructor
  Cat &operator=(const Cat &other); // Copy assignment operator
  virtual ~Cat();                   // Destructor

  // Override makeSound method
  virtual void makeSound() const;
};

#endif
