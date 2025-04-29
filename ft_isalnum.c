/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moabe <moabe@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/27 13:11:19 by moabe             #+#    #+#             */
/*   Updated: 2025/04/29 16:38:06 by moabe            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_isalnum(int c)
{
	if ((48 <= c && c <= 57) || (65 <= c && c <= 90) || (97 <= c && c <= 122))
		return (8);
	else
		return (0);
}

// #include <ctype.h>
// #include <stdio.h>

// int main(void) {
// 	printf("%d\n", ft_isalnum('!'));
// 	printf("%d\n", isalnum('!'));
// 	printf("%d\n", ft_isalnum('0'));
// 	printf("%d\n", isalnum('0'));
// 	printf("%d\n", ft_isalnum('p'));
// 	printf("%d\n", isalnum('p'));
// }
