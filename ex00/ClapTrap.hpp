/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qliso <qliso@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/12 16:57:17 by qliso             #+#    #+#             */
/*   Updated: 2025/03/12 18:03:33 by qliso            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAPTRAP_HPP
# define CLAPTRAP_HPP

# include <string>
# include <iostream>

class   ClapTrap
{
    private:
        std::string     _name;
        unsigned int    _hitPoints;
        unsigned int    _energyPoints;
        unsigned int    _attackDamage;


    public:
        ClapTrap(void);
        ClapTrap(std::string const &name);
        ClapTrap(ClapTrap const &c);
        ClapTrap & operator=(ClapTrap const &c);
        ~ClapTrap();

        void    attack(std::string const &target);
        void    takeDamage(unsigned int amount);
        void    beRepaired(unsigned int amount);
};

#endif
