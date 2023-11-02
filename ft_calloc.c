/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ksohail- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/01 20:45:57 by ksohail-          #+#    #+#             */
/*   Updated: 2023/11/01 21:27:42 by ksohail-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void *ft_calloc(size_t nmemb, size_t size)
{
	void *ptr;
	if (nmemb == 0 || size == 0)
		return (NULL);
    if (nmemb > SIZE_MAX /  size)
    {
        return (0);
    }
    
	ptr = (void *)malloc(nmemb * size);
    if (ptr != NULL)
    {
        size_t i = 0;
        while ( i < nmemb * size)
            *((char*)ptr + i++) = 0;
        //ft_bzero(ptr, size * nmemb);
    }
	return (ptr);
}

int main() {
    // Test various cases of calloc

    // Case 1: Allocate memory for 5 integers
    int n1 = 5;
    int* array1 = (int*)ft_calloc(n1, sizeof(int));

    if (array1 == NULL) {
        printf("Memory allocation failed for case 1. Exiting...\n");
        return 1;
    }

    printf("Case 1: Memory allocated for %d integers:\n", n1);
    for (int i = 0; i < n1; i++) {
        printf("%d ", array1[i]);
    }
    printf("\n\n");

    free(array1);

    // Case 2: Allocate memory for 10 doubles
    int n2 = 10;
    double* array2 = (double*)ft_calloc(n2, sizeof(double));

    if (array2 == NULL) {
        printf("Memory allocation failed for case 2. Exiting...\n");
        return 1;
    }

    printf("Case 2: Memory allocated for %d doubles:\n", n2);
    for (int i = 0; i < n2; i++) {
        printf("%lf ", array2[i]);
    }
    printf("\n\n");

    free(array2);

    // Case 3: Allocate memory for 3 characters
    int n3 = 3;
    char* array3 = (char*)ft_calloc(n3, sizeof(char));

    if (array3 == NULL) {
        printf("Memory allocation failed for case 3. Exiting...\n");
        return 1;
    }

    printf("Case 3: Memory allocated for %d characters:\n", n3);
    for (int i = 0; i < n3; i++) {
	    printf("%c ", array3[i]);
    }
    printf("\n\n");

    free(array3);

    // Additional cases:
    
    // Case 4: Allocate memory for an array of 8 floats
    int n4 = 8;
    float* array4 = (float*)ft_calloc(n4, sizeof(float));

    if (array4 == NULL) {
        printf("Memory allocation failed for case 4. Exiting...\n");
        return 1;
    }

    printf("Case 4: Memory allocated for %d floats:\n", n4);
    for (int i = 0; i < n4; i++) {
        printf("%f ", array4[i]);
    }
    printf("\n\n");

    free(array4);

    // Case 5: Allocate memory for 2 arrays of 4 integers each
    int n5 = 4;
    int** array5 = (int**)ft_calloc(2, sizeof(int*));
    for (int i = 0; i < 2; i++) {
        array5[i] = (int*)calloc(n5, sizeof(int));
    }

    if (array5 == NULL) {
        printf("Memory allocation failed for case 5. Exiting...\n");
        return 1;
    }

    printf("Case 5: Memory allocated for 2 arrays of %d integers each:\n", n5);
    for (int i = 0; i < 2; i++) {
        printf("Array %d: ", i + 1);
        for (int j = 0; j < n5; j++) {
            printf("%d ", array5[i][j]);
        }
        printf("\n");
    }
    printf("\n");

    for (int i = 0; i < 2; i++) {
        free(array5[i]);
    }
    free(array5);

    return 0;
}

