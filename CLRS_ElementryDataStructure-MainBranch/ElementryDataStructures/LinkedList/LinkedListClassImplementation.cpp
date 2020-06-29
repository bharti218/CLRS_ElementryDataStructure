//================ Singly Linked List ======================= //
#include<iostream>
using namespace std;
struct node{
    int data;
    node *next;
};
class LinkedList{
    node *head, *tail;
  public:
    LinkedList()
    {
      head = NULL;
      tail = NULL;
    }
    void AddNode(int key)
    {
      node *temp = new node;
      temp->data = key;
      temp->next = NULL;
      if(head == NULL)
      {
        head = temp;
        tail = temp;
      }
      else
      {
        tail->next = temp;
        tail = tail->next;
      }
    }
    void PrintList()
    {
      node *temp = head;
      while (temp!=NULL) {
        /* code */
        cout<<temp->data<<" ";
        temp = temp->next;
      }
    }
};
int main(int argc, char const *argv[]) {

  LinkedList l;
  l.AddNode(2);
  l.AddNode(5);
  l.PrintList();

  return 0;
}
