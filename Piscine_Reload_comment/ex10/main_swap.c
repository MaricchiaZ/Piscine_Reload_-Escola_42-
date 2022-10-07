/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mclara-d <mclara-d@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/14 16:31:42 by mclara-d          #+#    #+#             */
/*   Updated: 2022/02/14 17:32:30 by mclara-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_swap(int a, int b);

int	main(void)
{
	int a;
	int b;
	
	a = 10; // a vale 10
	b = 20; // b vale 20
	printf("Antes da troca a: %d	b: %d\n", a , b);
	ft_swap(&a, &b); // aqui a nossa função muda/inverte o valor das variáveis
	printf("Depois da troca a: %d	b: %d\n", a , b);
}