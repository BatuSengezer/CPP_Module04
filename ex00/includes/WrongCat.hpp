/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bsengeze <bsengeze@student.42berlin.de>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/19 21:20:15 by bsengeze          #+#    #+#             */
/*   Updated: 2025/03/19 21:20:24 by bsengeze         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONGCAT_HPP
#define WRONGCAT_HPP

#include <string>
#include <iostream>
#include "WrongAnimal.hpp"

class WrongCat : public WrongAnimal
{
public:
  // Orthodox Canonical Form
  WrongCat();                                 // Default constructor
  WrongCat(const WrongCat &other);            // Copy constructor
  WrongCat &operator=(const WrongCat &other); // Copy assignment operator
  ~WrongCat();                                // Destructor

  // Override makeSound method (but won't work polymorphically)
  void makeSound() const;
};

#endif
