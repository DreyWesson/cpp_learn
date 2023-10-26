/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Learn.class.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: doduwole <doduwole@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/25 12:11:10 by doduwole          #+#    #+#             */
/*   Updated: 2023/10/26 11:54:07 by doduwole         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Learn.class.hpp"

Sample::Sample(float const pie) : pi(pie), myInt(42) {

    std::cout << "constructor called" << std::endl;
    // this->myMethod(21);
    return;
}

Sample::~Sample(void) {
    std::cout << "deconstructor called" << std::endl;
    return;
}

void Sample::myMethod(int val) const{
    std::cout << "this->pi = " << this->pi << std::endl;
    std::cout << "this->myInt = " << this->myInt << std::endl;
    std::cout << "val = " << val << std::endl;
    return;
}
