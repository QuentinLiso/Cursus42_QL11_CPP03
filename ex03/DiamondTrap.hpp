/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qliso <qliso@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/13 10:54:56 by qliso             #+#    #+#             */
/*   Updated: 2025/03/13 12:48:43 by qliso            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DIAMONDTRAP_HPP
# define DIAMONDTRAP_HPP

# include "ClapTrap.hpp"
# include "ScavTrap.hpp"
# include "FragTrap.hpp"
# include <iostream>
# include <string>

class   DiamondTrap : public ScavTrap, public FragTrap
{

    private:
        std::string _name;

    public:
        DiamondTrap(void);
        DiamondTrap(std::string const &name);
        DiamondTrap(DiamondTrap const &d);
        DiamondTrap& operator=(DiamondTrap const &rhs);
        ~DiamondTrap(void);

        std::string getName(void) const;
        
        void    attack(std::string const &target);
        void    whoAmI(void) const;
};

std::ostream&   operator<<(std::ostream &o, DiamondTrap const &t);

#endif