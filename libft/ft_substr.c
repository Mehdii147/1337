/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mehdi <mehdi@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/07 20:00:18 by mehdi             #+#    #+#             */
/*   Updated: 2023/11/08 22:34:14 by mehdi            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char *ft_substr(char const *s, unsigned int start,size_t len)
{
    char *sub;
    size_t i;

    i = 0;
    if(!s)
        return(NULL);
    if(start >= ft_strlen(s))
        return(ft_strdup(""));
    if(len > ft_strlen(s))
        len = ft_strlen(s);
    sub = malloc(len + 1);
    if(!sub)
        return (NULL);
    while(s[start] && i < len)
        sub[i++] = s[start++];
    return (sub[i] = '\0');
}

// int main()
// {
//     printf("%s",ft_substr("hola", 3, 1));
// }