/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ehafiane <ehafiane@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/01 14:48:20 by ehafiane          #+#    #+#             */
/*   Updated: 2023/11/03 13:25:57 by ehafiane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char *ft_strrchr(const char *s, int c)
{
    int len;
    const char *ret;
    len = ft_strlen(s);
    ret = (s + len);
    while (len >= 0)
    {
        if(*ret == c)
            return ((char *)ret);
        ret--;
        len--;
    }
    if(!c)
        return((char *)s);
    return (0);
}

int main()
{
    
}