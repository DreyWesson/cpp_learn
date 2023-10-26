/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: doduwole <doduwole@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/25 14:51:01 by doduwole          #+#    #+#             */
/*   Updated: 2023/10/26 15:41:29 by doduwole         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Learn.class.hpp"
#include <iostream>

int main(void)
{
    Sample instance;

    std::cout << instance.getFoo() << std::endl;
    instance.setFoo(42);
    std::cout << instance.getFoo() << std::endl;
    return (0);
}
