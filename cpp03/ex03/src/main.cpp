/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpeterso <mpeterso@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/17 17:00:27 by mpeterso          #+#    #+#             */
/*   Updated: 2024/03/17 18:59:48 by mpeterso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"
#include "ScavTrap.hpp"
#include "DiamondTrap.hpp"

int main(void) 
{
    std::cout << "----------Constructors------------" << std::endl;
    std::cout << std::endl;
    std::string diamondTrapName = "A";
	// std::string scavTrapName = "B";
    std::string clapTrapName = "C";

    DiamondTrap diamondTrap(diamondTrapName);
	// ScavTrap	scavTrap(scavTrapName);
    ClapTrap    clapTrap(clapTrapName);
    std::cout << std::endl;

    std::cout << "-------------Battle---------------" << std::endl;
    std::cout << std::endl;
    diamondTrap.whoAmI();
    // scavTrap.guardGate();
    // diamondTrap.highFivesGuys();
	// diamondTrap.guardGate();
    // fragTrap.attack(scavTrapName);
    // scavTrap.takeDamage(30);
    // fragTrap.attack(scavTrapName);
    // scavTrap.takeDamage(30);
    // fragTrap.attack(scavTrapName);
    // scavTrap.takeDamage(30);
    // fragTrap.attack(scavTrapName);
    // scavTrap.takeDamage(30);
    // scavTrap.guardGate();
    // scavTrap.beRepaired(10);
    // std::cout << std::endl;
    // std::cout << "retaliation..." << std::endl;
    // for (int i = 6; i > 0; i--)
    // {
    //     scavTrap.attack(fragTrapName);
    //     fragTrap.takeDamage(20);
    // }
    // scavTrap.guardGate();
    // fragTrap.highFivesGuys();

    // diamondTrap.highFivesGuys();
	// diamondTrap.guardGate();
	// diamondTrap.takeDamage(5000);
	// diamondTrap.beRepaired(5000);
	// diamondTrap.whoAmI();
        
    std::cout << std::endl;
    std::cout << "----------Destructors------------" << std::endl;
    std::cout << std::endl;
    return (0);
}