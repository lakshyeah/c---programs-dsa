#include <iostream>
#include <vector>
using namespace std;
/*
class Arr
{
	private:
	vector <int> ar;	
	int total_elems;
	
	public:
	 Arr()
	{	
	  cout << "Enter the number of elements in the array" <<endl;
	  cin >> total_elems;
	  ar.resize(total_elems);
	  for (int i=0; i<total_elems; i++)
	  {
       cout << "Enter the " << i << " element: ";
	   cin >> ar[i];
	   cout << endl;
	  }
	  
	}
	
	void insert(int index, int val)
	{
		ar[index] = val;
		total_elems++;
	}
	
	void disp()
	{
	 for (int i=0; i<total_elems; i++)
       {
	   cout << ar[i];
       if (i==total_elems-1)
        break;
	   cout << ", ";
      }
	cout << endl;
	}
	
	
	void del()
	{
	 int key, i;
	 cout << "Enter index or element" << endl;
	 cin >> key;
	 for (i=0; i<total_elems; i++)
	 	{
		 if(i==total_elems-1 && ar[i]!=key)
 	 	  cout << key << " not found so can't be deleted" << endl;
		if(ar[i] == key)
	 	 {
	 	  cout << " found " << key << " at " << i << endl;
	 	  for(int j=i; j<total_elems; j++)
	 	   ar[i] = ar[i+1];
	 	  total_elems--;
		  break;	
 		 }
	    }
	}
	
	void find()
	{
	 int key, i;
	 cout << "Enter index or element" << endl;
	 cin >> key;
	 for (i=0; i<total_elems; i++)
	 	{
		 if(i==total_elems-1 && ar[i]!=key)
	 	 cout << key << " not found" << endl;
		if(ar[i] == key)
	 	 {
	 	  cout << " found " << key << " at " << i << endl;
	 	  break;	
 		 }
	    }
	}
	
	void insert()
	{
		int val, index;
		cout << "Enter the element to be inserted: ";
		cin >> val;
		cout << endl;
		cout << "Enter the index: ";
		cin >> index;
		cout << endl;
		total_elems++;
		for(int j=total_elems; j>index; j--)
		 ar[j]=ar[j-1];
		ar[index] = val;
	}
	
};
*/
/*
class Stackx
{
 private:
 int total_elems;
 vector <int> stack_vector;
 int top;
 
 public:
 	Stackx()
 	{
 	 cout << "Enter the height of stack: ";
	 cin >> total_elems;
	 cout << endl;
	 top = -1;
	 stack_vector.reserve(total_elems);	
	 int num;
	 cout << "hovv many elements do you vvant to enter: ";
	 cin >> num;
	 for(int i=0; i<num; i++)
	 {
		push();
		display();
	 }
	}
	
	void display()
	 {
	 	for(int i=0; i<total_elems; i++)
	 	{
	 	 cout << stack_vector[i] << ", ";	
		}
          cout << endl;
	 	for(int i=0; i<total_elems; i++)
	 	{
	 	 cout << "stack_vector["<< i << "]" << ", ";	
		}
          cout << endl;
	 }
	
	
	
	void push()
	{
		int val;
		cout << "Enter element: ";
		cin >> val;
		cout << endl;
		stack_vector[++top] = val;
		cout << val << " is novv at top " << endl;
		if (is_full())
		 cout << "Stack is novv full" << endl;
		 return;
	}
	
	void peek()
	{  cout << " Top element: " << stack_vector[top];	}
	
	void pop()
	{ 
	 // if is_empty()
	   //cout << "Stack is empty";
	   //break;  
	  cout << "Top element: removed " << stack_vector[top--] << "		Novv top element is:  " <<	stack_vector[top] << endl; }
	
	bool is_empty()
	{	
	    if (top==-1)
	     return true;
	    else
	     return false;
	}
	
	bool is_full()
	{
		if (top == total_elems-1)
		{
		 cout << "stack is full" << endl;
		 return true;
		}
		else
		{
		 cout << "stack is not full" << endl; 
		 return false;			
		}
	}
	
};
*/

