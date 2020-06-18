// ======================  QUESTION 10.1.6 ============================ //
// Show how to implement a queue using two stacks. Analyze the running
//time of thequeue operations.//

#include<iostream>
#include <bits/stdc++.h>
using namespace std;
#define Max 100
class Stack1 {
  int top;
public:
  int S[Max];
  Stack1(){top = -1;}
  bool IsFull()
  {
    return top == Max-1 ? true:false;
  }
  bool IsEmpty()
  {
    return top == -1?true:false;
  }
  void Push(int key)
  {
    if(!IsFull())
    {
      top++;
      S[top] = key;
    }
  }
  int Pop()
  {
    if(!IsEmpty())
      return S[top--];
    else
    {
      cout<<"Stack empty!\n";
      return -1;
    }
  }
  void PrintStack()
  {
    for(int i=0; i<=top; i++)
      cout<<S[i]<<" ";
    cout<<"\n";
  }
};

void TransferElements(Stack1& s1, Stack1& s2)
{
  int x;
  while (s1.IsEmpty() == false) {
    /* code */
    x = s1.Pop();
    s2.Push(x);
  }
}

int main(int argc, char const *argv[]) {
  class  Stack1 s1, s2;
  int choice, key;
  char ch = 'y';
  while (ch=='y') {
    cout<<"Enter your choice:\n";
    cout<<"1. Enqueue\n";
    cout<<"2. Deque\n";
    cout<<"3. Print\n";
    cin>>choice;
    switch (choice) {
      case 1:
        cout<<"Enter key: ";
        cin>>key;
        s1.Push(key);
        break;
      case 2:
        TransferElements(s1, s2);
        cout<<s2.Pop()<<endl;
        break;
      case 3:
        s2.PrintStack();
        break;
      default:
        cout<<"Invalid choice!"<<endl;
        break;

  }
  cout<<"press y to continue";
  cin>>ch;
  }
  return 0;
}
