/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ibittar <ibittar@student.42berlin.de>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/21 15:23:50 by ibittar           #+#    #+#             */
/*   Updated: 2024/03/21 15:42:58 by ibittar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*#include <stdio.h>*/

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (*str)
	{
		i++;
		str++;
	}
	return (i);
}

/*int	main(void)
{
	char	test[] = "How many characters am I holding up?";
	int	result;

	printf("String to be counted: %s\n", test);
	result = ft_strlen(test);
	printf("From here I can see %d characters\n", result);
	return (0);
}*/
