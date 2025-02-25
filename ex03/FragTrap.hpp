/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fzayani <fzayani@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/12 13:05:43 by fzayani           #+#    #+#             */
/*   Updated: 2025/02/25 16:04:03 by fzayani          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRAGTRAP_HPP
#define FRAGTRAP_HPP

#include "ClapTrap.hpp"

class FragTrap : virtual public ClapTrap
{
	private :
		static const int initial_hitpoints = 100;
		static const int initial_energy = 100;
		static const int initial_attack = 30;
	public :

		static int getInitialHitPoints() { return initial_hitpoints; }
		static int getInitialEnergy() { return initial_energy; }
		static int getInitialAttack() { return initial_attack; }

		FragTrap(); 
		~FragTrap();
		FragTrap(std::string name);
		FragTrap(const FragTrap &name);

		FragTrap& operator=(const FragTrap& other);

		void attack(const std::string& target);
		void highFivesGuys(void);
};

#endif