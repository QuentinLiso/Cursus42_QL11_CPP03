/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qliso <qliso@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/13 10:26:01 by qliso             #+#    #+#             */
/*   Updated: 2025/03/13 10:42:11 by qliso            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap(void) : ClapTrap("Undefined", 100, 100, 30)
{
    std::cout << "FragTrap " << this->_name << " Default constructor called" << std::endl;
}

FragTrap::FragTrap(std::string const &name) : ClapTrap(name, 100, 100, 30)
{
    std::cout << "FragTrap " << this->_name << " Constructor with name called" << std::endl;
}

FragTrap::FragTrap(FragTrap const &f) : ClapTrap(f)
{
    std::cout << "FragTrap " << this->_name << " Copy constructor called" << std::endl;
}

FragTrap&   FragTrap::operator=(FragTrap const &rhs)
{
    std::cout << "FragTrap " << this->_name << " Operator `=' overloading called" << std::endl;
    if (this != &rhs)
        ClapTrap::operator=(rhs);
    return (*this);
}

FragTrap::~FragTrap(void)
{
    std::cout << "FragTrap " << this->_name << " Destructor called" << std::endl;
}

void    FragTrap::highFivesGuys(void) const
{
    std::cout << "FragTrap " << this->_name << " wants to high five" << std::endl;
}