/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fzayani <fzayani@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/10 17:41:47 by fzayani           #+#    #+#             */
/*   Updated: 2025/02/10 18:55:39 by fzayani          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"


ClapTrap::ClapTrap(std::string name)
{
	this->name = name;
	this->hit_points = 10;
	this->energy = 10;
	this->attack_damage = 0;
	std::cout << "Constructor is called" << std::endl;
}

ClapTrap::~ClapTrap()
{
	std::cout << "Destructor is called" << std::endl;
}

void ClapTrap::attack(const std::string& target)
{
	this->name = target;
	if(energy <= 0)
	{
		std::cout << target << " has no energy to attack !" << std::endl;
		return;
	}
	if(hit_points <= 0)
	{
		std::cout << target << " is already dead..." << std::endl;
		return;
	}
	energy--;
	std::cout << name << " attacks " << target << " causing " << attack_damage << " damage!" << std::endl;
}

void ClapTrap::takeDamage(unsigned int amount)
{
	if(hit_points <= 0)
	{
		std::cout << name << " is already dead..." << std::endl;
		return;
	}
	hit_points -= amount;
	std::cout << name << " takes " << amount << " damage !" << std::endl;
}


void ClapTrap::beRepaired(unsigned int amount)
{
	if(hit_points <= 0)
	{
		std::cout << name << " is dead, to late..." << std::endl;
		return;
	}
	if(energy <= 0)
	{
		std::cout << name << " has no energy to repair !" << std::endl;
		return;
	}
	hit_points += amount;
	energy--;
	std::cout << name << " win " << amount << " of energy !" << std::endl;
}