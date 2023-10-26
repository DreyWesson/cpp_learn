/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   learn.class.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: doduwole <doduwole@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/25 14:50:58 by doduwole          #+#    #+#             */
/*   Updated: 2023/10/25 14:50:59 by doduwole         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LEARN_CLASS_H
#define LEARN_CLASS_H


class Sample {
public:
    int myInt;  // data member
    Sample(void);
    ~Sample(void);    
    void myMethod(int val);
};


#endif