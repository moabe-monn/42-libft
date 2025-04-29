/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moabe <moabe@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/27 12:26:31 by moabe             #+#    #+#             */
/*   Updated: 2025/04/27 13:03:07 by moabe            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int ft_isalpha(int c) {
	if ((65 <= c && c <= 90) || (97 <= c && c <= 122)) {
		return 1024;
	} else {
		return 0;
	}
}

// #include <ctype.h>
// #include <stdio.h>

// int main(void) {
// 	printf("%d\n", ft_isalpha('l'));
// 	printf("%d\n", isalpha('l'));
// 	printf("%d\n", isalpha('C'));
// 	printf("%d\n", ft_isalpha('C'));
// 	printf("%d\n", isalpha('5'));
// 	printf("%d\n", ft_isalpha('5'));

// }
