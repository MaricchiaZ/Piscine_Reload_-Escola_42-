/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maclara- <maclara-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/31 02:15:27 by maclara-          #+#    #+#             */
/*   Updated: 2022/08/31 02:16:01 by maclara-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	d;
	unsigned int	s;

	d = 0;
	while (dest[d] != '\0')
		d++;
	s = 0;
	while (src[s] != '\0'&& s <= size)
	{
		s++;
	}
	if (size <= d)
		return (size + s);
	while (src[d] != '\0' && (d + s) < (size -1))
	{
		dest[d + s] = src[s];
		s++;
	}
	dest[d] = '\0';
	return (d + s);
}
