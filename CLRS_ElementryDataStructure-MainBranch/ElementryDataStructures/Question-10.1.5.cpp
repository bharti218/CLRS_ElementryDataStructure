// ===========================  QUESTION  =============================== //
// Whereas a stack allows insertion and deletion of elements at only one end,
// and a queue allows insertion at one end and deletion at another end.
// a deque(double queue) allows insertion and deletion at both ends.
// wirte four O(1) procedures to insert elements into and delete elements
// from both the ends of a deque implemented by an array.

#include<iostream>
using namespace std;
int Q[100];
int top = -1;

void  Enque(int key)
{
}
int Deque()
{

}
void PrintQ()
{

}

int main(int argc, char const *argv[]) {

  char ch='y';
  int choice;
  int key;
  int temp;
  while (ch =='y')
  {
    cout<<"Choose an Option\n1. Enqueue\n2. Dequeue\n3. PrintQueue\n";
    cin>>choice;
    switch (choice) {
      case 1:
        cout<<"Enter key to push\n";
        cin>>key;
        Enque(key);
        break;
      case 2:
        temp = Deque();
        break;
      case 3:
        PrintQ();
        break;
      default:
        cout<<"Invalid entry";
        break;
    }
    cout<<"Press 'y' to continue\n";
    cin>>ch;
  }

  return 0;
}
