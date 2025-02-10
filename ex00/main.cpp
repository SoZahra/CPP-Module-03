/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fzayani <fzayani@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/10 17:41:51 by fzayani           #+#    #+#             */
/*   Updated: 2025/02/10 18:34:59 by fzayani          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int	main(void)
{
	ClapTrap clap("Player1");

	clap.attack("Enemy");
	clap.takeDamage(5);
	clap.beRepaired(3);

	// Test no energy
	for (int i = 0; i < 10; i++)
		clap.attack("Enemy");

	// Test mort
	clap.takeDamage(10);
	clap.attack("Enemy");
	clap.beRepaired(5);
	return (0);
}