/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.hpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adelille <adelille@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/16 12:14:18 by adelille          #+#    #+#             */
/*   Updated: 2022/01/12 13:37:44 by adelille         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SHRUBBERYCEATIONFORM_HPP
# define SHRUBBERYCEATIONFORM_HPP

# include <iostream>
//# include <typeinfo>
# include <exception>

# include "Form.hpp"

# define TREE1 \
"     .{{}}}}}}." << std::endl << \
"    {{{{{{(`)}}}." << std::endl << \
"   {{{(`)}}}}}}}}}" << std::endl << \
"  }}}}}}}}}{{(`){{{" << std::endl << \
"  }}}}{{{{(`)}}{{{{" << std::endl << \
" {{{(`)}}}}}}}{}}}}}" << std::endl << \
"{{{{{{{{(`)}}}}}}}}}}" << std::endl << \
"{{{{{{{}{{{{(`)}}}}}}" << std::endl << \
" {{{{{(`)   {{{{(`)}'" << std::endl << \
"  `\"\"'\" |   | \"'\"'`" << std::endl << \
"  (`)  /     \\" << std::endl << \
" ~~~~~~~~~~~~~~~~~~~" << std::endl

# define TREE2 \
"              * *" << std::endl << \
"           *    *  *" << std::endl << \
"      *  *    *     *  *" << std::endl << \
"     *     *    *  *    *" << std::endl << \
" * *   *    *    *    *   *" << std::endl << \
" *     *  *    * * .#  *   *" << std::endl << \
" *   *     * #.  .# *   *" << std::endl << \
"  *     \"#.  #: #\" * *    *" << std::endl << \
" *   * * \"#. ##\"       *" << std::endl << \
"   *       \"###" << std::endl << \
"             \"##" << std::endl << \
"              ##." << std::endl << \
"              .##:" << std::endl << \
"              :###" << std::endl << \
"             ;###" << std::endl << \
"            ,####." << std::endl << \
"           .######." << std::endl << \
"  ~~~~~~~~~~~~~~~~~~~~~~~~~" << std::endl

class ShrubberyCreationForm : public Form
{
	public:
		ShrubberyCreationForm(const std::string &_target);
		ShrubberyCreationForm(const ShrubberyCreationForm &src);
		virtual ~ShrubberyCreationForm(void);
		
		ShrubberyCreationForm	&operator=(const ShrubberyCreationForm &rhs);

		Form const		&getForm(void) const;
		std::string		getTarget(void) const;
		virtual void	execute(const Bureaucrat &executor) const;

	private:
		ShrubberyCreationForm(void);
		std::string	_target;
};

std::ostream	&operator<<(std::ostream &o, ShrubberyCreationForm const &src);

#endif
