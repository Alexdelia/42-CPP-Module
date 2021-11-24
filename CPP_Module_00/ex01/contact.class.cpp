/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   contact.class.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adelille <adelille@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/24 14:28:37 by adelille          #+#    #+#             */
/*   Updated: 2021/11/24 14:44:39 by adelille         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "contact.class.hpp"

contact::contact(void)
{
	contact::_nb_contact++;
}

contact::~contact(void)
{
	contact::_nb_contact--;
}

int	contact::get_nb_contact(void)
{
	return (contact::_nb_contact);
}

int	contact::_nb_contact = 0;
