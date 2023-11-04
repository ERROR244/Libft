/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ksohail- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/01 19:47:38 by ksohail-          #+#    #+#             */
/*   Updated: 2023/11/01 19:58:58 by ksohail-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char *ft_strdup(const char *s)
{
    int i;
    int len;
    char *ptr;

    len = ft_strlen(s);
    i = 0;
    ptr = (char *)malloc((len + 1) * sizeof(char));
    if (ptr == NULL)
        return (NULL);
    while (i <= len)
    {
        ptr[i] = s[i];
        i++;
    }
    return (ptr);

}
/*
int main() {
    const char original[] = "Hello, this is a string.";

    // Using strdup to create a duplicate of the original string
    char *duplicate = ft_strdup(original);

    if (duplicate != NULL) {
        printf("Original string: %s\n", original);
        printf("Duplicate string: %s\n", duplicate);

        // Remember to free the dynamically allocated memory when you're done with it
        free(duplicate);
    } else {
        printf("Memory allocation failed.\n");
    }

    return 0;
}
*/