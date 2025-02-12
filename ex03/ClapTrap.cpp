/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fzayani <fzayani@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/10 17:41:47 by fzayani           #+#    #+#             */
/*   Updated: 2025/02/12 11:54:01 by fzayani          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"


ClapTrap::ClapTrap(std::string name)
{
	this->name = name;
	this->hit_points = 10;
	this->energy = 10;
	this->attack_damage = 0;
	std::cout << "Constructor ClapTrap is called" << std::endl;
}

ClapTrap::~ClapTrap()
{
	std::cout << "Destructor of ClapTrap is called" << std::endl;
}

ClapTrap::ClapTrap()
{
	this->name = "";
	this->hit_points = 10;
	this->energy = 10;
	this->attack_damage = 0;
	std::cout << " Default constructor is called" << std::endl;
}

int ClapTrap::get_hit_points()const
{
	return(hit_points);
}

int ClapTrap::get_energy()const
{
	return(energy);
}

int ClapTrap::get_attack_damage()const
{
	return (attack_damage);
}

ClapTrap& ClapTrap::operator=(const ClapTrap& other)
{
	// std::cout << "Copy called" << std::endl;
	if(this != &other)
	{
		this->name = other.name;
		this->hit_points = other.hit_points;
		this->energy = other.energy;
		this->attack_damage = other.attack_damage;
	}
	return *this;
}

ClapTrap::ClapTrap(const ClapTrap &name)
{
	std::cout << "Copy constructor of ClapTrap" << std::endl;
	*this = name;
}

void ClapTrap::attack(const std::string& target)
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
	std::cout << name << " repaired " << amount << " hit points!" << std::endl;
}