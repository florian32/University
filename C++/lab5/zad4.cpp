#include <iostream>
#include <string>
using namespace std;

int main(){
	
	string test = "leosia", test1;
	string full = "young leosia";
	int test2, test3, test4;
	test1 = test.substr(2);
	cout << test1 << endl;;
	test2 = test.find("s");
	cout << test2 << endl;
	test3 = test.find_first_of("osi");
	test4 = test.find_last_of("osi");
	cout << test3 << endl;
	cout << test4 << endl;
	cout << test.insert(2, "young") << endl;
	cout << test.replace(2, 3, "young") << endl;
	cout << test.compare(full) << endl;
	
}
