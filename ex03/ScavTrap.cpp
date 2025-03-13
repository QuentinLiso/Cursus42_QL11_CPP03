/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qliso <qliso@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/12 19:31:09 by qliso             #+#    #+#             */
/*   Updated: 2025/03/13 14:18:22 by qliso            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

unsigned int const  ScavTrap::_initial_HP = 100;
unsigned int const  ScavTrap::_initial_EP = 50;
unsigned int const  ScavTrap::_initial_AD = 20;

ScavTrap::ScavTrap(void) : 
    ClapTrap("Undefined", ScavTrap::_initial_HP, ScavTrap::_initial_EP, ScavTrap::_initial_AD), _guardGateMode(false)
{
    this->_name = "Undefined";
    std::cout << "ScavTrap " << this->_name << " : Default constructor called" << std::endl;
}

ScavTrap::ScavTrap(std::string const &name) : 
    ClapTrap(name, ScavTrap::_initial_HP, ScavTrap::_initial_EP, ScavTrap::_initial_AD), _guardGateMode(false)
{
    this->_name = name;
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

bool    ScavTrap::getGuardGateMode(void) const
{
    return (this->_guardGateMode);
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

std::ostream&   operator<<(std::ostream &o, ScavTrap const &t)
{
    o << "********** " << t.getName() << " stats **********" << std::endl;
    o << "Hit points : " << t.getHitPoints() << std::endl;
    o << "Energy points : " << t.getEnergyPoints() << std::endl;
    o << "Attack damage : " << t.getAttackDamage() << std::endl;
    o << "Guard gate mode : " << t.getGuardGateMode() << std::endl;
    o << "**********************************" << std::endl;
    return (o);
}
