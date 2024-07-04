//Stack.cpp demonstrates stacks
#include <iostream>
#include <vector>
using namespace std;

class StackX
{
 private:
  int maxSize; //size of stack vector
  vector<double> stackVect; //stack vector
  int top; //top of stack

 public:

StackX(int s) : maxSize(s), top(-1) //constructor
{  stackVect.reserve(maxSize); }

void display()
{
	 	for(int i=0; i<maxSize; i++)
	 	{
	 	 cout << stackVect[i] << ", ";	
		}
          cout << endl;
	 	for(int i=0; i<maxSize; i++)
	 	{
	 	 cout << "stackVect["<< i << "]" << ", ";	
		}
          cout << endl;
}

void push(double j) //put item on top
{  stackVect[++top] = j; } //insert item

double pop() //take item from top
{ return stackVect[top--]; } //decrement top

double peek() //peek at top of stack
{  return stackVect[top]; }

bool isEmpty() //true if stack is empty
{  return (top == -1);  }

bool isFull() //true if stack is full
{  return (top == maxSize-1);  }

}; //end class StackX

int main()
{
 StackX theStack(7);
 theStack.push(20); 
 theStack.push(40);
 theStack.push(60);
 theStack.push(80);
 theStack.display();
 cout << endl;

 return 0;
} //end main()