/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ksohail- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/01 12:11:30 by ksohail-          #+#    #+#             */
/*   Updated: 2023/11/11 17:44:50 by ksohail-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	needle_len;
	size_t	i;

	i = 0;
	needle_len = ft_strlen(little);
	if (needle_len == 0)
		return ((char *)big);
	if (big[0] == '\0' || big == NULL)
		return (NULL);
	if (len < needle_len)
		return (NULL);
	while (i < len)
	{
		if (*big == '\0')
			return (NULL);
		if (*big == *little && ft_strncmp(big, little, needle_len) == 0
			&& (i + 1 < len || len == 1))
			return ((char *)big);
		big++;
		i++;
	}
	return (NULL);
}
#include <stdio.h>
#include <string.h>

int main() {
    const char *haystack = "Hello, World!";
    const char *needle1 = "World";
    const char *needle2 = "Universe";
    size_t max_length = 10;

    // Test case 1: Find "World" in "Hello, World!"
    char *result1 = ft_strnstr(haystack, needle1, max_length);
    if (result1 != NULL) {
        printf("Substring \"%s\" found at position: %ld\n", needle1, result1 - haystack);
    } else {
        printf("Substring \"%s\" not found\n", needle1);
    }

    // Test case 2: Find "Universe" in "Hello, World!"
    char *result2 = ft_strnstr(haystack, needle2, max_length);
    if (result2 != NULL) {
        printf("Substring \"%s\" found at position: %ld\n", needle2, result2 - haystack);
    } else {
        printf("Substring \"%s\" not found\n", needle2);
    }

    return 0;
}
