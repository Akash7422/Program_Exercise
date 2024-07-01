#include "stdio.h"
#include "stdlib.h"
#include "malloc.h"
typedef struct node
{
    char data;
    struct node *nxtNode;
} node_t;

typedef node_t *ListNodPtr;

void InsertAtBegining(ListNodPtr *head, char data)
{
    ListNodPtr newNode = (ListNodPtr *)malloc(sizeof(node_t));
    newNode->data = data;
    newNode->nxtNode = *head;
    *head = newNode;
}
void insertAtEnd(ListNodPtr *head, char data)
{
    ListNodPtr current = *head;
    if (current != NULL)
    {
        while (current->nxtNode != NULL)
            current = current->nxtNode;
        current->nxtNode = malloc(sizeof(node_t));
        current->nxtNode->data = data;
        current->nxtNode->nxtNode = NULL;
    }
    else
    {
        current = malloc(sizeof(node_t));
        current->data = data;
        current->nxtNode = NULL;
        *head = current;
    }
}
int deleteAtBegining(ListNodPtr *head, char data)
{
}
void insert(ListNodPtr *head, char data)
{
}
int delete(ListNodPtr *head, char data)
{
    printf("%p", *head);
}
int isEmpty(ListNodPtr *head)
{
    if (*head == NULL)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}
void printList(ListNodPtr head)
{
    // Traverse the linked list starting from the head
    // printf("%d",head);
    // ListNodPtr current = head;
    while (head != NULL)
    {
        // Print the data of the current node
        printf("%c ", head->data);
        // Move to the next node
        head = head->nxtNode;
    }
    printf("\n");
}

int main()
{
    ListNodPtr head = NULL;
    int choise;
    char item = '\0';
    printf("1 or 2 or 3 or 4\n");
    scanf("%d", &choise);
    while (choise != 6)
    {
        switch (choise)
        {
        case 1:
            printf("Enter a char\n");
            scanf("%c", &item);
            insert(&head, item);
            printList(head);
            break;
        case 2:
            printf("Enter a char\n");
            scanf("%c", &item);
            insertAtEnd(&head, item);
            printList(head);
            break;
        case 3:
            printf("Enter a char\n");
            scanf("%c", &item);
            InsertAtBegining(&head, item);
            printList(head);
            break;
        case 4:
            if (!isEmpty(head))
            {
                printf("Enter a char to delete\n");
                scanf("%c", &item);
                // if char is found then removed it
                if (delete (&head, item))
                {
                    printf("Item deleted successfully\n");
                    printList(head);
                }
                else
                {
                    printf("Item not found\n");
                }
            }
            else
            {
                printf("List is empty\n");
            }
        case 5: // delete at the beginning
            if (!isEmpty(head))
            {
                printf("Enter a char to delete\n");
                scanf(" %c", &item); // Add a space before %c
                // if char is found then remove it
                if (deleteAtBegining(&head, item))
                {
                    printf("Item deleted successfully\n");
                    printList(head);
                }
                else
                {
                    printf("Item not found\n");
                }
            }
            else
            {
                printf("List is empty\n");
            }
            break;

        default:
            printf("Invalid option entered\n");

            printf("Enter option 1, 2 or 3\n");
            break;
        }
        scanf("%d", &choise);
    }
    printf("End of run");
    return 0;
}