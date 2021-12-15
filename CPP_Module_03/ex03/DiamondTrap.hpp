/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adelille <adelille@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/24 14:26:23 by adelille          #+#    #+#             */
/*   Updated: 2021/12/15 18:33:14 by adelille         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DIAMONDTRAP_HPP
# define DIAMONDTRAP_HPP

# include <iostream>
# include "ClapTrap.hpp"
# include "FragTrap.hpp"
# include "ScavTrap.hpp"

class DiamondTrap : public ScavTrap, public FragTrap
{
	public:
		DiamondTrap(void);
		DiamondTrap(const DiamondTrap &src);
		DiamondTrap(const std::string &name);
		virtual ~DiamondTrap(void);

		DiamondTrap	&operator=(const DiamondTrap &rhs);

		void	whoAmI(void) const;

	private:
		std::string	_name;
};

std::ostream	&operator<<(std::ostream &o, const DiamondTrap &i);

#endif
