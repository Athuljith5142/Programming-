#include <stdio.h>

int linear_search(int arr[], int a, int k, int c)
{
    if (c == a)
    {
        return -1;
    }

    if (arr[c] == k)
    {
        return c;
    }

    return linear_search(arr, a, k, c + 1);
}

int main()
{

    int a;
    printf("Enter the size of the array: ");
    scanf("%d", &a);
    int arr[a];

    for (int i = 0; i < a; i++)
    {
        printf("Enter the %d element : ", i + 1);
        scanf("%d", &arr[i]);
    }

    for (int i = 0; i < a; i++)
    {
        printf("%d\t", arr[i]);
    }

    int k;
    printf("\nEnter the value to be search : ");
    scanf("%d", &k);
    int c;
    int res = linear_search(arr, a, k, 0);

    if (res == -1)
    {
        printf("%d is not founded", k);
    }
    else
    {
        printf("%d  is founded at index %d", k, res);
    }
}