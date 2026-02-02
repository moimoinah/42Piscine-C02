/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: esbilen <esbilen@student.42warsaw.pl>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/29 19:33:45 by esbilen           #+#    #+#             */
/*   Updated: 2026/01/31 13:24:02 by esbilen          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_alpha(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if ((str[i] < 'A')
			|| (str[i] > 'Z' && str[i] < 'a')
			|| (str[i] > 'z'))
			return (0);
		i++;
	}
	return (1);
}
/*
#include <stdio.h>
int main(void)
{	
	printf("%d", ft_str_is_alpha("hello"));
	printf("%d", ft_str_is_alpha("hI42"));
	printf("%d", ft_str_is_alpha(""));
	printf("%d", ft_str_is_alpha("ABc-DEF"));
}*/
