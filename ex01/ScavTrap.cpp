/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: malleman <malleman@42lausanne.ch>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/17 15:37:09 by malleman          #+#    #+#             */
/*   Updated: 2024/01/17 16:11:18 by malleman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap() : ClapTrap()
{
    std::cout << "Son's default constructor was called, ScavTrap " << this->getName() << " was created" << std::endl;
}

ScavTrap::ScavTrap(std::string name) : ClapTrap(name){
    std::cout << "Son's surcharged constructor was called, ScavTrap " << this->getName() << " was created" << std::endl;
}

ScavTrap::ScavTrap(ScavTrap const &copy) : ClapTrap(copy.getName()){
    std::cout << "Son's copy constructor was called, ScavTrap " << copy.getName() << " was created" << std::endl;
}

ScavTrap::~ScavTrap(){
    std::cout << "Son's destructor was called, ScavTrap " << this->getName()<< " was destroyed" << std::endl;
}
/*
ScavTrap &ScavTrap::operator=(ScavTrap const &rhs){
    this->_name = rhs.getName();
    this->_health = rhs.getHealth();
    this->_energy = rhs.getEnergy();
    this->_damage = rhs.getDamage();
    return (*this);
}
*/
void    ScavTrap::guardGate(){
    std::cout << "ScavTrap " << this->getName() << " is now in Gate keeper mode ! " << std::endl;
    return ;
}
