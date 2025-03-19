/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bsengeze <bsengeze@student.42berlin.de>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/19 21:17:46 by bsengeze          #+#    #+#             */
/*   Updated: 2025/03/19 21:39:41 by bsengeze         ###   ########.fr       */
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
  Cat();
  Cat(const Cat &other);
  Cat &operator=(const Cat &other);
  virtual ~Cat();

  // Override makeSound method
  virtual void makeSound() const;
};

#endif
