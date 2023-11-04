/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ehafiane <ehafiane@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/03 22:21:13 by ehafiane          #+#    #+#             */
/*   Updated: 2023/11/03 22:42:48 by ehafiane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t ft_strlcpy(char * restrict dst, const char * restrict src, size_t dstsize)
{
    unsigned int len;
    unsigned int i;
    
    len = 0;
    while(src[len])
        len++;
    if(dstsize == 0)
        return (len);
    i = 0;
    while(src[i] && i < (dstsize - 1))
    {
        dst[i] = src[i];
        i++;
    } 
    dst[i] = '\0';
    return(len);
}
