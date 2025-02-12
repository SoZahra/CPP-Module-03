/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fzayani <fzayani@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/12 13:05:52 by fzayani           #+#    #+#             */
/*   Updated: 2025/02/12 14:10:10 by fzayani          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::~FragTrap()
{
	std::cout << "Destructor of FragTrap called" << std::endl;
}

FragTrap::FragTrap()
{
	this->name = "";
	this->hit_points = 100;
	this->energy = 100;
	this->attack_damage = 30;
	std::cout << " Default constructor of FragTrap is called" << std::endl;
}

FragTrap::FragTrap(std::string name) : ClapTrap(name)
{
	this->hit_points = 100;
	this->energy = 100;
	this->attack_damage = 30;
	std::cout << "Constructor of FragTrap called" << std::endl;
}

FragTrap::FragTrap(const FragTrap &name) : ClapTrap(name)
{
	std::cout << "FragTrap copy constructor called" << std::endl;
}

FragTrap& FragTrap::operator=(const FragTrap& other)
{
	std::cout << "FragTrap assignement operator called" << std::endl;
	ClapTrap::operator=(other);
	return *this;
}

void FragTrap::attack(const std::string& target)
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

void FragTrap::highFivesGuys(void)
{
	std::cout << name <<  " can we have a hight fives ?" << std::endl;
}