/*
class Queue
{
 private:
 int front;	
 int rear;
 vector <int> quevect;
 int maxsize;
 int nitems;
 
 public:
  Queue()
  {
  	front = 0;
  	rear = -1;
  	cout << "Enter the size of queue: " << endl;
  	cin >> maxsize;
  	quevect.resize(maxsize);
	int temp;  
	cout << endl << "Enter the number of items to be inserted: " << endl;
	cin >> temp;
	for(int i=0; i<temp; i++)
      insert();
   }
  
  void display()
  {
  	for(int i=0; i<maxsize; i++)
  	{
  	  cout << quevect[i] << " ";  	
	}
	cout << endl;
  }
 
 void insert()
 {
 	int elem;
 	cout << "Enter element to be inserted" << endl;
 	cin >> elem;
 	quevect[++rear] = elem;
    nitems++;
 }
	
  void remove()
  {
  	cout << quevect[front] << " removed" << endl;
  	quevect[front++] = 0;
  	nitems--;
  }	
  
  void sort()
  {
  	for(int i=0;i<=rear;i++)
    quevect[i] = quevect[i+front];
  }
	
};

*/

/*
class Link
{
 public:
  int idata;
  char cdata;
  Link* pnext; 
  
 Link()
 {
 	cout << "Enter the integer for this link" << endl;
 	cin >> idata;
 	cout << "Enter the character for this link" << endl;
    cin >> cdata;
 }
 	
void dispLink()
 {
  cout << "idata: " << idata << ", cdata: " << cdata << endl;
 }
	
};

class LinkedList
{
 public:
 	
 Link* pfirst;
 LinkedList()
 {   pfirst = NULL;	 }
 
 ~LinkedList()
 {
 	Link* pcurrent = pfirst;
 	while(pcurrent!=NULL)
 	{
 	 Link* pOldCurrent = pcurrent;
	 pcurrent = pcurrent->pnext;
	 delete pOldCurrent;
	}
 }
 
 	void displayList()
 	{
 	 Link* pcurrent = pfirst;
	 while(pcurrent->pnext!=NULL)
	 {
	 	cout << "(Idata: " << pcurrent->idata << ", cdata: " << pcurrent->cdata << ")" << endl;
	 	pcurrent = pcurrent->pnext;
	 } 	
	 cout << "(Idata: " << pcurrent->idata << ", cdata: " << pcurrent->cdata << ")" << endl;
 		cout << endl;
	}
 
 void insertfirst()
 {
 	Link* pneulink = new Link();
 	pneulink->pnext = pfirst;
 	pfirst = pneulink;
 }
 
 
 Link* find()
 {
 	Link* pcurrent = pfirst;
 	int key;
 	cout << "Enter idata: ";
 	cin >> key;
 	cout << endl;
 	while(key!=pcurrent->idata)
 	{
 	 if(pcurrent->pnext=NULL)
	  return NULL;
     else
	  pcurrent = pcurrent->pnext;	
	}
	return pcurrent;
 }
 
 
 void remove()
 {
 	int key;
 	Link* pcurrent = pfirst;
 	Link* pprevious = pfirst;
	cout << "Enter integer data for link to be found";
 	cin >> key;
 	cout << endl;
 	while(key!=pcurrent->idata)
 	{
 	 
	  	if(pcurrent->pnext=NULL)
	      {
	      cout << "Link not found" << endl ;
          break;
		  }        
		else
	      {
	      pprevious = pcurrent;
	      pcurrent = pcurrent->pnext;
		  }

     if(pcurrent==pfirst)
       	pfirst = pfirst->pnext;
	 else
	 	pprevious->pnext = pcurrent->pnext;
	 delete pcurrent;
	}
}
 
};
*/

class Node
{
 public:
 	
