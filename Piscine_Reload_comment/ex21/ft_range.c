/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maclara- <maclara-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/28 14:33:04 by maclara-          #+#    #+#             */
/*   Updated: 2022/09/24 16:31:06 by maclara-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_range(int min, int max) // esta função cria um array de inteiros e preenche com 
// os números do min ao máx, o min deve ser o primeiro elemento do array e 
// o max não deve ser incluído, de modo que o último elemento do array deve ser
// max -1
{
	int	tam; // criamos um inteiro auxiliar para medirmos o número de elementos
	// que o nosso array deve ter
	int	*tab; // criamos um ponteiro que receberá esse array
	int	i; // criamos um índice para percorrer o array

	i = 0; // nosso índice começa em 0
	tam = 0; // nosso tamamho se inicia em 0
	if (min >= max) //se o valor mínimo for maior ou igual ao valor máximo, é impossível 
	// montar esse array, então
		return ((void *)0); // retornamos um ponteiro vazio
	if (min < 0 && max < 0) // se tanto o mínimo quanto o máximo estiverem abaixo do 0
		tam = (max - min); // tamanho recebe o máx menos o min
	else if (min < 0 && max >= 0) // se o mínimo estiver abaixo do 0 e o máximo for zero ou mais
		tam = max + (min * -1); // tamanho recebe o valor máximo mais o valor mínimo 
		//transformado em positivo
	else if (min >= 0 && max >= 0) // ou se máx e min forem zero ou positivo
		tam = max - min; // tamanho recebe o máximo menos o mínimo
	// esse tamanho é usado para reservarmos a memória que usaremos no nosso array
	tab = (int *) malloc (sizeof (int) * (tam + 1)); // o ponteiro recebe uma reserva de memória
	// para elementos do tipo int com um elemento a mais, o byte nulo
	while (min < max) //enquanto mínimo for menor que o máximo, como o máximo não entra, 
	// usamos 'min < max' e não 'min <= max'
	{
		tab[i] = min; // nossa tabela/array na posição i recebe o valor do min
		min++; // min ganha uma unidade
		i++; // a posição do nosso array ganha uma unidade 
	}
	return (tab); // retornamos nosso array, mallocado e preenchido :) e super lindão
}
