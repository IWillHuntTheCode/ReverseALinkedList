# ReverseALinkedList
This is simple program that which contains the 'reverseList' function that serves to reverse then linked list itself

Structures:
- ListNode: has int item and struct listnode* next field, item is the data stored in the node and next is the pointer to the next node.
- LinkedList: has int size, which is the size of the linkedlist. ListNode* head which contains the pointer to the first node of the linked list. ListNode* tail which contains the tail pointer of the linkedlist to ensure that we do not traverse the linked list everytime a new node is added to the end of the linked list and node insertion will be O(1);

Functions in pogram():

- void insertion(LinkedList* ll, int value): this allows the user to insert items ONLY to the back of the linked list as it is a relative simple program and the main purpose is to reverse the linked list. The function takes in arguments LinkedList* ll and int value with ll being the pointer to the  linked list and value being the value contained in the new node to be inserted.
- void printList (LinkedList* ll): takes in the arguments LinkedList* ll, function creates a temporary ListNode pointer that acts as a pointer to traverse the linked list.
- void reverseList(LinkedList* ll): the function to reverse the linked list itself. It takes in argument LinkedList* ll which is the pointer to the LinkedList. This function uses 3 pointers to accomplish the job of reversing the linked list. 'prev' is the pointer to the node before the current node being traversed and 'nxt' is the pointer to the next node to be traversed, which will serve as a tracker to ensure we do keep track of the next node for trversal as the next pointer of current node will be updated to point to the previous node. current = nxt will do the job of  going to the next node.

