/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qliso <qliso@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/13 10:26:01 by qliso             #+#    #+#             */
/*   Updated: 2025/03/13 14:18:15 by qliso            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

unsigned int const  FragTrap::_initial_HP = 100;
unsigned int const  FragTrap::_initial_EP = 100;
unsigned int const  FragTrap::_initial_AD = 30;

FragTrap::FragTrap(void) : 
    ClapTrap("Undefined", FragTrap::_initial_HP, FragTrap::_initial_EP, FragTrap::_initial_AD)
{
    this->_name = "Undefined";
    std::cout << "FragTrap " << this->_name << " : Default constructor called" << std::endl;
}

FragTrap::FragTrap(std::string const &name) : 
    ClapTrap(name, FragTrap::_initial_HP, FragTrap::_initial_EP, FragTrap::_initial_AD)
{
    this->_name = name;
    std::cout << "FragTrap " << this->_name << " : Constructor with name called" << std::endl;
}

FragTrap::FragTrap(FragTrap const &f) : ClapTrap(f)
{
    std::cout << "FragTrap " << this->_name << " : Copy constructor called" << std::endl;
}

FragTrap&   FragTrap::operator=(FragTrap const &rhs)
{
    std::cout << "FragTrap " << this->_name << " : Operator `=' overloading called" << std::endl;
    if (this != &rhs)
        ClapTrap::operator=(rhs);
    return (*this);
}

FragTrap::~FragTrap(void)
{
    std::cout << "FragTrap " << this->_name << " : Destructor called" << std::endl;
}

void    FragTrap::highFivesGuys(void) const
{
    std::cout << "FragTrap " << this->_name << " wants to high five" << std::endl;
}

