#include <iostream>
#include <string>
using namespace std;

int main(){
	
	string test = "leosia";
	cout << test.size() << endl;
	cout << test.length() << endl;
	cout << test.empty() << endl;
	test.resize(5);
	cout << test << endl;;
	test.clear();
	cout << test << endl;;
	
}
