#include <stdio.h>
#include <stdlib.h>
int main(int argc, char const *argv[])
{
    struct node
    {
        int data;
        struct node *next;
    };
    struct node *head = 0, *temp = 0, *newnode;
    int choice = 1, sel, pos, count = 0, i = 1;
    while (choice)
    {
        newnode = (struct node *)malloc(sizeof(struct node));
        printf("where you want too inser element\n");
        printf("1.beginning\n");
        printf("2.ending\n");
        printf("3.after a given location\n");
        scanf("%d", &sel);
        if (sel == 1)
        {
            printf("enter data u want to insert:-");
            scanf("%d", &newnode->data);
            newnode->next = head;
            head = newnode;
        }
        else if (sel == 2)
        {
            printf("enter data u want to insert:-");
            scanf("%d", &newnode->data);
            newnode->next = NULL;
            temp = head;
            while (temp->next != 0)
            {
                temp = temp->next;
            }
            temp->next = newnode;
            temp = newnode;
        }
        else if (sel == 3)
        {
            printf("enter the pos where u want to enter the data:-\n");
            scanf("%d", &pos);
            temp = head;
            while (temp->next != 0)
            {
                temp = temp->next;
                count++;
            }
            if (pos > count)
            {
                printf("INVALID POSITION");
            }
            else
            {
                temp = head;
                while (i < pos)
                {
                    temp = temp->next;
                    i++;
                }
                printf("enter data u want to insert:-");
                scanf("%d", &newnode->data);
                newnode->next = temp->next;
                temp->next = newnode;
            }
        }
        printf("if u want to continue to enter the data:-\n");
        printf("\t\t1)Yes\n");
        printf("\t\t0)No\n");
        scanf("%d", &choice);
    }
    temp = head;
    while (temp != 0)
    {
        printf("%d\n", temp->data);
        temp = temp->next;
    }
    return 0;
}