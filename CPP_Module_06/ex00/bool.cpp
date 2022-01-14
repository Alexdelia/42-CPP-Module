/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bool.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adelille <adelille@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/13 22:45:15 by adelille          #+#    #+#             */
/*   Updated: 2022/01/14 12:09:37 by adelille         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "convert.hpp"

bool	is_printable_char(const std::string &str)
{
	if (str.length() == 1 && str[0] > 32 && str[0] < 127)
		return (true);
	return (false);
}

bool	is_special(const std::string &str)
{
	if (str.compare("-inf") == 0 || str.compare("+inf") == 0
			|| str.compare("-inff") == 0 || str.compare("+inff") == 0
			|| str.compare("nan") == 0 || str.compare("nanf") == 0)
		return (true);
	return (false);
}
