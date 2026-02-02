/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: esbilen <esbilen@student.42warsaw.pl>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/29 18:42:20 by esbilen           #+#    #+#             */
/*   Updated: 2026/01/29 19:31:30 by esbilen          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	unsigned int	i;

	i = 0;
	while ((i < n) && src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}
	return (dest);
}
/*
#include <stdio.h>
char *ft_strncpy(char *dest, char *src, unsigned int n);
int main(void)
{
	
	char src[] = "Hello all";
	char dest1[15];
	char dest2[5];
	ft_strncpy(dest1, src, 15);
	printf("n = 15 dest1:%s\n", dest1);
	ft_strncpy(dest2, src, 5);
	dest2[5] = '\0';
        printf("n = 5 dest2:%s\n", dest2);
	return 0;	
}*/
