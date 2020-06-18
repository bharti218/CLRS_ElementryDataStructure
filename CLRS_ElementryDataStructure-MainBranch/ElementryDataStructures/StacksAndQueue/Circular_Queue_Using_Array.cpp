// array imeplementation of a circular queue.
#include<iostream>
using namespace std;
#define length 10
int Q[length];
int head = -1, tail = -1;
bool IsQFull()
{
  return(head == tail+1)?true:false;
}
bool IsQEmpty()
{
  return(head == tail)?true:false;
}
void  Enque(int key)
{
  if(!IsQFull())
  {
    Q[tail]=key;
    if(tail == length-1)
        tail=0;
    else
      tail = tail+1;
  }
  else
    cout<<"Q is full\n";
}
int Deque()
{
  if(!IsQEmpty())
  {
    int temp = Q[head];
    if(head == length-1)
      head=0;
    else
      head = head+1;

    return temp;
  }
  else
    cout<<"Q is empty\n";
  return -1;
}
void PrintQ()
{
   cout<<"current queue"<<endl;
    for(int i=head; i<tail;i++)
      cout<<Q[i]<<" ";
    cout<<"\n";
}

int main(int argc, char const *argv[]) {

  char ch='y';
  int choice;
  int key;
  int temp;
  int n;
  while (ch =='y')
  {
    cout<<"Choose an Option\n1. Enqueue\n2. Dequeue\n3. PrintQueue\n";
    cin>>choice;
    switch (choice) {
      case 1:
        cout<<"Enter number of elements to push\n";
        cin>>n;
        for(int i=0;i<n;i++)
        {
          cout<<"Enter key to push\n";
          cin>>key;
          Enque(key);
        }
        break;
      case 2:
        temp = Deque();
        PrintQ();
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
