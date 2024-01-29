/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: malleman <malleman@42lausanne.ch>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/17 15:37:09 by malleman          #+#    #+#             */
/*   Updated: 2024/01/17 16:11:18 by malleman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int main(){
    ClapTrap    first("Ben");
    ClapTrap    second;
    ClapTrap    third = first;

    first.attack("second");
    second.attack("third");
    third.beRepaired(1);
    second.takeDamage(2);
    first.takeDamage(10);
    first.beRepaired(1);
    third.attack("first");
    first.takeDamage(1);
    second.beRepaired(1);
    first.takeDamage(10);

    return (0);
}