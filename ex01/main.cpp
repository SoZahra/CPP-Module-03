/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fzayani <fzayani@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/10 17:41:51 by fzayani           #+#    #+#             */
/*   Updated: 2025/02/11 13:28:52 by fzayani          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int	main(void)
{
	ClapTrap default_clap;

	ClapTrap clap("Player1");
	ClapTrap copy_clap(clap);

	default_clap = clap;

	clap.attack("Enemy");
	clap.takeDamage(5);
	clap.beRepaired(3);

	std::cout << "Hit points: " << clap.get_hit_points() << std::endl;
    std::cout << "Energy: " << clap.get_energy() << std::endl;
    std::cout << "Attack damage: " << clap.get_attack_damage() << std::endl;

	for (int i = 0; i < 10; i++)
		clap.attack("Enemy");

	clap.takeDamage(10);
	clap.attack("Enemy");
	clap.beRepaired(5);
	return (0);
}