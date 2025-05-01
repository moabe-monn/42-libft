/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moabe <moabe@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/29 16:49:32 by moabe             #+#    #+#             */
/*   Updated: 2025/04/29 16:49:32 by moabe            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	check_contain(char s, char const *set)
{
	int		j;

	j = 0;
	while (set[j])
	{
		if (s == set[j])
			return (0);
		j++;
	}
	return (1);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*p;
	int		i;
	int		j;

	i = 0;
	j = 0;
	p = (char *)ft_calloc(ft_strlen((char *)s1) + 1, sizeof(char));
	if (!s1 || !set)
		return (NULL);
	while (s1[i])
	{
		if (check_contain(s1[i], set) == 1)
		{
			p[j] = s1[i];
			j++;
		}
		i++;
	}
	return (p);
}


// int main(void)
// {
//     char *result;

//     // テスト1: 前後にトリム対象文字がある
//     result = ft_strtrim("   Hello, World!   ", " ");
//     if (result)
//     {
//         printf("Test 1: '%s'\n", result);
//         free(result);
//     }

//     // テスト2: 前後に複数の異なるトリム対象文字がある
//     result = ft_strtrim("xyzHello, World!zyx", "xyz");
//     if (result)
//     {
//         printf("Test 2: '%s'\n", result);
//         free(result);
//     }

//     // テスト3: トリム対象が含まれていない
//     result = ft_strtrim("Hello", " ");
//     if (result)
//     {
//         printf("Test 3: '%s'\n", result);
//         free(result);
//     }

//     // テスト4: すべてトリム対象で構成されている
//     result = ft_strtrim("xxx", "x");
//     if (result)
//     {
//         printf("Test 4: '%s'\n", result);  // 期待される出力は ""
//         free(result);
//     }

//     // テスト5: 空文字列を渡す
//     result = ft_strtrim("", " ");
//     if (result)
//     {
//         printf("Test 5: '%s'\n", result);  // 出力は ""
//         free(result);
//     }

//     // テスト6: トリム対象が空文字列
//     result = ft_strtrim("No trimming", "");
//     if (result)
//     {
//         printf("Test 6: '%s'\n", result);  // 出力はそのまま
//         free(result);
//     }

//     return 0;
// }
