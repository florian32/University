/*
#include <iostream> 
#include <vector>
using namespace std; 
 int a;
int main() { 
    float numbers[2][7][4]; 
	float licznik_tygodniowy = 0;
	float licznik_dobowy = 0;
	float licznik_calkowity = 0;
	int counter = 0;

	vector <float> tygodniowa;
	float calkowita = 0;
	vector <float> dobowa;
 
    cout << "Podaj 6 liczb: " << endl; 
 
    // Zapisywanie liczb do tablicy 
    for (int i = 0; i < 2; ++i) { 
        for (int j = 0; j < 7; ++j) { 
			for (int k = 0; k < 4; ++k){
				cin >> numbers[i][j][k]; 
			}
            
        } 
    } 
 
    cout << "Twoje liczby to: " << endl; 
 
    //  Wyswietlanie liczb 
    for (int i = 0; i < 2; ++i) { 
        for (int j = 0; j < 7; ++j) { 
			for (int k = 0; k < 4; ++k){
				counter++;
				licznik_calkowity += numbers[i][j][k];
				licznik_dobowy += numbers[i][j][k];
				licznik_tygodniowy += numbers[i][j][k];

				if(counter % 2 == 0){
					dobowa.push_back(licznik_dobowy/2);
					licznik_dobowy = 0;
				}

				if(counter % 7 == 0){
					tygodniowa.push_back(licznik_tygodniowy/7);
					licznik_tygodniowy = 0;
				}


				//cout << "numbers[" << i << "][" << j << "][" << k <<"]: " << numbers[i][j][k] << endl; 

			}
        } 
    } 


	for(int i = 0; i<4; i++){
		cout << "Srednia tygodniowa nr: "<<i<<" "<<tygodniowa[i]<<endl;
	}

	for(int i = 0; i<28; i++){
		cout << "Srednia dobowa nr: "<<i<<" "<<dobowa[i]<<endl;
	}

	cout <<"Srednia calkowita: " << licznik_calkowity / counter <<endl;
	cin>>a;
    return 0; 
}
*/