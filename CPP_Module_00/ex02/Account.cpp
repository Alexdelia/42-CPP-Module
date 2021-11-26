/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Account.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adelille <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/26 10:55:45 by adelille          #+#    #+#             */
/*   Updated: 2021/11/26 15:48:09 by adelille         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <ctime>
#include "Account.hpp"

#include "../color.hpp"

/*
#define C_RESET		""
#define C_BOLD		""
#define C_UNDERLINE	""
#define C_RED		""
#define C_GREEN		""
#define C_YELLOW	""
#define C_BLUE		""
#define C_MAGENTA	""
#define C_CYAN		""
*/

Account::Account(int initial_deposit) : _amount(initial_deposit), _nbDeposits(0), _nbWithdrawals(0)
{
	_accountIndex = Account::_nbAccounts;
	_nbAccounts++;
	_totalAmount += initial_deposit;
	_displayTimestamp();
	std::cout << C_CYAN << "index:" << _accountIndex << ";amount:"
		<< _amount << ";created" << std::endl << C_RESET;
}

Account::~Account(void)
{
	_nbAccounts--;
	_displayTimestamp();
	std::cout << C_YELLOW << "index:" << _accountIndex << ";amount:"
		<< _amount << ";closed" << std::endl << C_RESET;
}

void	Account::_displayTimestamp(void)
{
	std::time_t	time = std::time(NULL);
	char		buffer[80];

	strftime(buffer, 80, "%Y%m%d_%H%M%S", std::localtime(&time));
	std::cout << "[" << buffer << "] ";
}

void	Account::displayAccountsInfos(void)
{
	_displayTimestamp();
	std::cout << C_MAGENTA << "accounts:" << _nbAccounts << ";total:"
		<< _totalAmount << ";deposits:" << _totalNbDeposits << ";withdrawals:"
		<< _totalNbWithdrawals << std::endl << C_RESET;
}

void	Account::displayStatus(void) const
{
	_displayTimestamp();
	std::cout << C_BLUE << "index:" << _accountIndex <<  ";amount:"
		<< _amount << ";deposits:" << _nbDeposits << ";withdrawals:"
		<< _nbWithdrawals << std::endl << C_RESET;
}

void	Account::makeDeposit(int deposit)
{
	_amount += deposit;
	_totalAmount += deposit;
	_nbDeposits++;
	_totalNbDeposits++;
	_displayTimestamp();
	std::cout << C_GREEN << "index:" << _accountIndex << ";p_amount:"
		<< _amount - deposit << ";deposit:" << deposit << ";amount:"
		<< _amount << ";nb_deposits:" << _nbDeposits << std::endl << C_RESET;
}

bool	Account::makeWithdrawal(int withdrawal)
{
	_displayTimestamp();
	if (_amount < withdrawal)
	{
		std::cout << C_RED << "index:" << _accountIndex << ";p_amount:"
			<< _amount - withdrawal << ";withdrawal:" << C_BOLD << C_UNDERLINE
			<< "refused" << std::endl << C_RESET;
		return (false);
	}
	_amount -= withdrawal;
	_totalAmount -= withdrawal;
	_nbWithdrawals++;
	_totalNbWithdrawals++;
	std::cout << C_RED << "index:" << _accountIndex << ";p_amount:"
		<< _amount - withdrawal << ";withdrawal:" << withdrawal << ";amount:"
		<< _amount << ";nb_withdrawals:" << _nbWithdrawals << std::endl << C_RESET;
	return (true);
}

int	Account::_nbAccounts = 0;
int	Account::_totalAmount = 0;
int	Account::_totalNbDeposits = 0;
int	Account::_totalNbWithdrawals = 0;
