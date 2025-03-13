/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qliso <qliso@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/12 19:31:09 by qliso             #+#    #+#             */
/*   Updated: 2025/03/13 10:21:58 by qliso            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap(void) : ClapTrap("Undefined", 100, 50, 20), _guardGateMode(false)
{
    std::cout << "ScavTrap " << this->_name << " : Default constructor called" << std::endl;
}

ScavTrap::ScavTrap(std::string const &name) : ClapTrap(name, 100, 50, 20), _guardGateMode(false)
{
    std::cout << "ScavTrap " << this->_name << " : Constructor with name called" << std::endl;
}

ScavTrap::ScavTrap(ScavTrap const &s) : ClapTrap(s), _guardGateMode(s._guardGateMode)
{
    std::cout << "ScavTrap " << this->_name << " : Copy constructor called" << std::endl;
}

ScavTrap & ScavTrap::operator=(ScavTrap const &rhs)
{
    std::cout << "ScavTrap " << this->_name << " : Operator `=' overloading called" << std::endl;
    if (this != &rhs)
    {
        ClapTrap::operator=(rhs);
        this->_guardGateMode = rhs._guardGateMode;
    }
    return (*this);
}

ScavTrap::~ScavTrap(void)
{
    std::cout << "ScavTrap " << this->_name << " : Destructor called" << std::endl;
}

void    ScavTrap::attack(std::string const &target)
{
    if (!this->_hitPoints)
    {
        std::cout << "ScavTrap " << this->_name << " is dead and cannot attack." << std::endl;
        return ;
    }
    if (!this->_energyPoints)
    {
        std::cout << "ScavTrap " << this->_name << " has no energy point left and cannot attack." << std::endl;
        return ;
    }
    this->_energyPoints--;
    std::cout << "ScavTrap " << this->_name << " attacks " << target << " causing " << this->_attackDamage << " points of damage!" << std::endl;
    std::cout << "Energy points remaining : " << this->_energyPoints << std::endl;
}

void    ScavTrap::guardGate(void)
{
    if (!this->_hitPoints)
    {
        std::cout << "ScavTrap " << this->_name << " is dead and cannot enter Gate keeper mode." << std::endl;
        return ;
    }
    this->_guardGateMode = !this->_guardGateMode;
    if (this->_guardGateMode)
        std::cout << "ScavTrap " << this->_name << " entered in Gate keeper mode." << std::endl;
    else
        std::cout << "ScavTrap " << this->_name << " exited Gate keeper mode." << std::endl;
        
    
}