/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mehdi <mehdi@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/05 20:24:25 by mehdi             #+#    #+#             */
/*   Updated: 2023/11/07 03:39:02 by mehdi            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

 void *ft_memset(void *b, int c, size_t len)
 {
    unsigned char *pt = b;
    while(len > 0)
    {
        *pt = (unsigned char )c;
        pt++;
        len--;
    }
    return (b);
 }

//  int main()
// {
//     int b[] = {42,23};
//     ft_memset(b, 5, 6);
//     ft_memset(b, 57, 5);
//     ft_memset(b, 0, 4);
//     ft_memset(b, 5, 2);
//     ft_memset(b, 57, 1);
//     printf("%d||||%d",b[0],b[1]);
// }