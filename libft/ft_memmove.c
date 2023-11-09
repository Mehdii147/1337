/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mehdi <mehdi@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/05 20:24:37 by mehdi             #+#    #+#             */
/*   Updated: 2023/11/07 02:59:02 by mehdi            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

void *ft_memmove(void *dst, const void *src, size_t len)
{
    char *s;
    char *d;
    size_t i;

    s = (char *)src;
    d = (char *)dst;
    i = 0;

    if(!s && !d)
        return (NULL);
    
    if(d > s)
        while(len-- > 0)
                d[len] = s[len];
    else 
        while(i < len)
        {
            d[i] = s[i];
            i++;
        }
    return (dst);
}
// int main()
// {
// //     char *syt = "hello world";
// //     const char brh[] = "hello world";
//     //int bool float char : 
//     // printf("%lu\n", sizeof(syt));
//     // printf("%lu\n", sizeof(int *));
//     // printf("%lu\n", sizeof(brh));
//     // ft_strlcpy(syt, brh, ft_strlen(brh));
//     char str[] = "1337 khouribga";
//     char dest[] = "1337 kho";
//     ft_memmove(dest, str, 8);
//     puts(dest);
//     // printf("%d\n", );
// }
