/*
#include <iostream> 
#include <new> 
using namespace std; 
int useless;
int main () 
{ 
    int* a = NULL;   // Pointer to int, initialize to nothing. 
    int n = 0;       // Size needed for array 
	int value = 0;
	float counter = 0;
 
    cout << "what should be the size of your array? " << endl; 
    cin >> n; 
 
    a = new int [n];  // Allocate n ints and save ptr in a. 
 
    for (int i=0; i<n; i++) { 
		cout<< "enter value"<<endl;
		cin >> value;
        a[i] = value;    // Initialize all elements to one two three. 
        counter += value; 
    } 


    cout << endl << "srednia: " << counter / n << endl; 
    delete [] a;  // Delete array pointed to by a 
 
    a = NULL;     // Clear a to prevent using invalid memory reference. 
   cout << "Memory has been cleared" << endl; 
   cin>>useless;
  return 0; 
}
*/