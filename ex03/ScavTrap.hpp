/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qliso <qliso@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/12 19:28:03 by qliso             #+#    #+#             */
/*   Updated: 2025/03/13 13:47:28 by qliso            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCAVTRAP_HPP
# define SCAVTRAP_HPP

# include "ClapTrap.hpp"
# include <string>
# include <iostream>

class ScavTrap : virtual public ClapTrap
{
    protected:
        static const unsigned int    _initial_HP;
        static const unsigned int    _initial_EP;
        static const unsigned int    _initial_AD;
        bool    _guardGateMode;
        
    public:
        ScavTrap(void);
        ScavTrap(std::string const &name);
        ScavTrap(ScavTrap const &rhs);
        ScavTrap & operator=(ScavTrap const &rhs);
        virtual ~ScavTrap(void);

        bool    getGuardGateMode(void) const;

        void    attack(std::string const &target);
        void    guardGate(void);
};

std::ostream&   operator<<(std::ostream &o, ScavTrap const &t);

#endif