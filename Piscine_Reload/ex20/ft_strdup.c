/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maclara- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/27 18:34:54 by maclara-          #+#    #+#             */
/*   Updated: 2022/07/27 18:34:58 by maclara-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

char	*ft_strdup(char *src)
{
	int		i;
	char	*cpy;

	i = 0;
	if (!src)
		return ((void *)0);
	cpy = (char *) malloc (sizeof (char) * ft_strlen(src + 1));
	while (src[i])
	{
		cpy[i] = src[i];
		i++;
	}	
	cpy[i] = '\0';
	return (cpy);
}
