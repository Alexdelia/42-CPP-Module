/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   convert.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adelille <adelille@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/13 22:39:47 by adelille          #+#    #+#             */
/*   Updated: 2022/01/13 23:13:10 by adelille         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "convert.hpp"

static void	convert_char(const double &n)
{
	if (n > 32 && n < 127)
		std::cout << "char :\t'" << static_cast<char>(n) << "'" << std::endl;
	else
		std::cout << "char :\tNon displayable" << std::endl;
}

static void	convert_int(const double &n)
{
	if (n >= INT_MIN && n <= INT_MAX)
		std::cout << "int :\t" << static_cast<int>(n) << std::endl;
	else
		std::cout << "int :\timpossible" << std::endl;
}

static void	convert_float(const std::string &str, const double &n)
{
	if ((std::abs(n) >= FLT_MIN && std::abs(n) <= FLT_MAX)
			|| n == 0 || is_special(str))
	{
		if (n < 99999)
			std::cout << "float :\t" << std::fixed << std::setprecision(1) << static_cast<float>(n) << "f" << std::endl;
		else
			std::cout << "float :\t" << std::scientific << static_cast<float>(n) << "f" << std::endl;
	}
	else
		std::cout << "float :\timpossible" << std::endl;
}

static void	convert_double(const double &n)
{
	if (n < 99999)
		std::cout << "double :\t" << std::fixed << std::setprecision(1) << n << std::endl;
	else
		std::cout << "double :\t" << n << std::endl;
}

void	convert(const std::string &str)
{
	double	n;

	if (is_printable_char(str) && !(str[0] >= '0' && str[0] <= '9'))
		n = static_cast<double>(str[0]);
	else
		n = atof(str.c_str());
	if (is_special(str))
	{
		std::cout << "char :\timpossible" << std::endl
			<< "int :\timpossible" << std::endl;
	}
	else
	{
		convert_char(n);
		convert_int(n);
	}
	convert_float(str, n);
	convert_double(n);
}
