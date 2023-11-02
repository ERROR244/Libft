/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ksohail- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/01 11:29:47 by ksohail-          #+#    #+#             */
/*   Updated: 2023/11/01 17:03:22 by ksohail-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int ft_memcmp(const void *s1, const void *s2, size_t n)
{
    size_t i;
    const unsigned char *ptr1;
    const unsigned char *ptr2;

    i = 0;
    ptr1 = (const unsigned char *)s1;
    ptr2 = (const unsigned char *)s2;
    while (ptr1[i] && ptr2[i] && n > 0)
    {
        if (ptr1[i] != ptr2[i])
            break;
        i++;
        n--;
    }
    return (ptr1[i] - ptr2[i]);
}

int main() {
    const char* test_cases[][2] = {
        {"apple", "apples"},    // Different strings, same prefix
        {"apple", "app"},       // Different lengths
        {"apple", "orange"},    // Completely different strings
        {"banana", "ban"},      // Different strings, same prefix
        {"grape", "grapefruit"},// Different strings, same prefix
        {"", "test"},           // Empty string as first argument
        {"test", ""},           // Empty string as second argument
        {"same", "same"}        // Identical strings
    };

    for (int i = 0; i < sizeof(test_cases) / sizeof(test_cases[0]); i++) {
        const char* str1 = test_cases[i][0];
        const char* str2 = test_cases[i][1];

        int comparison = ft_memcmp(str1, str2, 4); // Compare the first 4 characters

        printf("String 1: %-10s String 2: %-15s Result: %d\n", str1, str2, comparison);
    }

    return 0;
}
/*
String 1: apple      String 2: apples          Result: 0  // Identical first 4 characters
String 1: apple      String 2: app             Result: 108  // 'l' (in "apple") - ' ' = 108
String 1: apple      String 2: orange          Result: -14  // 'l' (in "apple") - 'n' (in "orange") = -14
String 1: banana     String 2: ban             Result: 97  // 'a' (in "banana") - '\0' (in "ban") = 97
String 1: grape      String 2: grapefruit      Result: 0  // Identical first 4 characters
String 1:            String 2: test            Result: -116  // '\0' - 't' (in "test") = -116
String 1: test       String 2:                 Result: 116  // 't' (in "test") - '\0' = 116
String 1: same       String 2: same            Result: 0  // Identical strings
*/