 int idata;
 char cdata;
 Node* leftchild;
 Node* rightchild;	

Node()
 { 
	cout << "Enter integer data: " << endl;
	cin >> idata;
	cout << "Enter character data: " << endl;
	cin >> cdata;
    leftchild = NULL;	
	rightchild = NULL;
 }
};

class Tree
{
 Node* proot;
 public:
 Tree()
 {
    Node* n1 = new Node();
 	proot = n1;
 }	
 
 void find()
 {
 	int key;
 	cout << "Enter idata for node to be found" << endl;
 	cin >> key;
 	Node* pcurrent = proot;
 	while(pcurrent->idata!=key)
 	{
 	 if(key>pcurrent->idata)
 	  pcurrent = pcurrent->rightchild;	
 	 else if(key<pcurrent->idata)
	  pcurrent = pcurrent->leftchild;	
	if(pcurrent==NULL)
 	  {
 	  cout << "Not found" << endl;
	  break;		
	  }
	  cout << key << "found" << endl;
	}
 }
 
 void insert()
 {
 	Node* pcurrent = proot;
 	Node* neulink = new Node();
 	Node* pparent;
 	while(true)
 	{
 	 pparent = pcurrent;
  	 if(neulink->idata > pcurrent->idata)
 	 {
 	  pcurrent = pcurrent->rightchild;
 	  if(pcurrent==NULL)
 	  {
	    pparent->rightchild = neulink;
	    break;
	   }
	 }
 	 else
 	 {
 	  pcurrent = pcurrent->leftchild;
	  if(pcurrent==NULL)
	   {
	    pparent->leftchild = neulink;	
		break;
		}
	 }
	}
 }
	
	
void preorder(Node* localroot)
{
 if(localroot!=NULL)
 {
  cout << "idata: " << localroot->idata << " cdata: " << localroot->cdata << endl;
  preorder(localroot->leftchild);
  preorder(localroot->rightchild); 	 	
 }
}	
	
void inorder(Node* localroot)
{
 if(localroot!=NULL)
 {
  inorder(localroot->leftchild);
  cout << "idata: " << localroot->idata << " cdata: " << localroot->cdata << endl;
  inorder(localroot->rightchild); 	 	
 }
}	

void postorder(Node* localroot)
{
 if(localroot!=NULL)
 {
  postorder(localroot->leftchild);
  postorder(localroot->rightchild); 	 	
  cout << "idata: " << localroot->idata << " cdata: " << localroot->cdata << endl;
 }
}	
	
	
	
void traverse()
{
	int e;
	cout << "Choose traverse type: 1. preorder  2. inorder  3. postorder" << endl;
	cin >> e;
	switch(e)
	{
	 case(1):
	 {
	 	preorder(proot);
	 	break;
	 }			
	 case(2):
	 {
	 	inorder(proot);
	 	break;
	 }	
	 case(3):
	 {
	 	postorder(proot);
	 	break;
	 }	
	}
}


};





