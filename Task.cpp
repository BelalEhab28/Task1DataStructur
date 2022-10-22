#include <iostream>
using namespace std;
const int Max_Size = 100;
class stack
{
    int top;
    int items[Max_Size];
public: stack() :top(-1){}
      
      void Push(int Element)
      {
          if (top >= Max_Size - 1) {


              cout << "stack is full on push";
          }
          else
          {
              top++;
              items[top] = Element;


          }
      }
      bool isEmpty() {
          return top < -1;
      }
      void Pop()
      {
          if (isEmpty())
          {
              cout << "stack is empty on pop";
          }
          else
              top--;
      }
      void Pop(int&Element)
      {
          if (isEmpty())
          {
              cout << "stack is empty on pop";
          }
          else {
              Element = items[top];
              top--;
          }
      }
      void getTop(int&stackTop)
      {
          if (isEmpty())
          {
              cout << "stack is empty on getTop";
          }
          else {
              stackTop = items[top];
              cout << stackTop;
              
          }
      }
      void print()
      {
          cout << "[";
          for (size_t i = 0; i <= top; i++)
          {
              cout << items[i] << " ";
          }
          cout << "]";
      }


};

int main()
{
    int y = 0;
    stack s;
    s.Push(10);
    s.Push(20);
    s.Push(30);
    s.Push(40);
    s.Push(50);
    s.print();
    s.getTop(y);
}
