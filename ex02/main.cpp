/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fzayani <fzayani@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/10 17:41:51 by fzayani           #+#    #+#             */
/*   Updated: 2025/02/12 14:07:27 by fzayani          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"
#include "ClapTrap.hpp"
#include "FragTrap.hpp"

int main(void)
{
    // Test ClapTrap
    std::cout << "--- Testing ClapTrap ---" << std::endl;
    ClapTrap clap("Clap");
    clap.attack("Enemy");
    clap.takeDamage(5);
    clap.beRepaired(3);

    // Test ScavTrap
    std::cout << "\n--- Testing ScavTrap ---" << std::endl;
    ScavTrap scav("Scav");
    scav.attack("Enemy");        // Message d'attaque différent
    scav.takeDamage(20);        // Plus de points de vie
    scav.beRepaired(10);        // Plus d'énergie
    scav.guardGate();           // Nouvelle fonction

       // Test FragTrap
    std::cout << "\n--- Testing FragTrap ---" << std::endl;
    FragTrap frag("Frag");
    frag.attack("Enemy");
    frag.takeDamage(40);
    frag.beRepaired(60);
    frag.highFivesGuys();

    // Test de copie
    std::cout << "\n--- Testing Copy ---" << std::endl;
    ScavTrap scav2(scav);
    scav2.guardGate();
    FragTrap frag2(frag);
    frag2.highFivesGuys();

    return 0;
}