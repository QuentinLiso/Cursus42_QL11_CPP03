/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qliso <qliso@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/13 10:26:00 by qliso             #+#    #+#             */
/*   Updated: 2025/04/08 12:57:10 by qliso            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRAGTRAP_HPP
# define FRAGTRAP_HPP

# include "ClapTrap.hpp"
# include <iostream>
# include <string>

class FragTrap : public ClapTrap
{
    private :

    public :
        FragTrap(void);
        FragTrap(std::string const &name);
        FragTrap(FragTrap const &f);
        FragTrap& operator=(FragTrap const &rhs);
        ~FragTrap(void);

        void    highFivesGuys(void) const;
};

#endif