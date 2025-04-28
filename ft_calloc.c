/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moabe < moabe@student.42tokyo.jp>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/29 07:20:21 by moabe             #+#    #+#             */
/*   Updated: 2025/04/29 07:20:21 by moabe            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

void *ft_calloc(size_t nmemb, size_t size) {
    void    *p;
    size_t  mul;

    mul = nmemb * size;
    p = malloc(mul);
    if (!p) {
        return (NULL);
    } 
    ft_bzero(p,mul);
    return(p);
}