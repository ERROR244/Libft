/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ksohail- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/03 11:49:51 by ksohail-          #+#    #+#             */
/*   Updated: 2023/11/03 11:50:27 by ksohail-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char f(unsigned int i, char c)
{
    if (i % 2 == 0)
    {
        if (c >= 'a' && c <= 'z')
            return (c - ('a' - 'A'));
    }
    return (c);
}

char *ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
    int len = ft_strlen(s);
    char *ptr;

    if (*s == '\0')
        return (ft_strdup(""));
    ptr = (char *)malloc((len + 1) * sizeof(char));
    ptr[len] = '\0';
    len--;
    while (len >= 0)
    {
        ptr[len] = f(len, s[len]);
        len--;
    }
    return (ptr);
}/*

int main() {
    const char *inputString = "examplestring"; // Your test string

    printf("Original String: %s\n", inputString);

    // Apply ft_strmapi with the test_function to the inputString
    char *resultString = ft_strmapi(inputString, &f);

    if (resultString == NULL) {
        printf("Memory allocation failed. Unable to create the new string.\n");
        return 1;
    }

    printf("Modified String: %s\n", resultString);

    free(resultString); // Free the allocated memory for the result string
    return 0;
}

*/