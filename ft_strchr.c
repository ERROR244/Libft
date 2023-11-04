/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ksohail- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/01 17:35:05 by ksohail-          #+#    #+#             */
/*   Updated: 2023/11/01 18:39:24 by ksohail-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	int	i;

	i = 0;
	while (s[i])
	{
		if (s[i] == c)
			return ((char *)&s[i]);
		i++;
	}
	return (NULL);
}/*

int main() {
    const char str[] = "This is a test string";
    const char chars_to_find[] = {'i', 's', 'z', '\0'}; // Characters to be found
    const char *result;

    printf("Testing strchr function:\n");
    printf("String: '%s'\n", str);

    for (int i = 0; chars_to_find[i] != '\0'; i++) {
        result = ft_strchr(str, chars_to_find[i]);

        if (result != NULL) {
            printf("'%c' found at position: %ld in the string.\n", chars_to_find[i], result - str);
        } else {
            printf("'%c' not found in the string.\n", chars_to_find[i]);
        }
    }

    return 0;
}

*/