/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yahiaelboukili <yahiaelboukili@student.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/21 16:43:58 by yahiaelbouk       #+#    #+#             */
/*   Updated: 2024/09/22 11:15:06 by yahiaelbouk      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include "libft.h"

void	ft_putnbr_fd(int nb, int fd)
{
    
    if (fd < 0)
        return;
    if (nb == -2147483648)
	{
		write(fd, "-2147483648", 11);
		return ;
	}
    if(nb < 0)
        {
            nb = -nb;
        }
    if (nb >= 10)
        {
            ft_putnbr_fd(nb / 10 , fd);
            ft_putnbr_fd(nb % 10, fd);   
        }
        else
        {
            char c = nb + '0';
            write(fd, &c, 1);           
        }
}
/*int main (void)
{
    ft_putnbr_fd(12, 1);
}*/