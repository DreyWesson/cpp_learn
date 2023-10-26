/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: doduwole <doduwole@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/25 14:51:01 by doduwole          #+#    #+#             */
/*   Updated: 2023/10/26 14:42:20 by doduwole         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Learn.class.hpp"
#include <iostream>

int main(void)
{
    Sample instance;

    instance.publicFoo = 42;
    instance.publicFn();
    return (0);
}
