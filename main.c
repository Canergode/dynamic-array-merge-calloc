#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    int N, M;
    int *arr1, *arr2, *result;
    int counter = 0, i;

    // Get sizes from user
    printf("How many numbers for the first array:\n");
    scanf("%d", &N);

    printf("How many numbers for the second array:\n");
    scanf("%d", &M);

    // Allocate memory for both arrays
    arr1 = calloc(N, sizeof(int));
    arr2 = calloc(M, sizeof(int));

    // Generate random numbers
    srand(time(0));

    printf("First array:\n");
    for (i = 0; i < N; i++)
    {
        *(arr1 + i) = rand() % 50;
        printf("%d  ", *(arr1 + i));
    }
    printf("\n");

    printf("Second array:\n");
    for (i = 0; i < M; i++)
    {
        *(arr2 + i) = rand() % 100;
        printf("%d  ", *(arr2 + i));
    }

    // Allocate result array and merge
    result = calloc(N + M, sizeof(int));

    printf("\nMerged array:\n");

    for (i = 0; i < N; i++)
    {
        *(result + counter) = *(arr1 + i);
        counter++;
    }
    for (i = 0; i < M; i++)
    {
        *(result + counter) = *(arr2 + i);
        counter++;
    }
    for (i = 0; i < counter; i++)
    {
        printf("%d  ", *(result + i));
    }

    free(arr1);
    free(arr2);
    free(result);

    return 0;
}


