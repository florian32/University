#include <iostream>
#include <cmath>
using namespace std;


class Triangle
{
	private:
		double sidea, sideb, sidec;
		
	public:
		Triangle (double, double, double);
		Triangle();
		~Triangle(void);
		
	double area () {
		double p;
		p = (sidea + sideb + sidec) / 2; 	
		return sqrt(p * (p - sidea) * (p - sideb) * (p - sidec));
	}
			
			
};

class EgyptianTriangle
{
	private:
		double sidea = 3.0, sideb = 4.0, sidec = 5.0;
		
	public:
		EgyptianTriangle ();
		
	double area () {
		double p;
		p = (sidea + sideb + sidec) / 2; 	
		return sqrt(p * (p - sidea) * (p - sideb) * (p - sidec));
	}
			
			
};

Triangle:: Triangle(double a, double b, double c){
	sidea = a;
	sideb = b;
	sidec = c;
}
Triangle:: Triangle(){
	sidea = 3.0;
	sideb = 4.0;
	sidec = 5.0;
}

Triangle:: ~Triangle(){
	cout << "zostaje usuniety, a moje boki to: " << sidea << sideb << sidec <<endl;
}



EgyptianTriangle:: EgyptianTriangle(){
	sidea = 3.0;
	sideb = 4.0;
	sidec = 5.0;
}

int main()
{
	double a, b, c;
	cout << "podaj 3 boki trojkata"<<endl;
	cin >> a;
	cin >> b;
	cin >> c;
	Triangle trojkat(a, b, c);
	cout << "pole wynosi: "<<trojkat.area()<<endl;
	cout << "podaj 3 boki trojkata nr 2"<<endl;	
	cin >> a;
	cin >> b;
	cin >> c;
	Triangle drugi_trojkat(a, b, c);
	cout << "pole wynosi: "<<drugi_trojkat.area()<<endl;
	
	Triangle dziwak;
	cout << "dziwak: " << dziwak.area() << endl;
}
