/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qliso <qliso@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/13 10:26:00 by qliso             #+#    #+#             */
/*   Updated: 2025/03/13 13:57:24 by qliso            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRAGTRAP_HPP
# define FRAGTRAP_HPP

# include "ClapTrap.hpp"
# include <iostream>
# include <string>

class FragTrap : virtual public ClapTrap
{
    protected :
        static const unsigned int    _initial_HP;
        static const unsigned int    _initial_EP;
        static const unsigned int    _initial_AD;

    public :
        FragTrap(void);
        FragTrap(std::string const &name);
        FragTrap(FragTrap const &f);
        FragTrap& operator=(FragTrap const &rhs);
        virtual ~FragTrap(void);

        void    highFivesGuys(void) const;
};

#endif