/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qliso <qliso@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/13 10:54:58 by qliso             #+#    #+#             */
/*   Updated: 2025/03/13 14:36:41 by qliso            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap(void) : 
    ClapTrap("Undefined_clap_name", FragTrap::_initial_HP, ScavTrap::_initial_EP, FragTrap::_initial_AD),
    ScavTrap("Undefined_clap_name"), 
    FragTrap("Undefined_clap_name"),
    _name("Undefined")
{
    std::cout << "DiamondTrap " << this->_name << " Default constructor called" << std::endl;
}

DiamondTrap::DiamondTrap(std::string const &name) :
    ClapTrap(name + "_clap_name", FragTrap::_initial_HP, ScavTrap::_initial_EP, FragTrap::_initial_AD),
    ScavTrap(name + "_clap_name"),
    FragTrap(name + "_clap_name"),
    _name(name)
{
    std::cout << "DiamondTrap " << this->_name << " Constructor with name called" << std::endl;
}

DiamondTrap::DiamondTrap(DiamondTrap const &d) : 
    ClapTrap(d), ScavTrap(d), FragTrap(d), _name(d._name)
{
    std::cout << "DiamondTrap " << this->_name << " Copy constructor called" << std::endl;
}

DiamondTrap&    DiamondTrap::operator=(DiamondTrap const &rhs)
{
    std::cout << "DiamondTrap " << this->_name << " Operator `=' overloading called" << std::endl;
    if (this != &rhs)
    {
        ClapTrap::operator=(rhs);
        this->_name = rhs._name;
    }
    return (*this);
}

DiamondTrap::~DiamondTrap(void)
{
    std::cout << "DiamondTrap " << this->_name << " Destructor called" << std::endl;
}


std::string DiamondTrap::getName(void) const
{
    return (this->_name);
}

void    DiamondTrap::attack(std::string const &target)
{
    ScavTrap::attack(target);
}

void    DiamondTrap::whoAmI(void) const
{
    std::cout << "My ClapTrap name is : " << ClapTrap::_name << std::endl;
    std::cout << "My name is : " << this->_name << std::endl;
}

std::ostream&   operator<<(std::ostream &o, DiamondTrap const &t)
{
    o << "********** " << t.getName() << " stats **********" << std::endl;
    o << "Hit points : " << t.getHitPoints() << std::endl;
    o << "Energy points : " << t.getEnergyPoints() << std::endl;
    o << "Attack damage : " << t.getAttackDamage() << std::endl;
    o << "Guard gate mode : " << t.getGuardGateMode() << std::endl;
    o << "**********************************" << std::endl;
    return (o);
}