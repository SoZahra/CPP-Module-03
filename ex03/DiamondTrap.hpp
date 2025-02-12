/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fzayani <fzayani@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/12 14:27:50 by fzayani           #+#    #+#             */
/*   Updated: 2025/02/12 15:36:47 by fzayani          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DIAMONDTRAP_HPP
# define DIAMONDTRAP_HPP

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"

class DiamondTrap : public FragTrap, public ScavTrap
{
	private:
		std::string name;
	public:

		DiamondTrap();
		~DiamondTrap();
		DiamondTrap(std::string name);
		DiamondTrap(const DiamondTrap &other);

		DiamondTrap& operator=(const DiamondTrap& other);

		using ScavTrap::attack;
		void whoAmI();
};


#endif
