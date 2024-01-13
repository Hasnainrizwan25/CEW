
//Combine sorted Linked List
struct Node* combine(struct Node* head1, struct Node* head2)
{
    struct Node* current1 = head1;
    struct Node* current2 = head2;
    struct Node* newLink = NULL;
    struct Node* b = NULL;
    if (current1->data < current2->data)
    {

        newLink = insertAtBeginning(newLink, current1->data);
        current1 = current1->next ;
    } else
    {

        newLink = insertAtBeginning(newLink, current2->data);
        current2 = current2->next;
    }

    while (current1 != NULL && current2 != NULL)
    {
            if (current1->data < current2->data)
        {
           newLink = insertAtEnd(newLink, current1->data);
           b = current1;
            current1 = current1->next ;
        } else
        {
            newLink = insertAtEnd(newLink, current2->data);
            b = current2;
            current2 = current2->next;
        }

    }
    b = newLink;
    while (b->next != NULL)
    {
        b = b->next;
    }

    if (current1 == NULL)
    {
        b->next = current2;

    } else
    {
        b->next = current1;
    }

    return newLink;

};

