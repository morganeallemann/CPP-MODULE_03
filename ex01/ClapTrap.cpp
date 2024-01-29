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

ClapTrap::ClapTrap() : _name("Default"), _health(100), _energy(50), _damage(20){
    std::cout << "ClapTrap " << _name << " was created by default constructor !" << std::endl;
}

ClapTrap::ClapTrap(std::string name) : _name(name), _health(100), _energy(50), _damage(20){ 
    std::cout << "ClapTrap " << this->_name << " was created by surcharged constructor" << std::endl;
    
}

ClapTrap::ClapTrap(ClapTrap const &copy){
    std::cout << "ClapTrap " << copy.getName() << " was created by copy constructor !" << std::endl;
    *this = copy;
}

ClapTrap::~ClapTrap(){
    std::cout << "Destructor was called, CrapTap " << this->_name << " was destroyed !" << std::endl;
}

ClapTrap &ClapTrap::operator=(ClapTrap const &rhs){
    this->_name = rhs.getName();
    this->_health = rhs.getHealth();
    this->_energy = rhs.getEnergy();
    this->_damage = rhs.getDamage();
    return (*this);
}

std::string  ClapTrap::getName(void) const{
    return (this->_name);
}

int  ClapTrap::getHealth(void) const{
    return (this->_health);
}

int ClapTrap::getEnergy(void) const{
    return (this->_energy);
}

int ClapTrap::getDamage(void) const{
    return (this->_damage);
}

void    ClapTrap::setName(std::string name){
    this->_name = name;
}

void	ClapTrap::setHealth(int health){
    this->_health = health;
}

void	ClapTrap::setEnergy(int energy){
    this->_energy = energy;
}

void	ClapTrap::setDamage(int damage){
    this->_damage = damage;
}

void    ClapTrap::attack(const std::string &target){
    if (this->_energy > 0 && this->_health > 0)
    {
        std::cout << "ClapTrap " << this->_name << " attacks " << target << ", causing " << this->_damage << " points of damage !" << std::endl;
        this->_energy--;
        if (this->_energy < 0)
            this->_energy = 0;
    }
    else if (this->_energy > 0 && this->_health <= 0)
        std::cout << "ClapTrap " << this->_name << " cannot attack because he haven't any health points ! He need to repair himself ! " << std::endl;
    else
        std::cout << "ClapTrap " << this->_name << " cannot attack because he haven't any energy for this, sorry :-( !" << std::endl;
    return ;
}

void 	ClapTrap::takeDamage(unsigned int amount){
    if (this->_health > 0)
    {
        this->_health -= amount;
        std::cout << "ClapTrap " << this->_name << " was attacked and he lose " << amount << " points of health ! " << " His health point is now : " << this->_health << std::endl;
    }
    else
        std::cout << "ClapTrap " << this->_name << " is already dead, stop to hit him !" << std::endl;
    if (this->_health < 0)
        this->_health = 0;
    return ;
}

void	ClapTrap::beRepaired(unsigned int amount){
    if (this->_energy > 0)
    {
        this->_energy--;
        this->_health += amount;
        std::cout << "ClapTrap " << this->_name << " repaired himself he have now " << this->_health << " points of health and " << this->_energy << " points of energy. " << std::endl;
        if (this->_energy < 0)
            this->_energy = 0;
    }
    else
        std::cout << "ClapTrap " << this->_name << " had no more energy for repaired himself, sorry !" << std::endl;
    return ;
}