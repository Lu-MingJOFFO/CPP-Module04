/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ljoffo <ljoffo@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/19 16:21:54 by ljoffo            #+#    #+#             */
/*   Updated: 2022/06/23 15:52:40 by ljoffo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongCat.hpp"

void show(Animal & ani)
	{
		std::cout << "Type: " << ani.getType() << std::endl;
		ani.makeSound();
	} 

int main()
{
	{	Animal	obj1;
		show(obj1);
		Dog	obj2;
		show(obj2);
		Cat	obj3;
		show(obj3);
	}
	std::cout << std::endl;
	{
		const Animal* meta = new Animal();
		const Animal* j = new Dog();
		const Animal* i = new Cat();
		std::cout << "Type: " << meta->getType() << std::endl;
		std::cout << "Type: " << j->getType() << std::endl;
		std::cout << "Type: " << i->getType() << std::endl;
		meta->makeSound();
		i->makeSound(); //will output the cat sound!
		j->makeSound();
		delete meta;
		delete i;
		delete j;
	}
	std::cout << std::endl;
	{	
		const WrongAnimal* meta = new WrongAnimal();
		const WrongAnimal* i = new WrongCat();
		const WrongCat* j = new WrongCat();
		std::cout << "Type: " << meta->getType() << std::endl;
		std::cout << "Type: " << j->getType() << std::endl;
		std::cout << "Type: " << i->getType() << std::endl;
		meta->makeSound();
		i->makeSound();
		j->makeSound();
		delete meta;
		delete i;
		delete j;
	}
	return 0;
}

	
