/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fzayani <fzayani@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/12 14:27:33 by fzayani           #+#    #+#             */
/*   Updated: 2025/02/12 17:42:24 by fzayani          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap() :ClapTrap("_clap_name"), FragTrap(), ScavTrap()
{
	this->name = "";
	// this->hit_points = FragTrap::hit_points;
	// this->energy = ScavTrap::energy;
	// this->attack_damage = FragTrap::attack_damage;
	this->hit_points = FragTrap::getInitialHitPoints();
	this->energy = ScavTrap::getInitialEnergy();
	this->attack_damage = FragTrap::getInitialAttack();
	std::cout << " Default constructor of DiamondTrap is called" << std::endl;
}

DiamondTrap::~DiamondTrap()
{
	std::cout << "Destructor of DiamondTrap is called" << std::endl;
}

DiamondTrap::DiamondTrap(std::string name) : ClapTrap(name + "_clap_name"), FragTrap(name), ScavTrap(name)
{
	this->name = name;
	// this->hit_points = FragTrap::hit_points;
	// this->energy = ScavTrap::energy;
	// this->attack_damage = FragTrap::attack_damage;
	this->hit_points = FragTrap::getInitialHitPoints();
	this->energy = ScavTrap::getInitialEnergy();
	this->attack_damage = FragTrap::getInitialAttack();
	std::cout << "Default constructor of DiamondTrap is called" << std::endl;
}

DiamondTrap& DiamondTrap::operator=(const DiamondTrap& other)
{
	if(this != &other)
	{
		ClapTrap::operator=(other);
		this->name = other.name;
	}
	std::cout << "DiamondTrap assignement operator called" << std::endl;
	return *this;
}

DiamondTrap::DiamondTrap(const DiamondTrap &other) : ClapTrap(other), FragTrap(other), ScavTrap(other)
{
	this->name = other.name;
	std::cout << "DiamondTrap copy constructor called" << std::endl;
}

void DiamondTrap::whoAmI()
{
	std::cout	<< "I am " << this->name << " and my ClapTrap is "
				<< ClapTrap::name << std::endl;
}


