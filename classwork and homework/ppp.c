#include<stdio.h>
struct  pairWiseSwap(Node head);
{

    /*
      If the linked list is
      empty or there is only
      one node in list
    */
    if (head == null || head.next == null) {
        return head;
    }

    // Initialize the previous and current pointers
    Node prev = head;
    Node current = head.next;

    head = current;

    // Traversing the list
    while (true) {
        Node nextOfCur = current.next;

        /*
          Updating the next
          of the current
          pointer to be prev.
        */
        current.next = prev;

        // If next is NULL or next is the last node
        if (nextOfCur  == null || nextOfCur.next == null) {
            prev.next = nextOfCur;
            break;
        }

        // Change next of previous to next next
        prev.next = nextOfCur.next;

        // Update the previous and current
        prev = nextOfCur;
        current = prev.next;
    }
    return head;
}
