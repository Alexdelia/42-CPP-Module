/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adelille <adelille@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/24 14:26:23 by adelille          #+#    #+#             */
/*   Updated: 2021/12/10 15:42:49 by adelille         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAPTRAP_HPP
# define CLAPTRAP_HPP

# include <iostream>

class ClapTrap
{
	public:
		ClapTrap(void);
		ClapTrap(const ClapTrap &src);
		ClapTrap(const std::string name);
		~ClapTrap(void);

		ClapTrap	&operator=(const ClapTrap &rhs);

		void		attack(const std::string &target);
		void		takeDamage(int amount);
		void		beRepaired(int amount);

		int			getHitPoints(void) const;
		int			getEnergyPoints(void) const;
		int			getAttackDamage(void) const;
		std::string	getName(void) const;

		void		setName(const std::string name);
		void		setAttackDamage(const int amount);
		void		setHitPoints(const int amount);
		void		setEnergyPoints(const int amount);

	private:
		std::string	_name;
		int			_hitPoints;
		int			_energyPoints;
		int			_attackDamage;
};

std::ostream	&operator<<(std::ostream &o, const ClapTrap &i);

#endif
