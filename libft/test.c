/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ehafiane <ehafiane@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/03 15:01:19 by ehafiane          #+#    #+#             */
/*   Updated: 2023/11/03 15:03:28 by ehafiane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdio.h>

int main()
{
    int i = 2147483647;
    i+=2;
    printf("%d\n", i);
    i = -2147483648;
    i--;
    printf("%d\n", i);
}