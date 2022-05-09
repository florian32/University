#include <iostream>
using namespace std;


class CellPhone{
	private:
		static double profit;
		double netto_price;
	public:
		static double vat;
		
		CellPhone();
		
		void set_nettoPrice(double a){
			netto_price = a;
		}
		
		double get_profit(){
			return profit;
		}
		
		double get_nettoPrice(){
			return netto_price;
		}
		
		double get_vat(){
			return vat;
		}
		
		double get_price(){
			return (netto_price + profit + vat * netto_price);
		}
		
};

// WAZNE!!! Pola statyczne nalezy zadeklarowac w miejscu, w tkorym deklarujemy zmienne globalne

double CellPhone::vat = 0.23;
double CellPhone::profit = 200;

int main(){
	CellPhone SonyEricson;
	SonyEricson.set_nettoPrice(245);
	cout << SonyEricson.get_price() << endl;
}



