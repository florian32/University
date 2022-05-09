#include <iostream>
using namespace std;
int global_counter = 0;

void printHello(){
	global_counter++;
	cout << "hello world" << endl;
}

int main(){
	printHello();
	printHello();
	printHello();
	printHello();
	cout << "The function has been executed " << global_counter << " Times" << endl;
	return 0;
}
