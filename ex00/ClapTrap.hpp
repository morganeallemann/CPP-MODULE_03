/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: malleman <malleman@42lausanne.ch>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/17 15:37:09 by malleman          #+#    #+#             */
/*   Updated: 2024/01/17 16:11:18 by malleman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAPTRAP_HPP
# define CLAPTRAP_HPP

#include <iostream>
#include <string>

class ClapTrap {

	private :
		string  _name;
		int		_health;
		int		_energy;
		int		_damage;

	public :
		ClapTrap();
		ClapTrap(string name);
		ClapTrap(ClapTrap const &copy);
		~ClapTrap();

		ClapTrap &	operator=(Fixed const &rhs);

		void 	attack(const std::string& target);
 		void 	takeDamage(unsigned int amount);
		void	beRepaired(unsigned int amount);
	
		string	getName(void) const;
		int		getHealth(void) const;
		int		getEnergy(void) const;
		int		getDamage(void) const; 

		void	setName(string name);
};

#endif
