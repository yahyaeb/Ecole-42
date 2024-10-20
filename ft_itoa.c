/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yahiaelboukili <yahiaelboukili@student.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/22 12:26:15 by yahiaelbouk       #+#    #+#             */
/*   Updated: 2024/10/13 18:58:12 by yahiaelbouk      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <limits.h>
#include <stdio.h>
#include <stdlib.h>
#include "libft.h"

char	*ft_strnew(size_t size)
{
	char	*str;

	if (!(str = (char*)malloc(sizeof(*str) * (size + 1))))
		return (NULL);
	ft_bzero(str, size + 1);
	return (str);
}

static int	count_size(int n)
{
	int i;

	i = 0;
	if (n < 0)
		n *= -1;
	while (n != 0)
	{
		n /= 10;
		i++;
	}
	return (i);
}

char* ft_itoa(int num)
{
	char		*dst;
	int			count;
	int			i;
	long int	n;

	n = num;
	count = count_size(n);
	i = 0;
	if (n < 0 || count == 0)
		count++;
	if (!(dst = ft_strnew(count)))
		return (NULL);
	if (n < 0)
	{
		n *= -1;
		dst[0] = '-';
		i++;
	}
	while (count > i)
	{
		count--;
		dst[count] = (n % 10) + '0';
		n /= 10;
	}
	return (dst);
}
/*int count(long nb)
{
    int i;
    i = 0;
    if (nb == 0)
        return 1;
    if(nb < 0)
    {
        nb = -nb;
        i++;
    }
    while(nb != 0)
    {
      nb = nb / 10;
      i++;
    }
    return i;
}

char* ft_itoa(long n)
{
    char * final;
    long size;
    long num = n;
    int i = 0;
    size = count(n);

 if(n < 0)
    {
        num = -n;
    }
    
    final = (char *)malloc((size + 1) * sizeof(char));
    if(!final)
            return NULL;  
            
    final[size] = '\0';
        if (n == 0)
    {
        final[0] = '0';
        return final;
    }
    
    while (size > i)
      {
        size--;
        final[size] = (num % 10) + '0';
        num = num / 10;
      }
        if (n < 0)
    {
        n *= -1;
        final[0] = '-';
        i++;
    }
      return final;
} */
/* int main (void)
{
    long s = -9876543210;
    char * results = ft_itoa(s);
    printf("%s\n", results);
    free(results);
} */