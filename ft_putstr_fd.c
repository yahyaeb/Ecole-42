/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yahiaelboukili <yahiaelboukili@student.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/19 19:25:30 by yahiaelbouk       #+#    #+#             */
/*   Updated: 2024/09/21 16:40:36 by yahiaelbouk      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void ft_putstr_fd(char *s, int fd)
{
    int i;
    i = 0;
    
    if(!s || fd < 0)
        return;
    while(s[i])
    {
        write(fd, &s[i], 1);
        i++;
    }
}