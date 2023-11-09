/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ehafiane <ehafiane@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/03 14:53:35 by ehafiane          #+#    #+#             */
/*   Updated: 2023/11/09 16:50:34 by ehafiane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *restrict dst, const void *restrict src, size_t n)
{
	char	*str; 
	char	*ptsrc;
	size_t	i;

	ptsrc = (char *)src;
	str = (char *)dst;
	i = 0;
	if (!src && !dst)
		return (0);
	while (i < n)
	{
		str[i] = ptsrc[i];
		i++;
	}
	return (dst);
}
