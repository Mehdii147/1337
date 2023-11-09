/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mehdi <mehdi@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/05 20:24:19 by mehdi             #+#    #+#             */
/*   Updated: 2023/11/08 22:04:19 by mehdi            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char *ft_strdup(const char *s1)
{
    int len;
    char *cpy;

    len = ft_strlen(s1);
    cpy = malloc(len * sizeof(char) + 1);
    if(!cpy)
        return(NULL);
    ft_memcpy(cpy,s1,len);
    cpy[len] = '\0';

    return (cpy);
}