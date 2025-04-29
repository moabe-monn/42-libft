/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moabe <moabe@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/27 14:35:04 by moabe             #+#    #+#             */
/*   Updated: 2025/04/29 16:39:38 by moabe            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_isprint(int c)
{
	if (33 <= c && c <= 126)
	{
		return (16384);
	}
	else
	{
		return (0);
	}
}

// #include <ctype.h>
// #include <stdio.h>

// int main(void) {
// 	printf("%d\n", ft_isprint('\t'));
// 	printf("%d\n", isprint('\t'));
// 	printf("%d\n", ft_isprint('0'));
// 	printf("%d\n", isprint('0'));
// 	printf("%d\n", ft_isprint('l'));
// 	printf("%d\n", isprint('l'));
// }
