#include <iostream>
using namespace std;


class Student{
	private:
		string imie;
		string nazwisko;
		int index;
	
	public:
		Student(string, string, int);
		
		void Set_firstName(string name){
			imie = name;
		}
		
		void Set_indexNumber(int number){
			index = number;
		}
		
		void Set_lastName(string lname){
			nazwisko = lname;
		}
		
		string Get_firstName(){
			return imie;
		}
		
		string Get_lastName(){
			return nazwisko;
		}
		
		int Get_indexNumber(){
			return index;
		}
		
};

Student::Student(string a, string b, int c){
	imie = a;
	nazwisko = b;
	index = c;
}


int main(){
	Student obiekt("Florian", "M", 21);
	obiekt.Set_firstName("leosia");
	cout << obiekt.Get_firstName() << endl;
}








