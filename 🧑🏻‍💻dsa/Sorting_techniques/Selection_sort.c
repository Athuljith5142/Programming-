#include <stdio.h>

void selection_sort(int b[], int a)
{

    for (int i = 0; i < a - 1; i++)
    {
        int min = i;
        for (int j = i + 1; j < a; j++)
        {
            if (b[j] < b[min])
            {
                int temp = b[j];
                b[j] = b[min];
                b[min] = temp;
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

    selection_sort(b, a);
}