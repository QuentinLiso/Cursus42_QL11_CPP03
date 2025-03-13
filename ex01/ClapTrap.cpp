/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qliso <qliso@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/12 16:57:19 by qliso             #+#    #+#             */
/*   Updated: 2025/03/13 10:30:17 by qliso            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap(void) : ClapTrap("Undefined", 10, 10, 0)
{
    std::cout << "ClapTrap " << this->_name << " : Default constructor called" << std::endl;
}

ClapTrap::ClapTrap(std::string const &name) : ClapTrap(name, 10, 10, 0)
{
    std::cout << "ClapTrap " << this->_name << " : Constructor with name called" << std::endl;
}

ClapTrap::ClapTrap(std::string const &name, unsigned int hp, unsigned int ep, unsigned int ad) :
    _name(name), _hitPoints(hp), _energyPoints(ep), _attackDamage(ad)
{
    std::cout << "ClapTrap " << this->_name << " : Constructor with values called" << std::endl;
}

ClapTrap::ClapTrap(ClapTrap const &c) :
    _name(c._name), _hitPoints(c._hitPoints), _energyPoints(c._energyPoints), _attackDamage(c._attackDamage)
{
    std::cout << "ClapTrap " << this->_name << " : Copy constructor called" << std::endl;
}

ClapTrap & ClapTrap::operator=(ClapTrap const &rhs)
{
    std::cout << "ClapTrap " << this->_name << " : Operator `=' overloading called" << std::endl;
    if (this != &rhs)
    {
        this->_name = rhs._name;
        this->_hitPoints = rhs._hitPoints;
        this->_energyPoints = rhs._energyPoints;
        this->_attackDamage = rhs._attackDamage;
    }
    return (*this);
}

ClapTrap::~ClapTrap(void)
{
    std::cout << "ClapTrap " << this->_name << " : Destructor called" << std::endl;
}

void    ClapTrap::attack(std::string const &target)
{
    if (!this->_hitPoints)
    {
        std::cout << "ClapTrap " << this->_name << " is dead and cannot attack." << std::endl;
        return ;
    }
    if (!this->_energyPoints)
    {
        std::cout << "ClapTrap " << this->_name << " has no energy point left and cannot attack." << std::endl;
        return ;
    }
    this->_energyPoints--;
    std::cout << "ClapTrap " << this->_name << " attacks " << target << " causing " << this->_attackDamage << " points of damage!" << std::endl;
    std::cout << "Energy points remaining : " << this->_energyPoints << std::endl;
}

void    ClapTrap::takeDamage(unsigned int amount)
{
    if (!this->_hitPoints)
    {
        std::cout << "ClapTrap " << this->_name << " is dead and cannot take damage." << std::endl;
        return ;
    }
    else if (this->_hitPoints > amount)
        this->_hitPoints -= amount;
    else
        this->_hitPoints = 0;
    std::cout << "ClapTrap " << this->_name << " has taken " << amount << " damage. " << std::endl;
    std::cout << "Hit points remaining : " << this->_hitPoints << std::endl;
    if (!this->_hitPoints)
        std::cout << "ClapTrap " << this->_name << " is dead." << std::endl;
    
}

void    ClapTrap::beRepaired(unsigned int amount)
{
    if (!this->_hitPoints)
    {
        std::cout << "ClapTrap " << this->_name << " is dead and cannot repair." << std::endl;
        return ;
    }
    if (!this->_energyPoints)
    {
        std::cout << "ClapTrap " << this->_name << " has no energy point left and cannot repair." << std::endl;
        return ;
    }
    this->_hitPoints += amount;
    this->_energyPoints--;
    std::cout << "ClapTrap " << this->_name << " repaired by " << amount << " hitPoints." << std::endl;
    std::cout << "Hit points remaining : " << this->_hitPoints << std::endl;
    std::cout << "Energy points remaining : " << this->_energyPoints << std::endl;
}