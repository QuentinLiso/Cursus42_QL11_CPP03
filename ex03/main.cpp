/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qliso <qliso@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/12 17:45:24 by qliso             #+#    #+#             */
/*   Updated: 2025/03/13 14:45:48 by qliso            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"
#include "DiamondTrap.hpp"
#include <string>
#include <iostream>

int main(void)
{
    std::cout << "\033[1;33mTest 1 : Using all energy points with attack\033[0m" << std::endl;
    DiamondTrap    d1("Trap 1");
    std::cout << d1;
    d1.guardGate();
    d1.guardGate();
    for (int i = 0; i < 55; i++)
        d1.attack("Enemy");
    for (int i = 0; i < 3; i++)
        d1.beRepaired(2);
    d1.guardGate();
    d1.whoAmI();
    std::cout << std::endl << std::endl;

    std::cout << "\033[1;33mTest 2 : Dying trap\033[0m" << std::endl;
    DiamondTrap    d2("Trap 2");
    std::cout << d2;
    d2.takeDamage(40);
    d2.guardGate();
    d2.takeDamage(40);
    d2.takeDamage(2);
    d2.guardGate();
    d2.beRepaired(234);
    d2.takeDamage(386);
    d2.attack("Enemy");
    d2.beRepaired(12);
    d2.guardGate();
    d2.guardGate();
    d2.takeDamage(5);
    d2.whoAmI();
    std::cout << std::endl << std::endl;
    
    std::cout << "\033[1;33mTest 3 : Copying s1\033[0m" << std::endl;
    DiamondTrap    d3(d1);
    std::cout << d3;
    d3.attack("Enemy");
    d3.guardGate();
    d3.guardGate();
    d3.whoAmI();
    std::cout << std::endl << std::endl;
    
    std::cout << "\033[1;33mTest 4 : `=' s2\033[0m" << std::endl;
    std::cout << "Declaration : " << std::endl;
    DiamondTrap    d4;
    std::cout << "= is called : " << std::endl;
    d4 = d2;
    std::cout << d4;
    d4.guardGate();
    d4.attack("Enemy");
    d4.guardGate();
    d4.whoAmI();
    std::cout << std::endl << std::endl;
    
    std::cout << "\033[1;33mTest 5 : Memory leaks\033[0m" << std::endl;
    ClapTrap    *d5 = new DiamondTrap("Trap 5");
    std::cout << *d5;
    delete d5;
    return (0);
}