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

#include "ClapTrap.hpp"

ClapTrap::ClapTrap(){
    std::cout << "Default constructor was called" << std::endl;
}

ClapTrap::ClapTrap(string name) : _name(name), _health(10), _energy(10), _damage(0){
    std::cout << "Congratulation ! ClapTrap was created" << std::endl;
    
}

ClapTrap(ClapTrap const &copy){
    std::cout << "Copy constructor was called" << std::endl;
    *this = copy;
}

~ClapTrap(){
    std::cout << "Destructor was called" << std::endl;
}

string  ClapTrap::getName(void) const(
    return (this->_name);
)

void    ClapTrap::setName(string name){
    this->_name = name;
}

ClapTrap &	operator=(Fixed const &rhs){
    this->_name = rhs.getName();
    return (*this);
}

void    ClapTrap::attack(const std::string &target){

}

void 	takeDamage(unsigned int amount){

}

void	beRepaired(unsigned int amount){

}