/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adelille <adelille@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/23 14:07:40 by adelille          #+#    #+#             */
/*   Updated: 2021/11/23 14:51:41 by adelille         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

#define DEFAULT	"* LOUD AND UNBEARABLE FEEDBACK NOISE *\n"

int	ft_ps(char *str)
{
	std::cout << str;
	return (0);
}

void	ft_toupper(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (str[i] >= 'a' && str[i] <= 'z')
			str[i] -= 32;
		i++;
	}
}

int	main(int ac, char **av)
{
	int	i;

	if (ac == 1)
		return (ft_ps((char *)DEFAULT));
	i = 1;
	while (i < ac)
	{
		ft_toupper(av[i]);
		ft_ps(av[i]);
		i++;
	}
	std::cout << std::endl;
	return (0);
}
