/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ljoffo <ljoffo@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/19 14:46:17 by ljoffo            #+#    #+#             */
/*   Updated: 2022/06/23 16:52:47 by ljoffo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

Brain::Brain(void)
{
	std::cout << "Brain constructor called." << std::endl;
}

Brain::Brain(Brain const &src)
{
	std::cout << "Brain copy constructor called" << std::endl;
	*this = src;
}

void Brain::operator=(Brain const &rhs)
{
	std::cout << "Brain copy assignment operator called" << std::endl;
	for (int i = 0; i < 100; i++)
		_ideas[i] = rhs._ideas[i];
}

Brain::~Brain(void)
{
	std::cout << "Brain destructor called." << std::endl;
}

void Brain::setIdeas(int i, std::string idea)
{
	if (i < 100)
		_ideas[i] = idea;
}

void Brain::showIdeas(void)
{
	for (int i = 0; i < 100; i++)
	{
		if (_ideas[i] != "")
			std::cout << _ideas[i] << i + 1 << std::endl;
	}
}