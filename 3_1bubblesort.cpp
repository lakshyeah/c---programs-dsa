//bubbleSort.cpp demonstrates bubble sort
#include <iostream>
#include <vector>
using namespace std;

class ArrayBub
{
 private:
  vector<double> v; //vector v
  int nElems; //number of data items

  void swap(int one, int two) //private member function
  {
   double temp = v[one];
   v[one] = v[two];
   v[two] = temp;
  }

 public:

 ArrayBub(int max) : nElems(0) //constructor
 { v.resize(max); } //size the vector

 void insert(double value) //put element into array
 {
  v[nElems] = value; //insert it
  nElems++; //increment size
 }

 void display() //displays array contents
 {
  for(int j=0; j<nElems; j++) //for each element,
   cout << v[j] << " "; //display it
   cout << endl;
}

 void bubbleSort() //sorts the array
 {
  int out, in;
  for(out=nElems-1; out>1; out--) //outer loop (backward)
   for(in=0; in<out; in++) //inner loop (forward)
    if( v[in] > v[in+1] ) //out of order?
     swap(in, in+1); //swap them
 } //end bubbleSort()
 
}; //end class ArrayBub


int main()
{
 int maxSize = 100; //array size
 ArrayBub arr(maxSize); //create the array
 arr.insert(77); //insert 10 items
 arr.insert(99);
 arr.insert(44);
 arr.insert(55);
 arr.insert(22);
 arr.insert(88);
 arr.insert(11);
 arr.insert(00);
 arr.insert(66);
 arr.insert(33);
 arr.display(); //display items
 arr.bubbleSort(); //bubble sort them
 arr.display(); //display them again

 return 0;
} //end main()