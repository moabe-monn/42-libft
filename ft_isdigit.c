/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moabe <moabe@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/27 13:04:21 by moabe             #+#    #+#             */
/*   Updated: 2025/04/29 16:39:18 by moabe            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_isdigit(int c)
{
	if (48 <= c && c <= 57)
	{
		return (2048);
	}
	else
	{
		return (0);
	}
}

// #include <ctype.h>
// #include <stdio.h>

// int main(void) {
// 	printf("%d\n", ft_isdigit('8'));
// 	printf("%d\n", isdigit('8'));
// 	printf("%d\n", isdigit('0'));
// 	printf("%d\n", ft_isdigit('0'));
// 	printf("%d\n", isdigit('p'));
// 	printf("%d\n", ft_isdigit('p'));

// }
