/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adelille <adelille@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/23 14:07:40 by adelille          #+#    #+#             */
/*   Updated: 2021/11/23 14:56:11 by adelille         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

#define DEFAULT	"* LOUD AND UNBEARABLE FEEDBACK NOISE *"

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
	{
		std::cout << DEFAULT << std::endl;
		return (0);
	}
	i = 1;
	while (i < ac)
	{
		ft_toupper(av[i]);
		std::cout << av[i];
		i++;
	}
	std::cout << std::endl;
	return (0);
}
