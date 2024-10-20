/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yahiaelboukili <yahiaelboukili@student.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/07 20:19:10 by yahiaelbouk       #+#    #+#             */
/*   Updated: 2024/09/16 15:09:31 by yahiaelbouk      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

char	*ft_strrchr(const char *str, int c)
{
	const char	*last;
	char		t;

	t = (char)c;
	last = NULL;
	while (*str)
	{
		if (*str == t)
			last = str;
		str++;
	}
	if (t == '\0')
		return ((char *)str);
	return ((char *)last);
}
/* int main() {
const char *str = "Salam Yahya cava! w test w asdkasdkna";
char ch = 'W';
    char *result = ft_strrchr(str, ch);
    if (result != NULL) {
        printf("Character '%c' found at position: %ld\n", ch, result - str);
    } else {
        printf("Character '%c' not found.\n", ch);
    }
    return 0;*/
