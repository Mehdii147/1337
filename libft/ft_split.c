/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ehafiane <ehafiane@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/13 15:57:40 by ehafiane          #+#    #+#             */
/*   Updated: 2023/11/16 14:31:45 by ehafiane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"


int	counter(char *str, char c)
{
	int	i;
	int	count;

	i = 0;
	count = 0;
	if (!str)
		return (0);
	while (str[i])
	{
		while (str[i] == c && str[i])
			i++;
		if (str[i] != c && str[i] != '\0')
			count++;
		while (str[i] && str[i] != c)
			i++;
	}
	return (count);
}

char	*get_word(char *str, char sep)
{
	ft_substr(str, )
}

char **ft_split(char const *s, char c)
{
	char	**split;
	int		size;
	int		i;

	i = 0;
	size = counter(s, c);
	split = malloc(sizeof(char *) * size + 1);
	if (!split)
		return (NULL);
	while (s[i])
	{
		while (s[i] == c && s[i])
			i++;
		// {(str + i)	sep} return char *
		i++;
	}
	return (split);
}


// int main()
// {
// 	printf("%d",counter("hello world ",32));
// }