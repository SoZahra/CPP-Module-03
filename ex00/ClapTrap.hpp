/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fzayani <fzayani@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/10 17:42:00 by fzayani           #+#    #+#             */
/*   Updated: 2025/02/10 18:39:26 by fzayani          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef OPEN_HPP
#define OPEN_HPP

#include <iostream>

class ClapTrap
{
	private :
		std::string name;
		int hit_points;
		int energy;
		int attack_damage;

	public :

		ClapTrap(std::string name);
		~ClapTrap();

		void attack(const std::string& target);
		void takeDamage(unsigned int amount);
		void beRepaired(unsigned int amount);

};

#endif
