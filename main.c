#include <stdio.h>
#include <stdlib.h>

typedef struct listnode
{
	int item;
	struct listnode* next;
} ListNode;
typedef struct linkedlist
{
	int size;
	ListNode* head;
	ListNode* tail;
} LinkedList;

void insertion (LinkedList *ll, int value);
void printList (LinkedList *ll);
void reverseList (LinkedList *ll);
int main()
{
    LinkedList* ll = malloc (sizeof(LinkedList));
    ll -> size = 0;
    ll -> head = NULL;
    ll ->tail = NULL;
    int i, ll_length, increment_count;
    puts("Enter your linked list length limit: ");
    scanf("%d", &ll_length);
    puts("Enter the incremental count: ");
    scanf("%d", &increment_count);
    for (i = 0; i < ll_length; i+=increment_count)
		insertion(ll, i);
	puts("\nThis is the normal list:\n");
	printList(ll);
	puts("\n");
	puts("\nThis is the reversed list\n");
	reverseList(ll);
	printList(ll);
	puts("\n");
    return 0;
}
void insertion (LinkedList *ll, int value)
{
	if (ll == NULL) return;
	if (ll->head == NULL)
	{
		ll -> head = malloc(sizeof(ListNode));
		(ll -> head) -> item = value;
		ll -> head -> next = NULL;
		ll -> tail = ll -> head;
		ll -> size ++;
	}
	else
	{
		ll -> tail -> next = malloc(sizeof(ListNode));
		ll -> tail = ll -> tail -> next;
		ll -> tail -> item = value;
		ll -> tail -> next = NULL;
		ll ->size ++;
	}
}
void printList (LinkedList* ll)
{
	if (ll == NULL || ll -> size == 0) return;
	ListNode * temp = ll -> head;
	while (temp)
	{
		printf("%d ", temp -> item);
		temp = temp->next;
	}
	free(temp);
}
void reverseList(LinkedList* ll)
{
	ListNode* current = ll -> head;
	ListNode* prev = NULL,  *nxt = NULL;
	while (current)
	{
		nxt = current -> next;
		current -> next = prev;
		prev = current;
		current = nxt;
	}		
	ll -> head = prev;
	free(current);
	free(nxt);
}
