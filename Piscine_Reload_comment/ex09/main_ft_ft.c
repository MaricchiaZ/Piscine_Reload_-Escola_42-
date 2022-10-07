/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mclara-d <mclara-d@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/11 15:01:57 by mclara-d          #+#    #+#             */
/*   Updated: 2022/02/11 15:58:42 by mclara-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_ft(int *nbr);

int	main(void)
{
    int a;
	int *nbr;

	a = 10;
	nbr = &a;

	printf(" %d\n", a); //aqui o a vale 10
	printf(" %d\n", *(&a));//aqui o a vale 10
	ft_ft(nbr); //aqui a função muda o valor de a para 42
	printf(" %d\n", a); // então aqui o a vale 42
} 