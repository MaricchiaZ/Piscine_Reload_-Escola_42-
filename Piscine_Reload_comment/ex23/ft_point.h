/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_point.h                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maclara- <maclara-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/23 22:03:46 by maclara-          #+#    #+#             */
/*   Updated: 2022/09/24 17:48:43 by maclara-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_POINT_H // se a biblioteca ft_point.h não existir, isto é, não está definida
# define FT_POINT_H // define-se ft_point.h
// dentro dela terá tudo o que vier abaixo

typedef struct s_point // aqui criamos um tipo de struct
{
	int	x; // com essas variáveis dentro, um int x
	int	y; // e um int y
}	t_point; // damos para a nossa struct o nome de t_point

#endif // aqui finalizamos o conteúdo da bibluiteca criada ft_point.h