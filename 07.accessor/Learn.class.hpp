/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Learn.class.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: doduwole <doduwole@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/25 14:50:58 by doduwole          #+#    #+#             */
/*   Updated: 2023/10/26 15:29:54 by doduwole         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LEARN_CLASS_H
#define LEARN_CLASS_H


class Sample {
    public:
        Sample(void);
        ~Sample(void);

        int getFoo(void) const;
        void setFoo(int val);
    private:
        int _privateFoo;
};

#endif