/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fzayani <fzayani@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/11 15:58:28 by fzayani           #+#    #+#             */
/*   Updated: 2025/02/11 16:30:46 by fzayani          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Scavtrap.hpp"

ScavTrap::ScavTrap()
{
	this->name = "";
	this->hit_points = 100;
	this->energy = 50;
	this->attack_damage = 20;
	std::cout << " Default constructor of ScavTrap is called" << std::endl;
}

ScavTrap::~ScavTrap()
{
	std::cout << "Destructor of ScavTrap is called" << std::endl;
}

ScavTrap::ScavTrap(std::string name) : ClapTrap(name)
{
	this->hit_points = 100;
	this->energy = 50;
	this->attack_damage = 20;
	std::cout << "Constructor of ScavTrap is called" << std::endl;
}

void ScavTrap::attack(const std::string& target)
{
	if(energy <= 0)
	{
		std::cout << name << " has no energy to attack !" << std::endl;
		return;
	}
	if(hit_points <= 0)
	{
		std::cout << name << " is already dead..." << std::endl;
		return;
	}
	energy--;
	std::cout << name << " attacks " << target << " causing " << attack_damage << " damage!" << std::endl;
}

ClapTrap::ClapTrap(std::string name)
{
	this->name = name;
	this->hit_points = 10;
	this->energy = 10;
	this->attack_damage = 0;
	std::cout << "Constructor is called" << std::endl;
}