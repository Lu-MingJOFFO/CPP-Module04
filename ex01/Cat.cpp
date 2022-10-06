/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ljoffo <ljoffo@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/19 14:46:17 by ljoffo            #+#    #+#             */
/*   Updated: 2022/06/23 16:32:15 by ljoffo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat(void)
{	
	std::cout << "Cat constructor called." << std::endl;
	_cerv = new Brain();
	_type = "Cat";
	
}

Cat::Cat(Cat const &src) : _cerv(NULL)
{
	std::cout << "Cat copy constructor called" << std::endl;
	*this = src;
}

Cat & Cat::operator=(Cat const &rhs)
{
	if (this != &rhs) //2 objets distincts donc leurs adresses mem doivent ere diff 
	{
		std::cout << "Cat copy assignment operator called" << std::endl;
		_type = rhs._type;
		if (_cerv)
			delete _cerv;
		_cerv = new Brain(*(rhs._cerv));
	}
	return *this;
}

Cat::~Cat(void)
{
	delete _cerv;
	std::cout << "Cat destructor called." << std::endl;
}

void Cat::makeSound(void) const
{
	std::cout << "Meow meow!" << std::endl;
}

void Cat::setCatIdeas(int i, std::string idea)
{
	_cerv->setIdeas(i, idea);
}

void Cat::showCatIdeas(void)
{
	_cerv->showIdeas();
}
