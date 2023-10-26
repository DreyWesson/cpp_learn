/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: doduwole <doduwole@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/25 14:51:01 by doduwole          #+#    #+#             */
/*   Updated: 2023/10/25 14:51:12 by doduwole         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Learn.class.hpp"
#include <iostream>


int main(void)
{
    Sample instance;

    instance.myInt = 42;
    instance.myMethod(instance.myInt);
    return (0);
}