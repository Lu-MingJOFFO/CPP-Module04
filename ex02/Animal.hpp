/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ljoffo <ljoffo@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/19 14:40:52 by ljoffo            #+#    #+#             */
/*   Updated: 2022/06/23 17:45:00 by ljoffo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_HPP
# define ANIMAL_HPP

#include <iostream>

class	Animal
{
	public:
		virtual ~Animal(void); //pour appeler le destructeur du bon type d'animal
		virtual void makeSound(void) const = 0;
		std::string getType(void) const;
	protected:
		std::string _type;
		
		Animal(void);
		Animal(Animal const &src);
		void operator=(Animal const &rhs);
};

#endif