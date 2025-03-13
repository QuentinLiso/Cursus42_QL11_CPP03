/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qliso <qliso@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/12 16:57:17 by qliso             #+#    #+#             */
/*   Updated: 2025/03/13 10:29:34 by qliso            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAPTRAP_HPP
# define CLAPTRAP_HPP

# include <string>
# include <iostream>

class   ClapTrap
{
    protected:
        std::string     _name;
        unsigned int    _hitPoints;
        unsigned int    _energyPoints;
        unsigned int    _attackDamage;

        ClapTrap(std::string const &name, unsigned int hp, unsigned int ep, unsigned int ad);
        
    public:
        ClapTrap(void);
        ClapTrap(std::string const &name);
        ClapTrap(ClapTrap const &c);
        ClapTrap & operator=(ClapTrap const &c);
        virtual ~ClapTrap();

        void    attack(std::string const &target);
        void    takeDamage(unsigned int amount);
        void    beRepaired(unsigned int amount);
};

#endif
