/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ksohail- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/01 11:43:02 by ksohail-          #+#    #+#             */
/*   Updated: 2023/11/01 17:06:31 by ksohail-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void *ft_memchr(const void *s, int c, size_t n)
{
    size_t i;
    unsigned char *ptr;
    
    i = 0;
    ptr = (unsigned char *)s;
    while (ptr[i] && i < n)
    {
        if (ptr[i] == c)
            return (&ptr[i]);
        i++;
    }
    return (NULL);
}

int main() {
    const char* test_strings[] = {
        "Hello, world!",
        "Searching for 'a'",
        "Another test string",
        "String without the character 'x'",
        "Empty string",
        "aaaaabbbbbaaaaa",
        "ABCDEF",
        "123456789",
        ""
    };

    int test_characters[] = {'o', 'a', 'T', 'x', '\0', 'b', 'E', '7', 'x', '9', 'z'};

    for (int i = 0; i < sizeof(test_strings) / sizeof(test_strings[0]); i++) {
        const char* str = test_strings[i];

        for (int j = 0; j < sizeof(test_characters) / sizeof(test_characters[0]); j++) {
            int ch = test_characters[j];

            const char* found = ft_memchr(str, ch, strlen(str));

            if (found != NULL) {
                printf("Character '%c' found in string: \"%s\" at position: %ld\n", ch, str, found - str);
            } else {
                printf("Character '%c' not found in string: \"%s\"\n", ch, str);
            }
        }
        printf("\n");
    }

    return 0;
}
/*
Character 'o' found in string: "Hello, world!" at position: 4
Character 'a' not found in string: "Hello, world!"
Character 'T' not found in string: "Hello, world!"
Character 'x' not found in string: "Hello, world!"
Character '' not found in string: "Hello, world!"
Character 'b' not found in string: "Hello, world!"
Character 'E' not found in string: "Hello, world!"
Character '7' not found in string: "Hello, world!"
Character 'x' not found in string: "Hello, world!"
Character '9' not found in string: "Hello, world!"
Character 'z' not found in string: "Hello, world!"

Character 'o' found in string: "Searching for 'a'" at position: 11
Character 'a' found in string: "Searching for 'a'" at position: 2
Character 'T' not found in string: "Searching for 'a'"
Character 'x' not found in string: "Searching for 'a'"
Character '' not found in string: "Searching for 'a'"
Character 'b' not found in string: "Searching for 'a'"
Character 'E' not found in string: "Searching for 'a'"
Character '7' not found in string: "Searching for 'a'"
Character 'x' not found in string: "Searching for 'a'"
Character '9' not found in string: "Searching for 'a'"
Character 'z' not found in string: "Searching for 'a'"

Character 'o' found in string: "Another test string" at position: 2
Character 'a' not found in string: "Another test string"
Character 'T' not found in string: "Another test string"
Character 'x' not found in string: "Another test string"
Character '' not found in string: "Another test string"
Character 'b' not found in string: "Another test string"
Character 'E' not found in string: "Another test string"
Character '7' not found in string: "Another test string"
Character 'x' not found in string: "Another test string"
Character '9' not found in string: "Another test string"
Character 'z' not found in string: "Another test string"

Character 'o' found in string: "String without the character 'x'" at position: 11
Character 'a' found in string: "String without the character 'x'" at position: 21
Character 'T' not found in string: "String without the character 'x'"
Character 'x' found in string: "String without the character 'x'" at position: 30
Character '' not found in string: "String without the character 'x'"
Character 'b' not found in string: "String without the character 'x'"
Character 'E' not found in string: "String without the character 'x'"
Character '7' not found in string: "String without the character 'x'"
Character 'x' found in string: "String without the character 'x'" at position: 30
Character '9' not found in string: "String without the character 'x'"
Character 'z' not found in string: "String without the character 'x'"

Character 'o' not found in string: "Empty string"
Character 'a' not found in string: "Empty string"
Character 'T' not found in string: "Empty string"
Character 'x' not found in string: "Empty string"
Character '' not found in string: "Empty string"
Character 'b' not found in string: "Empty string"
Character 'E' found in string: "Empty string" at position: 0
Character '7' not found in string: "Empty string"
Character 'x' not found in string: "Empty string"
Character '9' not found in string: "Empty string"
Character 'z' not found in string: "Empty string"

Character 'o' not found in string: "aaaaabbbbbaaaaa"
Character 'a' found in string: "aaaaabbbbbaaaaa" at position: 0
Character 'T' not found in string: "aaaaabbbbbaaaaa"
Character 'x' not found in string: "aaaaabbbbbaaaaa"
Character '' not found in string: "aaaaabbbbbaaaaa"
Character 'b' found in string: "aaaaabbbbbaaaaa" at position: 5
Character 'E' not found in string: "aaaaabbbbbaaaaa"
Character '7' not found in string: "aaaaabbbbbaaaaa"
Character 'x' not found in string: "aaaaabbbbbaaaaa"
Character '9' not found in string: "aaaaabbbbbaaaaa"
Character 'z' not found in string: "aaaaabbbbbaaaaa"

Character 'o' not found in string: "ABCDEF"
Character 'a' not found in string: "ABCDEF"
Character 'T' not found in string: "ABCDEF"
Character 'x' not found in string: "ABCDEF"
Character '' not found in string: "ABCDEF"
Character 'b' not found in string: "ABCDEF"
Character 'E' found in string: "ABCDEF" at position: 4
Character '7' not found in string: "ABCDEF"
Character 'x' not found in string: "ABCDEF"
Character '9' not found in string: "ABCDEF"
Character 'z' not found in string: "ABCDEF"

Character 'o' not found in string: "123456789"
Character 'a' not found in string: "123456789"
Character 'T' not found in string: "123456789"
Character 'x' not found in string: "123456789"
Character '' not found in string: "123456789"
Character 'b' not found in string: "123456789"
Character 'E' not found in string: "123456789"
Character '7' found in string: "123456789" at position: 6
Character 'x' not found in string: "123456789"
Character '9' found in string: "123456789" at position: 8
Character 'z' not found in string: "123456789"

Character 'o' not found in string: ""
Character 'a' not found in string: ""
Character 'T' not found in string: ""
Character 'x' not found in string: ""
Character '' not found in string: ""
Character 'b' not found in string: ""
Character 'E' not found in string: ""
Character '7' not found in string: ""
Character 'x' not found in string: ""
Character '9' not found in string: ""
Character 'z' not found in string: ""
*/
