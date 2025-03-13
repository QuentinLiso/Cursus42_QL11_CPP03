/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qliso <qliso@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/12 17:45:24 by qliso             #+#    #+#             */
/*   Updated: 2025/03/13 10:23:47 by qliso            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include <string>
#include <iostream>

int main(void)
{
    std::cout << "\033[1;33mTest 1 : Using all energy points with attack\033[0m" << std::endl;
    ScavTrap    s1("Trap 1");
    s1.guardGate();
    for (int i = 0; i < 55; i++)
        s1.attack("Enemy");
    for (int i = 0; i < 3; i++)
        s1.beRepaired(2);
    s1.guardGate();
    s1.guardGate();
    s1.guardGate();

    std::cout << "\033[1;33mTest 2 : Dying trap\033[0m" << std::endl;
    ScavTrap    s2("Trap 2");
    s2.takeDamage(40);
    s2.takeDamage(40);
    s2.guardGate();
    s2.guardGate();
    s2.takeDamage(2);
    s2.beRepaired(234);
    s2.takeDamage(386);
    s2.attack("Enemy");
    s2.beRepaired(12);
    s2.takeDamage(5);
    s2.guardGate();

    std::cout << "\033[1;33mTest 3 : Copying s1\033[0m" << std::endl;
    ScavTrap    s3(s1);
    s3.attack("Enemy");
    s3.guardGate();

    std::cout << "\033[1;33mTest 4 : `=' s2\033[0m" << std::endl;
    ScavTrap    s4;
    s4 = s2;
    s4.attack("Enemy");
    s4.guardGate();
    return (0);
}