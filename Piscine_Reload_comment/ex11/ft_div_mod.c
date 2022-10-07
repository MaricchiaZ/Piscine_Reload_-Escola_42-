/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_div_mod.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maclara- <maclara-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/12 16:57:40 by maclara-          #+#    #+#             */
/*   Updated: 2022/09/24 10:00:37 by maclara-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_div_mod(int a, int b, int *div, int *mod) // essa função deve
//realizar a divisão de a por b e armazenar em div, e em seguida deve realizar
// o módulo de a por b e armazenar em mod
{
	*div = a / b; // div recebe o valor da conta: a dividido por b
	*mod = a % b; // mod recebe o valor da conta: a módulo b
}
