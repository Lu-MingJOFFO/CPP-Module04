/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ljoffo <ljoffo@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/19 14:46:17 by ljoffo            #+#    #+#             */
/*   Updated: 2022/06/23 16:26:59 by ljoffo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog(void)
{
	std::cout << "Dog constructor called." << std::endl;
	_cerv = new Brain();
	_type = "Dog";
}

Dog::Dog(Dog const &src) : _cerv(NULL)
{
	std::cout << "Dog copy constructor called" << std::endl;
	*this = src;	
}

Dog & Dog::operator=(Dog const &rhs)
{
	if (this != &rhs)
	{
		std::cout << "Dog copy assignment operator called" << std::endl;
		_type = rhs._type;
		if (_cerv)
			delete _cerv;
		//_cerv = rhs._cerv; //will segfault with the Dog tmp
		//_cerv = new Brain(); //will create new Brain nut not copy the Dog's
		_cerv = new Brain(*(rhs._cerv)); //as its a poiner, we need * to copy value and not address
	}
	return *this;
}

Dog::~Dog(void)
{
	delete _cerv;
	std::cout << "Dog destructor called." << std::endl;
}

void Dog::makeSound(void) const
{
	std::cout << "Woof woof!" << std::endl;
}

void Dog::setDogIdeas(int i, std::string idea)
{
	_cerv->setIdeas(i, idea);
}

void Dog::showDogIdeas(void)
{
	_cerv->showIdeas();
}