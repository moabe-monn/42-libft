/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moabe <moabe@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/27 13:21:41 by moabe             #+#    #+#             */
/*   Updated: 2025/04/27 17:02:29 by moabe            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_isascii(int c)
{
	if (0 <= c && c <= 127)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}

// #include <ctype.h>
// #include <stdio.h>

// int	main(void)
// {
// 	printf("%d\n", ft_isascii('0'));
// 	printf("%d\n", isascii('0'));
// 	printf("%d\n", ft_isascii('o'));
// 	printf("%d\n", isascii('o'));
// 	// printf("%d\n", ft_isascii('ｱ'));
// 	// printf("%d\n", isascii('ｱ'));
// }
