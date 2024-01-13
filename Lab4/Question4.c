//Remove Odd Indices
struct Node* RemoveOdd(struct Node* head){
    struct Node*current=head;
    struct Node*nodetodlt=current->next;
    while(current!=NULL && nodetodlt!=NULL){
        current->next=nodetodlt->next;
        free(nodetodlt);
        current=current->next;
        if(current!=NULL){
        nodetodlt=current->next;
        }
    }
    return head;
};



