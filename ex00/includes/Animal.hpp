/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bsengeze <bsengeze@student.42berlin.de>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/19 21:13:02 by bsengeze          #+#    #+#             */
/*   Updated: 2025/03/19 21:13:38 by bsengeze         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_HPP
#define ANIMAL_HPP

#include <string>
#include <iostream>

class Animal
{
protected:
  std::string type;

public:
  // Orthodox Canonical Form
  Animal();
  Animal(const Animal &other);
  Animal &operator=(const Animal &other);
  virtual ~Animal();

  // Member functions
  std::string getType() const;
  virtual void makeSound() const;
};

#endif
