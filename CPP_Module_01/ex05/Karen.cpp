/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Karen.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adelille <adelille@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/30 16:46:35 by adelille          #+#    #+#             */
/*   Updated: 2021/11/30 17:22:05 by adelille         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Karen.hpp"

Karen::Karen(void)
{

}

Karen::~Karen(void)
{

}

void	Karen::_debug(void) const
{
	std::cout << "I love to get extra bacon for my 7XL-double-cheese-triple-pickle-special-ketchup burger. I just love it!" << std::endl;
}

void	Karen::_info(void) const
{
	std::cout << "I cannot believe adding extra bacon cost more money. You don’t put enough! If you did I would not have to ask for it!" << std::endl;
}

void	Karen::_warning(void) const
{
	std::cout << "I think I deserve to have some extra bacon for free. I’ve been coming here for years and you just started working here last month." << std::endl;
}

void	Karen::_error(void) const
{
	std::cout << "This is unacceptable, I want to speak to the manager now." << std::endl;
}

void	Karen::complain(std::string level) const
{
	const std::string	l[4] = {"DEBUG", "INFO", "WARNING", "ERROR"};
	void				(Karen::*fptr[4])(void) const
		= {&Karen::_debug, &Karen::_info, &Karen::_warning, &Karen::_error};
	int					i;

	i = 0;
	while (i < 4)
	{
		if (!level.compare(l[i]))
		{
			(this->*fptr[i])();
			return ;
		}
		i++;
	}
	std::cout << "Error: \"" << level << "\" doesn't match any complain" << std::endl
		<< "level availible: DEBUG, INFO, WARNING, ERROR" << std::endl;
}
