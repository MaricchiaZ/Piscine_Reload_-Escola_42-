/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maclara- <maclara-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/28 14:33:04 by maclara-          #+#    #+#             */
/*   Updated: 2022/08/26 17:35:33 by maclara-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int	tam;
	int	*tab;
	int	i;

	i = 0;
	tam = 0;
	if (min >= max)
		return ((void *)0);
	if (min < 0 && max < 0)
		tam = (max - min);
	else if (min < 0 && max >= 0)
		tam = max + (min * -1);
	else if (min >= 0 && max >= 0)
		tam = max - min;
	tab = (int *) malloc (sizeof (int) * (tam + 1));
	while (min < max)
	{
		tab[i] = min;
		min++;
		i++;
	}
	return (tab);
}
