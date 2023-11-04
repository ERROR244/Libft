/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ksohail- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/01 18:41:39 by ksohail-          #+#    #+#             */
/*   Updated: 2023/11/01 19:05:01 by ksohail-         ###   ########.fr       */
/*                                                                            */
/* ****************************************************************************/

#include "libft.h"

char *ft_strrchr(const char *s, int c)
{
    int i;
    
    i = ft_strlen(s);
    while (i != 0)
    {
        if (s[i] == c)
            return ((char *)&s[i]);
        i--;
    }
    return (NULL);
}/*

int main() {
    const char st[] = "This is a test string";
    const char str[] = "This is a test string";
    const char chars_to_fin[] = {'i', 's', 'z', '\0'}; // Characters to be found
    const char chars_to_find[] = {'i', 's', 'z', '\0'}; // Characters to be found
    const char *resul;
    const char *result;

    printf("Testing strchr function:\n");
    printf("String: '%s'\n", str);

    for (int i = 0; chars_to_find[i] != '\0'; i++) {
        resul = ft_strrchr(st, chars_to_fin[i]);
        result = strrchr(str, chars_to_find[i]);

        if (result != NULL) {
            printf("'%c' found at position(ft_strrchr): %ld in the string.\n", chars_to_fin[i], resul - st);
            printf("'%c' found at position(strrchr): %ld in the string.\n", chars_to_find[i], result - str);
        } else {
            printf("'%c' not found in the string(ft_strrchr).\n", chars_to_fin[i]);
            printf("'%c' not found in the string(strrchr).\n", chars_to_find[i]);
        }
    }
    return 0;
}

*/