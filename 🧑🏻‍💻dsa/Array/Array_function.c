#include <stdio.h>

int insertion(int arr[], int n, int val)
{
    arr[n] = val;
    return n += 1;
}

int deletion(int arr[], int n)
{
    return n - 1;
}

int traverse(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        printf("%d\t", arr[i]);
    }
}

int merging(int arr[], int n, int brr[], int n1, int rrb[])
{
    int k = 0;

    for (int i = 0; i < n; i++)
    {
        rrb[k] = arr[i];
        k++;
    }

    for (int i = 0; i < n1; i++)
    {
        rrb[k] = brr[i];
        k++;
    }

    return n + n1;
}

int main()
{
    int a, b, c;

    printf("Enter the size: ");
    scanf("%d", &a);

    int arr[a];

    for (int i = 0; i < a; i++)
    {
        scanf("%d", &arr[i]);
    }

    printf("Enter the value: ");
    scanf("%d", &b);

    int val2 = insertion(arr, a, b);

    printf("After insertion\n");
    traverse(arr, val2);

    printf("\nAfter deletion\n");

    int val3 = deletion(arr, val2);
    traverse(arr, a);

    printf("\nEnter the second array for Merging\n");

    printf("Enter the size: ");
    scanf("%d", &c);

    int brr[c];

    for (int i = 0; i < c; i++)
    {
        scanf("%d", &brr[i]);
    }

    int rrb[a + c];

    int key = merging(arr, a, brr, c, rrb);

    printf("After Merging\n");

    for (int i = 0; i < key; i++)
    {
        printf("%d\t", rrb[i]);
    }

    return 0;
}