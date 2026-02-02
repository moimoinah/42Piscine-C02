/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: esbilen <esbilen@student.42warsaw.pl>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/28 18:29:39 by esbilen           #+#    #+#             */
/*   Updated: 2026/01/29 15:47:53 by esbilen          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcpy(char *dest, char *src)
{
	int	i;

	i = 0;
	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}
/*
#include <stdio.h>
char *ft_strcpy(char *dest, char *src);
int main(void)
{
	
	char src[] = "Hello all";
	char dest[50];
	ft_strcpy(dest, src);
	printf("dest:%s\n", dest);
	return 0;


}*/
