/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qliso <qliso@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/12 17:45:24 by qliso             #+#    #+#             */
/*   Updated: 2025/03/13 10:52:03 by qliso            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"
#include <string>
#include <iostream>

int main(void)
{
    std::cout << "\033[1;33mTest 1 : Using all energy points with attack\033[0m" << std::endl;
    FragTrap    f1("Trap 1");
    for (int i = 0; i < 105; i++)
        f1.attack("Enemy");
    for (int i = 0; i < 3; i++)
        f1.beRepaired(2);

    std::cout << "\033[1;33mTest 2 : Dying trap\033[0m" << std::endl;
    FragTrap    f2("Trap 2");
    f2.takeDamage(40);
    f2.takeDamage(40);
    f2.takeDamage(2);
    f2.beRepaired(234);
    f2.takeDamage(386);
    f2.attack("Enemy");
    f2.beRepaired(12);
    f2.takeDamage(5);

    std::cout << "\033[1;33mTest 3 : Copying s1\033[0m" << std::endl;
    FragTrap    f3(f1);
    f3.attack("Enemy");

    std::cout << "\033[1;33mTest 4 : `=' s2\033[0m" << std::endl;
    FragTrap    f4;
    f4 = f2;
    f4.attack("Enemy");

    std::cout << "\033[1;33mTest 5 : Memory leaks\033[0m" << std::endl;
    ClapTrap    *f5 = new FragTrap("Trap 5");
    delete f5;
    return (0);
}