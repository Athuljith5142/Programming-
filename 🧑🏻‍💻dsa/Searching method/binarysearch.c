#include <stdio.h>

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

    int low = 0, high = a - 1, mid, f = 0;

    while (low <= high)
    {

        mid = (low + high) / 2;

        if (arr[mid] == k)
        {
            f = 1;
            break;
        }
        else if (arr[mid] < k)
        {
            low = mid + 1;
        }
        else
        {
            high = mid - 1;
        }
    }

    if (!f)
    {
        printf("Value is not founded");
    }
    else
    {
        printf("%d is founded in %d", k, mid);
    }
}