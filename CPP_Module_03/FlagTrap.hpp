/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FlagTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adelille <adelille@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/24 14:26:23 by adelille          #+#    #+#             */
/*   Updated: 2021/12/14 18:07:25 by adelille         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FLAGTRAP_HPP
# define FLAGTRAP_HPP

# include <iostream>
# include "ClapTrap.hpp"

class FlagTrap : public ClapTrap
{
	public:
		FlagTrap(void);
		FlagTrap(const FlagTrap &src);
		FlagTrap(const std::string &name);
		virtual ~FlagTrap(void);

		FlagTrap	&operator=(const FlagTrap &rhs);

		void	highFivesGuys(void) const;
};

std::ostream	&operator<<(std::ostream &o, const FlagTrap &i);

#endif
