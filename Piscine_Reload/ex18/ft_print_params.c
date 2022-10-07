/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_params.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maclara- <maclara-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/24 14:40:03 by maclara-          #+#    #+#             */
/*   Updated: 2022/08/25 20:07:55 by maclara-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c);

int	main(int argc, char **argv)
{
	int	ac;
	int	i;

	if (argc > 1)
	{
		ac = 1;
		while (ac < argc)
		{
			i = 0;
			while (argv[ac][i])
			{
				ft_putchar(argv[ac][i]);
				i++;
			}
			ft_putchar('\n');
			ac++;
		}
	}
	return (0);
}
