/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ksohail- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/31 19:19:38 by ksohail-          #+#    #+#             */
/*   Updated: 2023/11/01 16:58:16 by ksohail-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int ft_atoi(const char *nptr)
{
    int i;
    int sign;
    int res;

    i = 0;
    sign = 1;
    res = 0;
    while ((nptr[i] >= 9 && nptr[i] <= 13 ) || nptr[i] == 32)
        i++;
    if (nptr[i] == '+' || nptr[i] == '-')
    {
        if (nptr[i] == '-')
            sign *= -1;
        i++;
    }
    while (nptr[i] >= 48 && nptr[i] <= 57)
    {
        res *= 10;
        res += nptr[i] - '0';
        i++;
    }
    return (sign * res);
}/*

int main() {
    // Test cases for atoi function
    const char* test_cases[] = {
        "12345",        // Simple positive number
        "-54321",       // Negative number
        "0",            // Zero
        "   678",       // Number with leading spaces
        "42 is the answer", // Number with trailing characters
        "  +987",       // Number with leading '+' sign
        "- 123",        // Invalid format with space after '-'
        "abc",          // Non-numeric string
        "",             // Empty string
        "2147483647",   // Maximum positive integer value
        "-2147483648",  // Minimum negative integer value
        "2147483648",   // Out of range (greater than INT_MAX)
        "-2147483649"   // Out of range (less than INT_MIN)
    };

    for (int i = 0; i < sizeof(test_cases) / sizeof(test_cases[0]); i++) {
        const char* str = test_cases[i];
        int converted = ft_atoi(str);

        printf("String: %-12s Converted:%-12d\n", str, converted);
    }

    return 0;
}
*/