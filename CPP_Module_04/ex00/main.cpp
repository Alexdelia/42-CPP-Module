/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adelille <adelille@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/16 18:06:19 by adelille          #+#    #+#             */
/*   Updated: 2021/12/16 18:33:02 by adelille         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "WrongAnimal.hpp"
#include "Cat.hpp"
#include "WrongCat.hpp"
#include "Dog.hpp"

int	main(void)
{
	const Animal		*meta = new Animal();
	const WrongAnimal	*wrongMeta = new WrongAnimal();
	const Animal		*c = new Cat();
	const Animal		*d = new Dog();
	const WrongAnimal	*wrongC = new WrongCat();
	std::cout << std::endl;

	c->makeSound();
	d->makeSound();
	meta->makeSound();
	std::cout << std::endl;

	wrongC->makeSound();
	wrongMeta->makeSound();
	std::cout << std::endl;

	delete meta;
	delete wrongMeta;
	delete c;
	delete wrongC;
	delete d;
	return (0);
}
