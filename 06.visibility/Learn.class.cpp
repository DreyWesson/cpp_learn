/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Learn.class.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: doduwole <doduwole@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/25 12:11:10 by doduwole          #+#    #+#             */
/*   Updated: 2023/10/26 14:41:07 by doduwole         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Learn.class.hpp"

Sample::Sample(void) {

    std::cout << "constructor called" << std::endl;
    this->publicFoo = 41;
    std::cout << "this->publicFoo " << this->publicFoo << std::endl;
    this->_privateFoo = 20;
    std::cout << "this->privateFoo " << this->_privateFoo << std::endl;
    this->publicFn();
    this->_privateFn();
    return;
}

Sample::~Sample(void) {
    std::cout << "deconstructor called" << std::endl;
    return;
}

void Sample::_privateFn() const{
    std::cout << "_privateFn called" << std::endl;
    return;
}
void Sample::publicFn() const{
    std::cout << "publicFn called" << std::endl;
    return;
}