#include <stdio.h>

int bubble_sort(int b[], int a)
{

    for (int i = 0; i < a - 1; i++)
    {
        for (int j = 0; j < a - 1 - i; j++)
        {
            if (b[j] > b[j + 1])
            {
                int temp = b[j];
                b[j] = b[j + 1];
                b[j + 1] = temp;
            }
        }
    }
    printf("\nSorted array\n");

    for (int i = 0; i < a; i++)
    {
        printf("%d\t", b[i]);
    }
}

int main()
{
    int a;
    printf("Enter the no : ");
    scanf("%d", &a);

    int b[a];
    for (int i = 0; i < a; i++)
    {
        printf("Enter the %d element : ", i + 1);
        scanf("%d", &b[i]);
    }
    for (int i = 0; i < a; i++)
    {
        printf("%d ", b[i]);
    }

    bubble_sort(b, a);
}