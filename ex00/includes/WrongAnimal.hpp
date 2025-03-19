/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bsengeze <bsengeze@student.42berlin.de>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/19 21:19:05 by bsengeze          #+#    #+#             */
/*   Updated: 2025/03/19 21:19:07 by bsengeze         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONGANIMAL_HPP
#define WRONGANIMAL_HPP

#include <string>
#include <iostream>

class WrongAnimal
{
protected:
  std::string type;

public:
  // Orthodox Canonical Form
  WrongAnimal();                                    // Default constructor
  WrongAnimal(const WrongAnimal &other);            // Copy constructor
  WrongAnimal &operator=(const WrongAnimal &other); // Copy assignment operator
  ~WrongAnimal();                                   // Destructor

  // Member functions
  std::string getType() const;
  void makeSound() const; // Not virtual!
};

#endif
