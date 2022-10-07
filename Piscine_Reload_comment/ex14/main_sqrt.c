/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maclara- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/22 15:28:09 by maclara-          #+#    #+#             */
/*   Updated: 2022/07/22 15:28:10 by maclara-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_sqrt(int nb);

int	main(void)
{
	int	nb; // criamos um número

	nb = 16; // atribuimos um valor a ele
	printf("%d\n", ft_sqrt(nb)); //imprimimos o retorno da nossa função que calcula
    // a raiz quadrada do número passado
}