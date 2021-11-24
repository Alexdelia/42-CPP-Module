/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   contact.class.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adelille <adelille@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/24 14:26:23 by adelille          #+#    #+#             */
/*   Updated: 2021/11/24 14:55:04 by adelille         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_CLASS_HPP
# define CONTACT_CLASS_HPP

class contact
{
	public:
		contact(void);
		~contact(void);

		int	i;

		static int	get_nb_contact(void);
	
	private:
		static int	_nb_contact;
};

#endif