void select()
{
	int ds;
	cout << "Select the data structure\n" << "1. Array" << endl << "2. Stack" << endl << "3. Queue" << endl << "4. Linked List" << endl << "5. Binary tree" << endl;
	cin >> ds;
	switch(ds)
	{
		case(1):
			{
/*			 Arr arr1;
		     arr1.disp();
		     cout << "Operations on Array: " << endl << "1. Insert" << endl << "2. Delete" << endl << "3. find" << endl;
			 int op;
		     cin >> op;
			 switch(op)
		     {
		     	case(1):
		     	 arr1.insert();
		     	 arr1.disp();
		     	 break;
		     
			 	case(2):
		     	 arr1.del();
		     	 arr1.disp();
				 break;
		     
			 	case(3):
		     	 arr1.find();
		     	 arr1.disp();
				 break;
			 }
		*/	 
		     break;
			}
		
		case(2):
			{
/*			 Stackx st1;
			 char e = 'y';
			 while(e=='y')
			 {
			 	cout << endl << "Operations on Stack: " << endl << "1. Peek" << endl << "2. Pop" << endl << "3. Push" << endl << "4. Empty?" << endl << "5. Full?" << endl;
				 int op;
			     cin >> op;
				 switch(op)
			     {
			      case(1):
			       st1.peek();
			       break;
	
			      case(2):
			       st1.pop();
			       st1.peek();
				   break;
	
			      case(3):
			       st1.push();
			       st1.peek();
				   break;
	
			     case(4):
			      st1.is_empty();
			      st1.peek();
				  break;
	
			     case(5):
			      st1.is_full();
			      st1.peek();
				  break;
		        }
			 	cout << "Do you vvant to perform more operations?";
				cin >> e;
			 }	*/
			break;
		    }
	    
	    case(3):
	    	{	    	
/*			 Queue q1;
	    	 q1.display();
	    	 char e='y';
			 while(e=='y')
			 {
			  int op;
	    	  cout << "Select to be performed on queue: " << endl << "1. Display" << endl << "2. Remove" << endl << "3. Insert" << endl << "4. Sort" << endl; 
	    	  cin >> op;
	    	  switch(op)
	    	  {
	    	 	case(1):
	    	 		{
	    	 		 q1.display();
	    	 		 break;	
					}
	    	 	case(2):
	    	 		{
	    	 		 q1.remove();
	    	 		 break;	
					}
	    	 	case(3):
	    	 		{
	    	 		 q1.insert();
	    	 		 break;	
					}
	    	 	case(4):
	    	 		{
	    	 		 q1.sort();
	    	 		 break;	
					}
			   }
	    	 cout << "Do you vvant to perform more operations?" << endl;		
	    	 cin >> e;
			 }
			 */
			 break;
			}
	    	
    	case(4):
    		{
/*	    	 LinkedList ll1;
			 char e='y';
	      	 while(e=='y')
		     {
    		  int op;
     	      cout << "Select to be performed on Linked list: " << endl << "1. Display" << endl << "2. Remove" << endl << "3. Insert" << endl << "4. find" << endl; 
    	      cin >> op;
	    	  switch(op)
	    	  {
	    	 	case(1):
	    	 		{
	    	 		 ll1.displayList();
	    	 		 break;	
					}
	    	 	case(2):
	    	 		{
	    	 		 ll1.remove();
	    	 		 break;	
					}
	    	 	case(3):
	    	 		{
	    	 		 ll1.insertfirst();
	    	 		 break;	
					}
	    	 	case(4):
	    	 		{
	    	 		 ll1.find();
	    	 		 break;	
					}
			   }
	    	 cout << "Do you vvant to perform more operations?" << endl;		
	    	 cin >> e;
			 }	*/
    		 break;
			}
    	
    	
    	case(5):
    		{
/*	    	 Tree tree;
    		char e='y';
	      	 while(e=='y')
		     {
    		  int op;
     	      cout << "Select to be performed on Binary tree: " << endl << "1. traverse" << endl << "2. Insert" << endl << "3. find" << endl; 
	          cin >> op;
	    	  switch(op)
	    	  {
	    	 	case(1):
	    	 		{
	    	 		 tree.traverse();
	    	 		 break;	
					}
	    	 	case(2):
	    	 		{
	    	 		 tree.insert();
	    	 		 break;	
					}
	    	 	case(3):
	    	 		{
	    	 		 tree.find();
	    	 		 break;	
					}
			   }
	    	  cout << "Do you vvant to perform more operations?" << endl;		
	    	  cin >> e;
			 }			  */  					    			
    		 break;
			}
	    
	    
	    
	    
	}
}


int main() 
{
	char cont = 'y';
	while(cont=='y')
	{
		select();
		cout << "Press y to continue: ";
		cin >> cont;
		if (cont != 'y')
		 break;
	}
    return 0;
}
