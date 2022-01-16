/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adelille <adelille@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/15 14:16:47 by adelille          #+#    #+#             */
/*   Updated: 2022/01/16 18:16:34 by adelille         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef EASYFIND_TPP
# define EASYFIND_TPP

# include <algorithm>
# include <stdexcept>

class not_found_exception : public std::exception
{
	public:
		char const *what() const throw()
		{
			return ("int not found");
		}
};

	template <typename T>
typename T::iterator	easyfind(T &container, int n)
{
	typename T::iterator	i;

	i = std::find(container.begin(), container.end(), n);
	if (i == container.end())
		throw not_found_exception();
	return (i);
}

#endif
