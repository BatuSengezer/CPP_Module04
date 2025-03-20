/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bsengeze <bsengeze@student.42berlin.de>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/19 21:17:46 by bsengeze          #+#    #+#             */
/*   Updated: 2025/03/20 14:20:57 by bsengeze         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
#define CAT_HPP

#include <string>
#include <iostream>
#include "Animal.hpp"
#include "Brain.hpp"

class Cat : public Animal
{
private:
  Brain *brain;

public:
  Cat();
  Cat(const Cat &other);
  Cat &operator=(const Cat &other);
  virtual ~Cat();

  // Override makeSound method
  virtual void makeSound() const;
};

#endif
