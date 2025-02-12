/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fzayani <fzayani@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/10 17:42:00 by fzayani           #+#    #+#             */
/*   Updated: 2025/02/11 16:22:55 by fzayani          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef OPEN_HPP
#define OPEN_HPP

#include <iostream>

class ClapTrap
{
	protected :
		std::string name;
		int hit_points;
		int energy;
		int attack_damage;

	public :

		ClapTrap();
		ClapTrap(std::string name);
		ClapTrap(const ClapTrap &name);
		~ClapTrap();

		void attack(const std::string& target);
		void takeDamage(unsigned int amount);
		void beRepaired(unsigned int amount);

		ClapTrap& operator=(const ClapTrap& other);

		int get_hit_points()const;
		int get_energy()const;
		int get_attack_damage()const;

};

#endif
