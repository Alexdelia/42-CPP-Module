/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adelille <adelille@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/10 15:50:59 by adelille          #+#    #+#             */
/*   Updated: 2021/12/13 18:59:15 by adelille         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"

int	main(void)
{
	ClapTrap	alex("alex");
	ScavTrap	scav("scav");

	std::cout << alex.getName() << std::endl;
	alex.attack("bob");
	alex.takeDamage(4);
	alex.beRepaired(6);
	alex.setAttackDamage(21);
	alex.attack("bob");
	alex.takeDamage(42);
	
	std::cout << scav.getName() << std::endl;
	scav.attack("bob");
	scav.takeDamage(4);
	scav.beRepaired(6);
	scav.setAttackDamage(21);
	scav.attack("bob");
	scav.takeDamage(42);
	scav.guardGate();
	return (0);
}
