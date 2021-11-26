/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adelille <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/26 15:59:05 by adelille          #+#    #+#             */
/*   Updated: 2021/11/26 16:12:31 by adelille         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int	main(void)
{
	std::string	str = "HI THIS IS BRAIN";
	std::string	*stringPTR = &str;
	std::string	&stringREF = str;

	std::cout
		<< "*stringPTR\tdisplay:\t" << *stringPTR << std::endl
		<< "stringREF \tdisplay:\t" << stringREF << std::endl << std::endl
		<< "str       \taddress:\t" << &str << std::endl
		<< "stringPTR \taddress:\t" << stringPTR << std::endl
		<< "stringREF \taddress:\t" << &stringREF << std::endl;
}
