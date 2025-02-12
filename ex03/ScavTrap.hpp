/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fzayani <fzayani@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/11 15:00:50 by fzayani           #+#    #+#             */
/*   Updated: 2025/02/12 17:58:41 by fzayani          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCAVTRAP_HPP
# define SCAVTRAP_HPP

#include "ClapTrap.hpp"

class ScavTrap : virtual public ClapTrap
{
	protected :
		static const int initial_hitpoints = 100;
		static const int initial_energy = 50;
		static const int initial_attack = 20;

	public :

		static int getInitialHitPoints() { return initial_hitpoints; }
		static int getInitialEnergy() { return initial_energy; }
		static int getInitialAttack() { return initial_attack; }

		ScavTrap();
		~ScavTrap();
		ScavTrap(std::string name);
		ScavTrap(const ScavTrap &name);

		ScavTrap& operator=(const ScavTrap& other);

		void attack(const std::string& target);
		void guardGate();
};

#endif