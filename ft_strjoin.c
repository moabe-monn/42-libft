/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moabe <moabe@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/15 10:30:31 by moabe             #+#    #+#             */
/*   Updated: 2025/05/01 13:53:43 by moabe            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	str_len(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

size_t	calculate_len(int size, char **strs, char *sep)
{
	size_t	sep_len;
	size_t	len;
	int		i;

	sep_len = str_len(sep);
	i = 0;
	len = 0;
	while (i < size)
	{
		len += str_len(strs[i]);
		if (i < size - 1)
			len += sep_len;
		i++;
	}
	return (len);
}

char	*copy_str(int size, char *str, char *sep, char **strs)
{
	int	i;
	int	j;
	int	k;

	i = 0;
	j = 0;
	while (j < size)
	{
		k = 0;
		while (strs[j][k] != '\0')
		{
			str[i++] = strs[j][k++];
		}
		if (j < size - 1)
		{
			k = 0;
			while (sep[k] != '\0')
			{
				str[i++] = sep[k++];
			}
		}
		j++;
	}
	return (str);
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	char	*str;
	int		total_len;

	if (size == 0)
	{
		str = (char *)malloc(sizeof(char));
		str[0] = '\0';
		return (str);
	}
	total_len = calculate_len(size, strs, sep);
	str = (char *)malloc(sizeof(char) * (total_len + 1));
	if (!str)
		return (NULL);
	copy_str(size, str, sep, strs);
	str[total_len] = '\0';
	return (str);
}

// int main()
// {
// 	char *words[] = {"Hello", "World", "42", "Tokyo"};
// 	char *sep = ", ";
// 	char *result = ft_strjoin(4, words, sep);

// 	if (result)
// 	{
// 		printf("Result: \"%s\"\n", result);
// 		free(result);
// 	}

// 	// サイズが0の場合のテスト
// 	char *empty_result = ft_strjoin(0, words, sep);
// 	if (empty_result)
// 	{
// 		printf("Empty Result: \"%s\"\n", empty_result);
// 		free(empty_result);
// 	}

// 	return 0;
// }
