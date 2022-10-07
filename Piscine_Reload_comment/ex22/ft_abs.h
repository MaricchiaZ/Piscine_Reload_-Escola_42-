/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_abs.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maclara- <maclara-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/23 21:54:19 by maclara-          #+#    #+#             */
/*   Updated: 2022/09/24 16:49:48 by maclara-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// As diretrizes da tarefa indicam que devemos:
// Criar uma macro ABS que substitui seu argumento por seu valor absoluto :
// #define ABS(Value)

#ifndef FT_ABS_H // se a biblioteca ft_abs.h não existir, ou seja ainda não estiver definida
# define FT_ABS_H // defina a biblioteca ft_abs.h

# define ABS(n)((n < 0) ? -n : n) //definimos uma macro que usa um ternário
// O operador condicional (ternário) é usado para a tomada de decisões no lugar
// das instruções condicionais de if e else mais extensas.

// ABS recebe um n: ABS(n)
// realizamos então o que tem no parênteses: ((n < 0) ? -n : n)
// pergunta-se se o n é menor que o zero: (n < 0) ?
// se sim, retornamos n com valor negativo: -n
// se não, apenas retornamos n: n

// Resumindo, ABS recebe um número, pode ser um inteiro, um float ou qualquer tipo de
// número. Conferimos se esse número é menor que zero. Se sim, retornamos apenas a
// a parte inteira (ou o valor absoluto) negativo. Se não, voltamos o valor inteiro ou
// valor absoluto positivo.

#endif // finalizamos aqui a nossa biblioteca