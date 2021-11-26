/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adelille <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/26 14:05:39 by adelille          #+#    #+#             */
/*   Updated: 2021/11/26 14:58:18 by adelille         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "Zombie.hpp"

int	main(void)
{
	Zombie	alex("alex");
	Zombie	*pz1;
	Zombie	*pz2;

	std::cout << "[STARTING]" << std::endl;

	pz1 = newZombie("heap first");

	randomChump("stack first");

	pz2 = newZombie("heap second");

	randomChump("stack second");
	
	delete (pz2);

	randomChump("stack third");

	pz1->announce();
	alex.announce();

	delete (pz1);

	std::cout << "[ENDING]" << std::endl;
	return (0);
}
