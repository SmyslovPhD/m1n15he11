/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kbraum <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/11 19:02:14 by kbraum            #+#    #+#             */
/*   Updated: 2021/05/11 19:25:07 by kbraum           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft/libft.h"
#include <stdio.h>

int main(void)
{
	const char	name[] = "$echomod >";
	char		*line;

	write(1, name, sizeof(name));
	while (get_next_line(0, &line))
	{
		printf("%s\n", line);
		write(1, name, sizeof(name));
	}
	return (0);
}
