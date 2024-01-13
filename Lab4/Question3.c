
//Linked List into Array
int* conversionInArray(struct Node* head)
{
    struct Node* current = head;
    struct Node* current1 = head;
    int count = 0;
    while (current != NULL)
    {
        current = current->next;
        count ++;
    }

    int* array = malloc(sizeof(int)*count);
    int i = 0;
    while (current1 != NULL)
    {
        array[i] = current1->data;
        current1 = current1->next;
        i ++;
    }

    for (int j = 0; j<i; j++)
    {
        printf("%d ",array[j]);
    }

    return array;

}


