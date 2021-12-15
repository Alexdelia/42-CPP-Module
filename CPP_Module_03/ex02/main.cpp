/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adelille <adelille@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/10 15:50:59 by adelille          #+#    #+#             */
/*   Updated: 2021/12/15 18:26:25 by adelille         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"

int	main(void)
{
	ClapTrap	alex("alex");
	ScavTrap	scav("scav");
	FragTrap	frag("frag");

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
	
	std::cout << frag.getName() << std::endl;
	frag.attack("bob");
	frag.takeDamage(4);
	frag.beRepaired(6);
	frag.setAttackDamage(21);
	frag.attack("bob");
	frag.takeDamage(42);
	frag.highFivesGuys();
	return (0);
}
