/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yahiaelboukili <yahiaelboukili@student.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/06 18:00:47 by yahiaelbouk       #+#    #+#             */
/*   Updated: 2024/09/17 20:21:07 by yahiaelbouk      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_tolower(int s)
{
		if (s >= 'A' && s <= 'Z')
			s = s + 32;
		return s;
}
/* int main(int argc, char *argv[])
{
	if (argc == 2)
	{
		to_lower(argv[1]);;
	}
	else
		write(1, "\n", 1);
}*/
