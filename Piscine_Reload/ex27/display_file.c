/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   display_file.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maclara- <maclara-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/23 23:07:08 by maclara-          #+#    #+#             */
/*   Updated: 2022/08/25 21:10:12 by maclara-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "display_file.h"

void	ft_putstr(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		write(1, &str[i], 1);
		i++;
	}
}

void	check_error(int argc)
{
	if (argc < 2)
		ft_putstr("File name missing.\n");
	if (argc > 2)
		ft_putstr("Too many arguments.\n");
}

int	main(int argc, char **argv)
{
	int		fd;
	int		read_byte;
	char	buffer[BUFFER_SIZE + 1];

	if (argc != 2)
	{
		check_error(argc);
		return (0);
	}
	fd = open(argv[1], O_RDONLY);
	if (fd < 0)
		return (1);
	read_byte = read(fd, buffer, BUFFER_SIZE);
	while (read_byte != 0)
	{
		buffer[read_byte] = '\0';
		ft_putstr(buffer);
		read_byte = read(fd, buffer, BUFFER_SIZE);
	}
	close(fd);
	return (0);
}
