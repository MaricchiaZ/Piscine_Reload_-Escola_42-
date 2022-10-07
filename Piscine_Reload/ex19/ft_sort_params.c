/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maclara- <maclara-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/24 14:41:18 by maclara-          #+#    #+#             */
/*   Updated: 2022/08/25 21:59:25 by maclara-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

typedef struct s_var
{
	int		bs1;
	int		bs2;
	int		ac;
	int		l;
	char	*temp;
}	t_var;

void	ft_putchar(char c);

void	order(int argc, char **argv)
{
	t_var	var;

	var.bs1 = 1;
	while (var.bs1 < argc - 1)
	{
		var.bs2 = 0;
		var.ac = 1;
		while (var.bs2 < argc - 1)
		{
			var.l = 0;
			while (argv[var.ac] && argv[var.ac + 1] && \
			argv[var.ac][var.l] == argv[var.ac + 1][var.l])
				var.l++;
			if (argv[var.ac] && argv[var.ac + 1] && \
			argv[var.ac][var.l] > argv[var.ac + 1][var.l])
			{
				var.temp = argv[var.ac];
				argv[var.ac] = argv[var.ac + 1];
				argv[var.ac + 1] = var.temp;
			}
			var.ac++;
			var.bs2++;
		}
		var.bs1++;
	}
}

int	main(int argc, char **argv)
{
	int	ac;
	int	i;

	order(argc, argv);
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
