/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kbraum <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/11 19:02:14 by kbraum            #+#    #+#             */
/*   Updated: 2021/05/12 19:25:28 by kbraum           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft/libft.h"
#include <stdlib.h>
#include <stdio.h>

int main(void)
{
	const char	name[] = "minishell>";
	char		*line;

	write(1, name, sizeof(name));
	while (get_next_line(0, &line))
	{
		system(line);
		write(1, name, sizeof(name));
	}
	return (0);
}
