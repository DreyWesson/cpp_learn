/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   learn.class.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: doduwole <doduwole@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/25 12:11:10 by doduwole          #+#    #+#             */
/*   Updated: 2023/10/26 09:12:26 by doduwole         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Learn.class.hpp"

Sample::Sample(void) {
    std::cout << "constructor called" << std::endl;
    return;
}

Sample::~Sample(void) {
    std::cout << "deconstructor called" << std::endl;
    return;
}

void Sample::myMethod(int val) {
    std::cout << "Passed member attr -> " << val << std::endl;
    return;
}
