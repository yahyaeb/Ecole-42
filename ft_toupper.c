/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yahiaelboukili <yahiaelboukili@student.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/06 18:00:51 by yahiaelbouk       #+#    #+#             */
/*   Updated: 2024/09/17 20:18:16 by yahiaelbouk      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_toupper(int s)
{
		if (s >= 'a' && s <= 'z')
			s = s - 32;
		return s;
}
/* int main(int argc, char *argv[])
{
	if (argc == 2)
	{
		to_upper(argv[1]);;
	}
	else
		write(1, "\n", 1);
}*/
