/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maclara- <maclara-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/27 18:34:54 by maclara-          #+#    #+#             */
/*   Updated: 2022/09/24 15:39:07 by maclara-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

// ESSA FUNÇÃO É AUXILIAR ---> comece lendo pela outra função
int	ft_strlen(char *str) //essa função mede o tamanho de uma string
{
	int	i; // criamos um inteiro que será um índice que percorrerá os caracteres
	// da string

	i = 0; // atribuimos a ele o valor 0
	while (str[i]) // enquanto a strinh na posição i existir, isto é, não for nula ('\0')
		i++; //i ganha uma unidade, e avançamos assim para o próximo caracter da string
	//
	return (i); //retornamos o tamanho encontrado, de acordo com as casas que percorremos
}

// ESSA FUNÇÃO É A PRINCIPAL ---> comece lendo por aqui
char	*ft_strdup(char *src) // essa função duplica uma string
{
	int		i; // criamos um índice que percorrerá as strings
	char	*cpy; //criamos um ponteiro que receberá a cópia que iremos criar

	i = 0; // nosso índice é inicializado em 0
	if (!src) // aqui conferimos se a string passada existe, isto é, se esse ponteiro não é nulo
		return ((void *)0); // se for nulo, retornamos um ponteiro nulo também :)
	cpy = (char *) malloc (sizeof (char) * ft_strlen(src) + 1); 
	// o nosso ponteiro copy (cpy) recebe a uma alocação de memória para char no tamanho da string
	// src recebida (que é medida pela função ft_strlen(src) + 1 do byte nulo)
	while (src[i]) // enquanto a string src na posição i existir e não for nula
	{
		cpy[i] = src[i]; //a string cpy na posição i recebe o conteúdo da string src na posição i
		i++; // i ganha uma unidade, e assim avançamos para o próximo caracter
	}	
	cpy[i] = '\0'; // a posição final da nossa string cpy recebe o byte nulo
	return (cpy); // retornamos a string cpy 
}
