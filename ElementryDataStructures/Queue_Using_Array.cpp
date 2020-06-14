// Implement queues using array.
#include<iostream>
using namespace std;

int Q[100];
int front = -1, rear = -1;

bool QueueEmpty()
{
  if(front == -1 && rear == -1)
    return true;
  else
    return false;
}

void  Enque(int key)
{
  rear = rear+1;
  Q[rear] = key;
}
int Deque()
{
  if(QueueEmpty())
  {
    cout<<"Queue Underflow \n";
    return -1;
  }
  else
  {
    // deque operation.
    int temp = Q[front];
    for(int i=0;i<=rear-1;i++)
      Q[i] = Q[i+1];
    rear = rear-1;
  }
}
void PrintQ()
{
    if(!QueueEmpty())
    {
      for(int i=0; i<=rear;i++)
        cout<<Q[i]<<" ";
    }
    cout<<endl;
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
