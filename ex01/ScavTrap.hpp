/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qliso <qliso@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/12 19:28:03 by qliso             #+#    #+#             */
/*   Updated: 2025/03/13 10:07:17 by qliso            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCAVTRAP_HPP
# define SCAVTRAP_HPP

# include "ClapTrap.hpp"
# include <string>
# include <iostream>

class ScavTrap : public ClapTrap
{
    private:
        bool    _guardGateMode;

    public:
        ScavTrap(void);
        ScavTrap(std::string const &name);
        ScavTrap(ScavTrap const &rhs);
        ScavTrap & operator=(ScavTrap const &rhs);
        ~ScavTrap(void);

        void    attack(std::string const &target);
        void    guardGate(void);
};

#endif