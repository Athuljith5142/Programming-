#include <stdio.h>
#include <stdlib.h>

struct node
{
    int data;
    struct node *next;
};

struct node *head = NULL;

void insertion(int val)
{
    struct node *newNord;

    newNord = (struct node *)malloc(sizeof(struct node));

    newNord->data = val;
    newNord->next = head;
    head = newNord;
}

void insertionatend(int val1)
{
    struct node *temp = head, *newNord;
    newNord = (struct node *)malloc(sizeof(struct node));

    if (head == NULL)
    {
        newNord->data = val1;
        newNord->next = NULL;
        head = newNord;
        return;
    }
    newNord->data = val1;
    newNord->next = NULL;

    while (temp->next != NULL)
    {
        temp = temp->next;
    }

    temp->next = newNord;
}
void insertionatpostion(int pos, int val2)
{
    struct node *temp = head, *newNord;
    newNord = (struct node *)malloc(sizeof(struct node));

    if (head == NULL)
    {
        newNord->data = val2;
        newNord->next = NULL;
        head = newNord;
        return;
    }
    newNord->data = val2;
    newNord->next = NULL;

    if (pos == 1)
    {
        newNord->next = head;
        head = newNord;
    }

    for (int i = 1; i < pos - 1 && temp != NULL; i++)
    {
        temp = temp->next;
    }

    if (temp == NULL)
    {
        printf("Invalid Position to Insert\n");
        return;
    }
    newNord->next = temp->next;
    temp->next = newNord;
}

void delete()
{
    struct node *temp = head;

    if (head == NULL)
    {
        printf("List empty");
        return;
    }

    head = head->next; // we are moving head to the second node so the temp will be in first position
    printf("%d is deleteed from the list ", temp->data);
    free(temp);
}

void deletefromend()
{
    struct node *temp = head, *prev;

    if (head == NULL)
    {
        printf("List is empty");
        return;
    }

    while (temp->next != NULL)
    {
        prev = temp;
        temp = temp->next;
    }

    if (temp == head)
    {
        head = temp->next;
        free(temp);
        return;
    }
    prev->next = NULL; // The last value is deleted so the prev nord-> should be NULL
    printf("%d is deleteed from the list ", temp->data);
    free(temp);
}

void deletefromposition(int pos1)
{
    struct node *temp = head, *del;

    if (head == NULL)
    {
        printf("list is empty");
        return;
    }

    if (pos1 == 1)
    {
        head = head->next;
        printf("%d is deleteed from the list ", temp->data);
        free(temp);
        return;
    }

    for (int i = 1; i < pos1 - 1 && temp != NULL; i++)
    {
        temp = temp->next;
    }

    if (temp == NULL)
    {
        printf("Invalid Position to delete\n");
        return;
    }
    del = temp->next;
    temp->next = del->next;
    free(del);
}

void search(int val3)
{
    struct node *temp = head, *newNord;
    newNord = (struct node *)malloc(sizeof(struct node));

    if (head == NULL)
    {
        printf("List is empty");
        return;
    }
    int pos = 0;
    int f = 0;
    while (temp != NULL)
    {
        if (temp->data == val3)
        {
            printf("%d is founded at index %d", temp->data, pos);
            f = 1;
            break;
        }
        pos++;
        temp = temp->next;
    }
    if (!f)
    {
        printf("Element not found");
    }
}
void count()
{
    struct node *temp = head;
    int c = 0;

    if (head == NULL)
    {
        printf("List is empty");
        return;
    }

    while (temp != NULL)
    {
        temp = temp->next;
        c++;
    }
    printf("%d nodes are there in the list ", c);
}

void minmax()
{

    struct node *temp = head;

    int max = temp->data;
    int min = temp->data;

    while (temp != NULL)
    {
        if (temp->data > max)
        {
            max = temp->data;
        }
        if (temp->data < min)
        {
            min = temp->data;
        }
        temp = temp->next;
    }
    printf("Max value is : %d\n", max);
    printf("Min value is : %d", min);
}

void display()
{
    struct node *temp = head;

    if (head == NULL)
    {
        printf("List is empty");
        return;
    }

    while (temp != NULL)
    {
        printf("%d\t", temp->data);
        temp = temp->next;
    }
}

int main()
{
    int k;
    do
    {
        printf("\n[1] insertion \n[2] insertionatend \n[3] display \n[4] insertionatpostion\n[5] delete\n[6] deletefromend\n[7] deletefromposition\n[8] search\n[9] count\n[10] min/max\n");
        printf("Enter the operation : ");
        scanf("%d", &k);
        switch (k)
        {
        case 1:
            int a, b;
            printf("Enter the limit : ");
            scanf("%d", &a);

            for (int i = 1; i <= a; i++)
            {
                printf("Enter the %d value : ", i);
                scanf("%d", &b);
                insertion(b);
            }
            break;

        case 2:
            int val;
            printf("Enter the value : ");
            scanf("%d", &val);
            insertionatend(val);
            break;

        case 3:
            display();
            break;

        case 4:
            int val1, pos;
            printf("Enter the postion : ");
            scanf("%d", &pos);
            printf("Enter the value : ");
            scanf("%d", &val1);
            insertionatpostion(pos, val1);
            break;

        case 5:
            delete();
            break;

        case 6:
            deletefromend();
            break;

        case 7:
            int pos1;
            printf("Enter the position : ");
            scanf("%d", &pos1);
            deletefromposition(pos1);
            break;

        case 8:
            int s;
            printf("Enter the value to be search : ");
            scanf("%d", &s);
            search(s);
            break;

        case 9:
            count();
            break;

        case 10:
            minmax();
            break;

        default:
            printf("Invalid op");
        }
    } while (k != 10);
}