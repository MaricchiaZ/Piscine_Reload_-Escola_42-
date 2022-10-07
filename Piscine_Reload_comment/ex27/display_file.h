/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   display_file.h                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maclara- <maclara-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/23 23:07:08 by maclara-          #+#    #+#             */
/*   Updated: 2022/09/24 23:01:11 by maclara-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DISPLAY_FILE_H // e a biblioteca display_file.h não existir, isto é, não está definida
# define DISPLAY_FILE_H // define-se aqui a bliblioteca display_file.h

// esta biblioteca conta com: (tudo que estiver abaixo)
# include	<fcntl.h> // inclui a biblioteca da função open
# include	<unistd.h> // inclui a biblioteca das funções close, read e write

# define BUFFER_SIZE 1 // definimos nosso "bloco de leitura" como 1 byte
#endif // e finalizamos a biblioteca criada