/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ksohail- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/01 12:11:30 by ksohail-          #+#    #+#             */
/*   Updated: 2023/11/01 17:15:11 by ksohail-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char *ft_strnstr(const char *big, const char *little, size_t len)
{
    size_t needle_len;
    const char *end;

    needle_len = strlen(little);
    if (needle_len == 0)
    {
        return ((char *)big);
    }
    
    if (len < needle_len)
        return (NULL);
    end =  big + len - needle_len + 1;

    while (big < end)
    {
        if (*big == *little && strncmp(big, little, needle_len) == 0)
        {
            return ((char *)big);
        }
        big++; 
    }
    return (NULL);
}/*

int main() {
    const char* test_haystacks[] = {
        "Hello, world!",
        "This is a test string",
        "Another example",
        "1234567890",
        "Searching for substring",
        "Testing strnstr function",
        "An empty string",
        "The quick brown fox jumps over the lazy dog",
        ""
    };

    const char* test_needles[] = {
        "world",
        "test",
        "example",
        "45",
        "for",
        "function",
        "empty",
        "lazy",
        ""
    };

    for (int i = 0; i < sizeof(test_haystacks) / sizeof(test_haystacks[0]); i++) {
        const char* haystack = test_haystacks[i];
        printf("Haystack: \"%s\"\n", haystack);

        for (int j = 0; j < sizeof(test_needles) / sizeof(test_needles[0]); j++) {
            const char* needle = test_needles[j];

            const char* found = ft_strnstr(haystack, needle, strlen(haystack));

            if (found != NULL) {
                printf("Needle \"%s\" found at position: %ld\n", needle, found - haystack);
            } else {
                printf("Needle \"%s\" not found\n", needle);
            }
        }
        printf("\n");
    }

    return 0;
}

*/