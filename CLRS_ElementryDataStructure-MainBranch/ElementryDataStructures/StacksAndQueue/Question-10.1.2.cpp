// =================== QUESTION = 10.1.2 ========================== //
// Explain how to Implement two stacks in one array A[1...n] in such a way
// that neither stack overflows unless the total number of elements in both
// the stacks together is n. The PUSH and POP operation should run  in O(1)

// ============= Logic ================= //
// Push in stack1 will be A[++top1] = key
// Pop in stack1 will be return A[top--]

// Push in stack2 will be A[--top2] = key
// Pop in stack2 will be return A[top++]

#include<iostream>
#define length 10
using namespace std;

int A[length];
int top1 = -1, top2 = length;
bool IsStackOverflow()
{
  int diff = 0;
  if(top1>top2)
      diff = top1-top2;
  else
    diff = top2-top1;
  return diff==1?true:false;
}

void Push1(int key)
{
  if(IsStackOverflow())
    {
      cout<<"Stack overflows!!";
      return;
    }

  else{
    top1++;
    A[top1] = key;
  }
}
void Push2(int key)
{
  if(IsStackOverflow())
    {
      cout<<"Stack overflows!!";
      return;
    }
  else
  {
    top2--;
    A[top2] = key;
  }
}
int Pop1()
{
  if(top1>=0)
  {
    int temp = A[top1];
    A[top1] = 0;
    top1--;
    return temp;
  }
  else
    cout<<"Stack underflow!!";
}
int Pop2()
{
  if(top2>=length-1)
  {
    int temp = A[top2];
    A[top2]=0;
    top2++;
    return temp;
  }
  else
    cout<<"Stack underflow!!";
}

void  PrintStack() {
  /* code */
  for(int i=0; i<length;i++)
    cout<<A[i]<<" ";
  cout<<"\n";
}
int main(int argc, char const *argv[]) {
  char ch='y';
  int choice;
  int key;
  int temp;
  int n1, n2;
  while (ch =='y')
  {
    cout<<"Choose an Option\n1. Push1\n2. Push2\n3. Pop1\n4. Pop2\n5. Print\n";
    cin>>choice;
    switch (choice) {
      case 1:
        if(!IsStackOverflow())
        {
          cout<<"enter number of elements: ";
          cin>>n1;
          for(int i=0; i<n1;i++)
          {
            cout<<"Enter key\n";
            cin>>key;
            Push1(key);
          }
        }
        else
        {
          cout<<"Stack overflows!!!";
        }
        break;
      case 2:
        if(!IsStackOverflow())
        {
          cout<<"enter number of elements: ";
          cin>>n2;
          for(int i=0; i<n2;i++)
          {
            cout<<"Enter key\n";
            cin>>key;
            Push2(key);
          }
        }
        else
          cout<<"Stack overflows!!!";
        break;
      case 3:
        cout<<Pop1()<<endl;
        break;
      case 4:
        cout<<Pop2()<<endl;
        break;
      case 5:
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
