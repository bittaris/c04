/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ibittar <ibittar@student.42berlin.de>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/21 15:47:57 by ibittar           #+#    #+#             */
/*   Updated: 2024/03/24 11:55:32 by ibittar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putstr(char *str)
{
	if (*str != '\0')
	{
		while (*str)
		{
			write(1, str, 1);
			str++;
		}
	}
}

/*int	main(void)
{
	char	test[] = "Well, will you look at that!";

	ft_putstr(test);
	write(1, "\n", 1);
	return (0);
}*/
