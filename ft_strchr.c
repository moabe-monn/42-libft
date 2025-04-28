/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moabe < moabe@student.42tokyo.jp>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/28 08:37:08 by moabe             #+#    #+#             */
/*   Updated: 2025/04/28 08:37:08 by moabe            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdio.h>

char *ft_strchr(const char *s, int c) {
    while (*s) {
        if (*s == c) {
            return ((char *)s);
        }
        s++;
    }
    if (c == '\0') {
        return ((char *)s);
    }
    return (NULL);
}


// int main(void)
// {
// 	char test[20] = "abcdefghijk";
// 	char *p;
//     char *q;
//     char *r;
//     char *s;

// 	p = strchr(test,'g');
// 	printf("検索文字が見つかった場所から表示→%s\n",p);
//     q = ft_strchr(test,'g');
//     printf("検索文字が見つかった場所から表示→%s\n",q);
//     r = strchr(test,'t');
// 	printf("検索文字が見つかった場所から表示→%s\n",r);
//     s = ft_strchr(test,'t');
//     printf("検索文字が見つかった場所から表示→%s\n",s);
// 	return 0;
// }