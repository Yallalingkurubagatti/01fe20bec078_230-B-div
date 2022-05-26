#include <stdio.h>
using namespace std;

// Class for creating nodes of the linked list
class Node {
public:
int data;
Node* next;
Node(int val) {
this->data = val;
this->next = NULL;
}
};

// Function to print the linked list
void printList(Node* head)
  {
   Node* curr_node = head;
   while(curr_node != NULL)
     {
      if(curr_node->next == NULL) cout<< curr_node->data <<" ";
      else {
          cout<<curr_node->data<<" -> ";
      }
      curr_node = curr_node->next;
     }
   cout<<endl;
  }

// Recursive function to pairwise swap elements of a linked list
void pairwiseSwap(Node* head)
 {
  if(head != NULL and head->next !=NULL)
    {
     swap(head->data, head->next->data);
     pairwiseSwap(head->next->next);
    }
 }
int main()
{
Node* head = new Node(1);
head->next = new Node(4);
head->next->next = new Node(5);
head->next->next->next = new Node(9);
head->next->next->next->next = new Node(8);
head->next->next->next->next->next = new Node(5);
head->next->next->next->next->next->next = new Node(2);

cout<<"The given linked list is: "<<endl;
printList(head);

    // Call the function to pairwise swap elements
    pairwiseSwap(head);

    cout<<"The linked list after pairwise swapping is: "<<endl;
printList(head);
}
