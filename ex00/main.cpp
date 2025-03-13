/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qliso <qliso@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/12 17:45:24 by qliso             #+#    #+#             */
/*   Updated: 2025/03/13 09:12:32 by qliso            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include <string>
#include <iostream>

int main(void)
{
    std::cout << "\033[1;33mTest 1 : Using all energy points with attack\033[0m" << std::endl;
    ClapTrap    c1("Trap 1");
    for (int i = 0; i < 15; i++)
        c1.attack("Enemy");
    for (int i = 0; i < 3; i++)
        c1.beRepaired(2);
    
    std::cout << "\033[1;33mTest 2 : Dying trap\033[0m" << std::endl;
    ClapTrap    c2("Trap2");
    c2.takeDamage(3);
    c2.takeDamage(3);
    c2.takeDamage(3);
    c2.beRepaired(234);
    c2.takeDamage(386);
    c2.attack("Enemy");
    c2.beRepaired(12);
    c2.takeDamage(5);
    
    std::cout << "\033[1;33mTest 3 : Copying c1\033[0m" << std::endl;
    ClapTrap    c3;
    c3 = c1;
    c3.attack("Enemy");
    return (0);
}