/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uppercas.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: esbilen <esbilen@student.42warsaw.pl>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/31 13:42:05 by esbilen           #+#    #+#             */
/*   Updated: 2026/01/31 13:49:17 by esbilen          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_uppercase(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] < 'A' || str[i] > 'Z')
			return (0);
		i++;
	}
	return (1);
}
/*
#include <stdio.h>
int main()
{
	printf("%d", ft_str_is_uppercase(""));
	printf("%d", ft_str_is_uppercase("ASH"));
	printf("%d", ft_str_is_uppercase("545hfg&dg"));
	printf("%d", ft_str_is_uppercase("567"));

}*/
