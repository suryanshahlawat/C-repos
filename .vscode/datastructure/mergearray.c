#include <stdio.h>

int main()
{
    int A[50], B[50], C[100];
    int m, n;
    int i = 0, j = 0, k = 0;
    int x;

    // Input size of first array
    printf("Enter size of first array: ");
    scanf("%d", &m);

    // Input elements of first sorted array
    printf("Enter elements of first sorted array:\n");
    for(i = 0; i < m; i++)
        scanf("%d", &A[i]);

    // Input size of second array
    printf("Enter size of second array: ");
    scanf("%d", &n);

    // Input elements of second sorted array
    printf("Enter elements of second sorted array:\n");
    for(j = 0; j < n; j++)
        scanf("%d", &B[j]);

    // Reset indices
    i = 0;
    j = 0;
    k = 0;

    // Merge the two arrays
    while(i < m && j < n)
    {
        if(A[i] < B[j])
            C[k++] = A[i++];
        else
            C[k++] = B[j++];
    }

    // Copy remaining elements of A
    while(i < m)
        C[k++] = A[i++];

    // Copy remaining elements of B
    while(j < n)
        C[k++] = B[j++];

    // Print merged array
    printf("Merged Sorted Array:\n");
    for(x = 0; x < (m + n); x++)
        printf("%d ", C[x]);

    return 0;
}
