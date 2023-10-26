/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Learn.class.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: doduwole <doduwole@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/25 12:11:10 by doduwole          #+#    #+#             */
/*   Updated: 2023/10/26 15:41:14 by doduwole         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Learn.class.hpp"

Sample::Sample(void) {
    this->_privateFoo = 0;
    std::cout << "constructor called" << std::endl;
    return;
}

Sample::~Sample(void) {
    std::cout << "deconstructor called" << std::endl;
    return;
}

// void Sample::_privateFn() const{
//     std::cout << "_privateFn called" << std::endl;
//     return;
// }

int Sample::getFoo() const{
    std::cout << "getter -> ";
    return this->_privateFoo;
}

void Sample::setFoo(int val){
    std::cout << "setter called" << std::endl;
    if (val >= 0)
        this->_privateFoo = val;
    return;
}