#include <iostream>
#include <vector>
using namespace std;

class LowArray
{
 private:
 vector<double> v; //vector holds doubles

 public:

 LowArray(int max) //constructor
 { v.resize(max); } //size the vector

 void setElem(int index, double value) //put element into
 { v[index] = value; } //array, at index

 double getElem(int index) //get element from
 { return v[index]; } //array, at index

}; //end class LowArray



int main()
{
 LowArray arr(100); //create a LowArray
 int nElems = 0; //number of items
 int j; //loop variable

 arr.setElem(0, 0);
 arr.setElem(1, 11);
 arr.setElem(2, 22);
 arr.setElem(3, 33);
 arr.setElem(4, 44);
 arr.setElem(5, 55);
 arr.setElem(6, 66);
 arr.setElem(7, 77);
 arr.setElem(8, 88);
 arr.setElem(9, 99);
 nElems = 10;

 for(j=0; j<nElems; j++) //display items
 cout << arr.getElem(j) << "";
 cout << endl;

 int searchKey = 26; //search for item

 for(j=0; j<nElems; j++) //for each element,
  if(arr.getElem(j) == searchKey) //found item?
   break;
  if(j == nElems) //no
   cout << "Can't find " << searchKey << endl;
  else //yes
   cout << "Found " << searchKey << endl;

 double deleteKey = 55; //delete value 55
 cout << "Deleting element " << deleteKey << endl;

 for(j=0; j<nElems; j++) //look for it
  if(arr.getElem(j) == deleteKey)
  break;

 for(int k=j; k<nElems; k++) //higher ones down
  arr.setElem(k, arr.getElem(k+1) );
  nElems--; //decrement size

 for(j=0; j<nElems; j++) //display items
  cout << arr.getElem(j) << " ";
  cout << endl;
  return 0;
} //end main()