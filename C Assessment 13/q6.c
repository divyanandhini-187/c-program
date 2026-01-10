#include <stdio.h>
#include <stdlib.h>

struct node
{
    int data;
    struct node *next;
};

struct node *front = NULL, *rear = NULL;

void add()
{
    int x;
    struct node *newnode = (struct node*)malloc(sizeof(struct node));

    scanf("%d", &x);
    newnode->data = x;
    newnode->next = NULL;

    if(front == NULL)
    {
        front = rear = newnode;
    }
    else
    {
        rear->next = newnode;
        rear = newnode;
    }
}

void removeq()
{
    struct node *temp;

    if(front == NULL)
    {
        printf("Queue is Empty\n");
    }
    else
    {
        temp = front;
        printf("Removed: %d\n", front->data);
        front = front->next;
        free(temp);
    }
}

void display()
{
    struct node *temp = front;

    if(front == NULL)
    {
        printf("Queue is Empty\n");
    }
    else
    {
        while(temp != NULL)
        {
            printf("%d ", temp->data);
            temp = temp->next;
        }
        printf("\n");
    }
}

int main()
{
    int ch;
    while(1)
    {
        printf("1.Add 2.Remove 3.Display 4.Exit\n");
        scanf("%d", &ch);

        switch(ch)
        {
            case 1: add(); break;
            case 2: removeq(); break;
            case 3: display(); break;
            case 4: exit(0);
        }
    }
}
