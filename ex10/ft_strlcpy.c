/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: esbilen <esbilen@student.42warsaw.pl>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/02 16:17:07 by esbilen           #+#    #+#             */
/*   Updated: 2026/02/02 16:32:11 by esbilen          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	unsigned int	i;
	unsigned int	len;

	i = 0;
	len = 0;
	while (src[i] != '\0' && (i + 1) < size)
	{
		dest[i] = src[i];
		i++;
	}
	if (size > 0)
		dest[i] = '\0';
	while (src[len] != '\0')
		len++;
	return (len);
}
/*
#include <stdio.h>
int main()
{
	char src[] = "Hello baby";
	char dest[50];
	unsigned int result;
	result = ft_strlcpy(dest, src, sizeof(dest));
	printf("copied: %s\n", dest);
	printf("len: %u\n", result);
	printf("sizeof: %lu\n", sizeof(dest));
	return (0);

}*/
