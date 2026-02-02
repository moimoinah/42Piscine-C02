/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: esbilen <esbilen@student.42warsaw.pl>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/31 11:35:41 by esbilen           #+#    #+#             */
/*   Updated: 2026/01/31 13:27:39 by esbilen          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_numeric(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] < '0' || str[i] > '9')
			return (0);
		i++;
	}
	return (1);
}
/*
#include <stdio.h>
int main(void)
{
	printf("%d", ft_str_is_numeric("78"));
	printf("%d", ft_str_is_numeric("31esila"));
	printf("%d", ft_str_is_numeric("esila"));
	printf("%d", ft_str_is_numeric(""));
}*/
