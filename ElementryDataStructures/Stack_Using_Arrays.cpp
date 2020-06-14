#include<iostream>
using namespace std;
int s[100];
int top = -1;
bool StackEmpty()
{
  return top == -1 ? true:false;
}
void PrintStack()
{
  if(StackEmpty())
  {
    cout<<"stack Underflow";
    return;
  }
  cout<<"Values in the stack"<<endl;
  for(int i=0; i<=top;i++)
  {
    cout<<s[i]<<" ";
  }
  cout<<endl;
}


void Push(int key)
{
  top = top+1;
  s[top] = key;
}
int Pop()
{
  if(StackEmpty())
    {
      cout<<"Stack Underflow!";
      return -1;
    }
  else
  {
    top = top - 1;
    return s[top+1];
  }
}

int main(int argc, char const *argv[]) {


  char ch='y';
  int choice;
  int key;
  int temp;
  while (ch =='y')
  {
    cout<<"Choose an Option\n1. Push\n2. Pop\n3. Print\n";
    cin>>choice;
    switch (choice) {
      case 1:
        cout<<"Enter key to push\n";
        cin>>key;
        Push(key);
        break;
      case 2:
        temp = Pop();
        break;
      case 3:
        PrintStack();
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
