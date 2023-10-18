//https://en.cppreference.com/w/c/header

#include <stddef.h>
#include <stdio.h>
#include <stdlib.h>
#include "Queue.h"

struct Node* head = NULL;
int nodeCount = 0;

void enqueue(char item) 
{
    if(head == NULL) // if list is empty 
    {
        head = (struct Node*) malloc(sizeof(struct Node)); // allocate mem for first node 

        if (head != NULL)
        {
            head->data = item; // set data of first node to the passed 'item'
            head->next = NULL; // initalize 'next' pointer to NULL 

            nodeCount++; // incrememnt count of nodes in the list 
        }
    }

    // if list is not empty 
    else
    {
        struct Node* current = head;
            
        // Traverse the list to get to the last node
        while(current->next != NULL)
        {
            current = current->next;
        }
            
        // Add the node to the list
        struct Node* node = (struct Node*) malloc(sizeof(struct Node));
        
        if (node != NULL)
        {
            node->data = item;
            node->next = NULL;

            current->next = node; // link new node to previous last node 

            nodeCount++; // increment count of nodes in the list 
        }
    }
}

char dequeue() 
{
    char data = 0;

    if (head != NULL)
    {
        data = head->data;
            
        head = head->next;
            
        nodeCount--;
    } 
    else 
    {
        // The queue was empty, return null and don't change the count
        data = 0;
    }

    return data;
}

void listItems()
{
    struct Node* current = head;

    while (current != NULL)
    {
        printf("Data: %c \n", current->data);

        current = current->next;
    }
}
