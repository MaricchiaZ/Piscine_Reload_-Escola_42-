/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maclara- <maclara-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/12 16:57:40 by maclara-          #+#    #+#             */
/*   Updated: 2022/09/24 10:00:37 by maclara-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_swap(int *a, int *b) // essa função pega o conteúdo de a e passa para
// b e o conteúdo de b, e passa para a
{
	int	troca; // criamos uma variável auxiliar

	troca = *a; // nossa variável auxiliar recebe o conteúdo de a, então o conteúdo
	// de a fica armazenado na variável troca
	*a = *b; // a recebe o conteúdo de b
	*b = troca; // agora b recebe o conteúdo de a que esta armazenado na variável 
	//auxiliar troca;
}
