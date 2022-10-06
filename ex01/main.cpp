/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ljoffo <ljoffo@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/19 16:21:54 by ljoffo            #+#    #+#             */
/*   Updated: 2022/06/23 16:58:15 by ljoffo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongCat.hpp"

int main()
{
	{
		std::cout << "1/TABLE ASKED IN SUBJECT" << std::endl;
		Animal* tab[6];
		for (int i = 0; i < 3; i++)
			tab[i] = new Dog();
		for (int i = 3; i < 6; i++)
			tab[i] = new Cat();
		
		std::cout << std::endl;
		for (int i = 0; i < 6; i++)
			delete tab[i];
	}	
	std::cout << std::endl;
	{
		std::cout << "2/DEEP COPY CHECK" << std::endl;	
		{
			Cat	inst;
			Cat	inst2(inst);
		}
		std::cout << std::endl;
		{
			Dog	poodle;
			{
				Dog labrador = poodle;
			}
		}
		std::cout << std::endl;
		{
			Dog poodle;
			Dog labrador;
			poodle = labrador;
		}
	}
	std::cout << std::endl;
	{
		std::cout << "3/MAIN GIVEN IN SUBJECT" << std::endl;	
		const Animal* j = new Dog();
		const Animal* i = new Cat();
		delete j;//should not create a leak
		delete i;
	}
	std::cout << std::endl;
	{
		std::cout << "4/MORE TESTS: BRAIN IDEAS" << std::endl;	
		Dog poodle;
		poodle.setDogIdeas(0, "Drink");
		poodle.setDogIdeas(1, "Drink");
		poodle.showDogIdeas();
		{
			Dog labrador;
			for (int i = 0; i < 100; i++)
				labrador.setDogIdeas(i, "Eat");
			poodle = labrador;
		}
		poodle.showDogIdeas();
	}
	return 0;
}

