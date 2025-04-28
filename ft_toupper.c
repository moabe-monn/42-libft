/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moabe < moabe@student.42tokyo.jp>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/28 08:31:18 by moabe             #+#    #+#             */
/*   Updated: 2025/04/28 08:31:18 by moabe            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <ctype.h>
#include <stdio.h>

int ft_toupper(int c) {
    if (c >= 97 && 122 >= c) {
        c -= ('a' - 'A');
    }
    return (c);
}


// int main(void)
// {
// 	int c;
//     int d;

// 	c = toupper('a');
// 	printf("aを大文字に変換→%c\n",c);
//     d = ft_toupper('n');
//     printf("自作関数：nを大文字に変換→%c\n",d);
// 	return 0;
// }