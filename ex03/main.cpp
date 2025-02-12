/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fzayani <fzayani@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/10 17:41:51 by fzayani           #+#    #+#             */
/*   Updated: 2025/02/12 17:58:24 by fzayani          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"
#include "ClapTrap.hpp"
#include "FragTrap.hpp"
#include "DiamondTrap.hpp"

int main(void)
{
    // Test ClapTrap
    std::cout << "--- Testing ClapTrap ---" << std::endl;
    ClapTrap clap("Clap");

    std::cout << "\n--- Testing DiamondTrap Stats ---" << std::endl;
    std::cout << "Hit points: " << clap.get_hit_points() << std::endl;
    std::cout << "Energy: " << clap.get_energy() << std::endl;
    std::cout << "Attack damage: " << clap.get_attack_damage() << std::endl;

    clap.attack("Enemy");
    clap.takeDamage(5);
    clap.beRepaired(3);

    // Test ScavTrap
    std::cout << "\n--- Testing ScavTrap ---" << std::endl;
    ScavTrap scav("Scav");

    std::cout << "\n--- Testing DiamondTrap Stats ---" << std::endl;
    std::cout << "Hit points: " << scav.get_hit_points() << std::endl;
    std::cout << "Energy: " << scav.get_energy() << std::endl;
    std::cout << "Attack damage: " << scav.get_attack_damage() << std::endl;

    scav.attack("Enemy");        // Message d'attaque différent
    scav.takeDamage(20);        // Plus de points de vie
    scav.beRepaired(10);        // Plus d'énergie
    scav.guardGate();           // Nouvelle fonction

    // Test FragTrap
    std::cout << "\n--- Testing FragTrap ---" << std::endl;
    FragTrap frag("Frag");

     std::cout << "\n--- Testing DiamondTrap Stats ---" << std::endl;
    std::cout << "Hit points: " << frag.get_hit_points() << std::endl;
    std::cout << "Energy: " << frag.get_energy() << std::endl;
    std::cout << "Attack damage: " << frag.get_attack_damage() << std::endl;

    frag.attack("Enemy");
    frag.takeDamage(40);
    frag.beRepaired(60);
    frag.highFivesGuys();

    // Test DiamondTrap
    std::cout << "\n--- Testing DiamondTrap ---" << std::endl;
    DiamondTrap diamond("Diamond");


    std::cout << "\n--- Testing DiamondTrap Stats ---" << std::endl;
    std::cout << "Hit points: " << diamond.get_hit_points() << std::endl;
    std::cout << "Energy: " << diamond.get_energy() << std::endl;
    std::cout << "Attack damage: " << diamond.get_attack_damage() << std::endl;

    diamond.attack("Enemy"); //herite de ScavTrap
    diamond.takeDamage(30); //herite de ClapTrap
    diamond.beRepaired(60); //herite de ClapTrap
    diamond.guardGate(); //herite de ScavTrap
    diamond.highFivesGuys(); //herite de FragTrap
    diamond.whoAmI();

    // Test de copie
    std::cout << "\n--- Testing Copy ---" << std::endl;
    ScavTrap scav2(scav);
    scav2.guardGate();
    FragTrap frag2(frag);
    frag2.highFivesGuys();
    DiamondTrap diamond2(diamond);
    diamond2.whoAmI();

    return 0;
}