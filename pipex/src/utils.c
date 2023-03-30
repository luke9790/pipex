/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmasetti <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/18 11:11:08 by lmasetti          #+#    #+#             */
/*   Updated: 2023/01/18 11:11:12 by lmasetti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/pipex.h"

void	errorarg(void)
{
	write(2, "Error arg: ./pipex [file1] [cmd1] [cmd2] [file2]\n", 45);
	exit(EXIT_FAILURE);
}

void	errorgen(char *m)
{
	if (errno == 0)
		write(2, "Error\n", 6);
	else
		perror(m);
	exit(EXIT_FAILURE);
}

void	cmd_not_found(char **cmd)
{
	write(2, cmd[0], ft_strlen(cmd[0]));
	write(2, ": command not found\n", 20);
	free_split(cmd);
	exit(EXIT_FAILURE);
}

void	free_split(char **args)
{
	int	size;
	int	i;

	i = 0;
	size = 0;
	while (args[size])
		size++;
	while (i < size)
		free(args[i++]);
	free(args);
}
