/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_count_if.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maclara- <maclara-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/23 22:53:24 by maclara-          #+#    #+#             */
/*   Updated: 2022/09/24 18:47:30 by maclara-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//Crie uma função ft_count_if que retornará o número de elementos do que retornam 1,
// quando passodos pela função f

int	ft_count_if(char **tab, int (*f) (char*)) // essa função aplica a função f
// sobre os elementos da matriz, e conta quantas vezes a aplicação da função f
// sobre os elementos geram um retorno 1
{
	int	i; // criamos um índice que contará os retornos 1
	int	j; // criamos um segundo índice que percorrerá os elementos da matriz

	i = 0; // atribuimos o valor 0 para esse índice
	j = 0; // atribuimos o valor 0 para esse índice também
	while (tab[j]) //enquanto a matriz na posição j existe, ou seja, não pe nula
	{
		if (f(tab[j]) == 1) // se a aplicação da função f sobre esse elemento tab[j]
		// for idêntico a um
			i++; // adicionamos uma unidade em nosso índice de ocorrências
		j++; // avançamos para o próximo elemento
	} 
	// ao finalizarmos a conferência
	return (i); // retornamos nosso índice i
}
