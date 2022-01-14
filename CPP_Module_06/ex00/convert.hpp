/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   convert.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adelille <adelille@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/16 12:14:18 by adelille          #+#    #+#             */
/*   Updated: 2022/01/14 12:18:36 by adelille         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONVERT_HPP
# define CONVERT_HPP

# include <iostream>
# include <cstdlib>
# include <climits>
# include <float.h>
# include <iomanip>

# define ERROR	"\033[1;31mError: \033[0m"
# define NONDIS	"\033[1;35mNon displayable\033[0m"
# define IMPOS	"\033[1;33mimpossible\033[0m"

void	convert(const std::string &str);

bool	is_printable_char(const std::string &str);
bool	is_special(const  std::string &str);

#endif
