/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Account.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adelille <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/26 10:55:45 by adelille          #+#    #+#             */
/*   Updated: 2021/11/26 11:48:57 by adelille         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <ctime>
#include "Account.hpp"

Account::Account(int initial_deposit) : _amount(initial_deposit)
{
	_accountIndex = Account::_nbAccounts;
	Account::_nbAccounts++;
	Account::_totalAmount += initial_deposit;
	_displayTimestamp();
	std::cout << "index:" << _accountIndex << ";amount:" << _amount << ";created" << std::endl;
}

Account::~Account(void)
{
	Account::_nbAccounts--;
	_displayTimestamp();
	std::cout << "index:" << _accountIndex << ";amount:" << _amount << ";closed" << std::endl;
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

}

void	Account::displayStatus(void) const
{

}

void	Account::makeDeposit(int deposit)
{
	(void)deposit;
}

bool	Account::makeWithdrawal(int withdrawal)
{
	(void)withdrawal;
	return (true);
}

int	Account::_nbAccounts = 0;
int	Account::_totalAmount = 0;
int	Account::_totalNbDeposits = 0;
int	Account::_totalNbWithdrawals = 0;
