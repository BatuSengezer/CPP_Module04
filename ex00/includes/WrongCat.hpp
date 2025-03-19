/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bsengeze <bsengeze@student.42berlin.de>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/19 21:20:15 by bsengeze          #+#    #+#             */
/*   Updated: 2025/03/19 21:38:43 by bsengeze         ###   ########.fr       */
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
  WrongCat();
  WrongCat(const WrongCat &other);
  WrongCat &operator=(const WrongCat &other);
  ~WrongCat();

  // Override makeSound method (but won't work polymorphically)
  void makeSound() const;
};

#endif
