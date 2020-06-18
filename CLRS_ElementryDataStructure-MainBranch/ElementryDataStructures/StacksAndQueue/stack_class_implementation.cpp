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

int main(int argc, char const *argv[]) {
  class  Stack1 s;
  int choice, key;
  char ch = 'y';
  while (ch=='y') {
    cout<<"Enter your choice:\n";
    cout<<"1. Push\n";
    cout<<"2. Pop\n";
    cout<<"3. Print\n";
    cin>>choice;
    switch (choice) {
      case 1:
        cout<<"Enter key: ";
        cin>>key;
        s.Push(key);
        break;
      case 2:
        cout<<s.Pop();
        break;
      case 3:
        s.PrintStack();
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
