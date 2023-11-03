/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ehafiane <ehafiane@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/01 14:48:13 by ehafiane          #+#    #+#             */
/*   Updated: 2023/11/03 13:37:01 by ehafiane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
#include <string.h>

char *ft_strchr(const char *s, int c)
{   
    while (*s)
    {
        if(*s == c)
            return((char *)s);
        s++;
    }
    if(!c)
        return((char *)s);
    return (NULL);
}