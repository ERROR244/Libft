/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ksohail- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/01 10:42:46 by ksohail-          #+#    #+#             */
/*   Updated: 2023/11/01 17:12:09 by ksohail-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int ft_strncmp(const char *s1, const char *s2, size_t n)
{
    int i;

    i = 0;
    while (s1[i] && s2[i] && n > 0)
    {
        if (s1[i] != s2[i])
            break;
        i++;
        n--;
    }
    return (s1[i] - s2[i]);
}/*
int main() {
    const char* test_cases[][2] = {
        {"apple", "apples"},    // Same prefix, different lengths
        {"apple", "app"},       // Different lengths
        {"apple", "orange"},    // Completely different strings
        {"banana", "ban"},      // Same prefix, different lengths
        {"grape", "grapefruit"},// Same prefix, different lengths
        {"", "test"},           // Empty string as first argument
        {"test", ""},           // Empty string as second argument
        {"same", "same"}        // Identical strings
    };

    for (int i = 0; i < sizeof(test_cases) / sizeof(test_cases[0]); i++) {
        const char* str1 = test_cases[i][0];
        const char* str2 = test_cases[i][1];

        int comparison = strncmp(str1, str2, 4); // Compare the first 4 characters

        printf("String 1: %-10s String 2: %-15s Result: %d\n", str1, str2, comparison);
    }

    return 0;
}

*/