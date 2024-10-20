/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yahiaelboukili <yahiaelboukili@student.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/06 18:00:37 by yahiaelbouk       #+#    #+#             */
/*   Updated: 2024/09/16 17:04:22 by yahiaelbouk      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_memset(void *s, int c, size_t n)
{
	size_t		i;
	char		*ptr;

	i = 0;
	ptr = (char *)s;
	while (i < n)
	{
		ptr[i] = (char)c;
		i++;
	}
}
