/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Learn.class.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: doduwole <doduwole@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/25 14:50:58 by doduwole          #+#    #+#             */
/*   Updated: 2023/10/26 11:41:47 by doduwole         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LEARN_CLASS_H
#define LEARN_CLASS_H


class Sample {
    public:
        float const pi;
        int myInt;  // data member

        Sample(float const pie);
        ~Sample(void);

        void myMethod(int val) const;
};

#endif