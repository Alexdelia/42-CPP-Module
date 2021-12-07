/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adelille <adelille@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/24 14:26:23 by adelille          #+#    #+#             */
/*   Updated: 2021/12/07 12:39:29 by adelille         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP

# include <iostream>
# include <cmath>

class Fixed
{
	public:
		Fixed(void);
		Fixed(const Fixed &src);
		Fixed(const int i);
		Fixed(const float f);
		~Fixed(void);

		Fixed	&operator=(const Fixed &rhs);

		int		getRawBits(void) const;
		void	setRawBits(const int raw);

		float	toFloat(void) const;
		int		toInt(void) const;

	private:
		static const int	_bits;
		int					_fix;
};

std::ostream	&operator<<(std::ostream &o, const Fixed &f);

#endif
