/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ehafiane <ehafiane@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/03 14:53:35 by ehafiane          #+#    #+#             */
/*   Updated: 2023/11/03 22:25:30 by ehafiane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void *ft_memcpy(void *restrict dst, const void *restrict src, size_t n)
{
    size_t i = 0;
    if(!src && !dst)
        return (0);
    char *str = (char *)dst;
    char *ptsrc = (char *)src;
    while(i < n)
    {
        str[i] = ptsrc[i];
        i++;
    }
    return (dst);
}