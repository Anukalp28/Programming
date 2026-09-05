#include <stdio.h>
#include <stdlib.h>


struct Node {
    int data;
    struct Node *next;
};


struct Node *sortedMerge(struct Node *head1, struct Node *head2) {
    
    if (head1 == NULL) {
        return head2;
    }

    if (head2 == NULL) {
        return head1;
    }

    if (head1->data <= head2->data) {
        head1->next = sortedMerge(head1->next, head2);
        return head1;
    } else {
        head2->next = sortedMerge(head1, head2->next);
        return head2;
    }
}


void printList(struct Node *curr) {
    while (curr != NULL) {
        printf("%d", curr->data);
        if (curr->next != NULL) {
            printf(" -> ");
        }
        curr = curr->next;
    }
    printf("\n");
}


struct Node *newNode(int data) {
    struct Node *temp = (struct Node *)malloc(sizeof(struct Node));
    temp->data = data;
    temp->next = NULL;
    return temp;
}


int main() {
    struct Node *head1 = newNode(1);
    head1->next = newNode(3);
    head1->next->next = newNode(5);


    struct Node *head2 = newNode(2);
    head2->next = newNode(4);
    head2->next->next = newNode(6);

    printf("List 1: ");
    printList(head1);

    printf("List 2: ");
    printList(head2);

    // Merging the lists
    struct Node *mergedHead = sortedMerge(head1, head2);

    printf("Merged Sorted List: ");
    printList(mergedHead);

    return 0;
}
