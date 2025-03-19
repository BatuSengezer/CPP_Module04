/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bsengeze <bsengeze@student.42berlin.de>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/19 21:19:05 by bsengeze          #+#    #+#             */
/*   Updated: 2025/03/19 21:38:25 by bsengeze         ###   ########.fr       */
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
  WrongAnimal();
  WrongAnimal(const WrongAnimal &other);
  WrongAnimal &operator=(const WrongAnimal &other);
  ~WrongAnimal();

  // Member functions
  std::string getType() const;
  void makeSound() const; // Not virtual!
};

#endif
