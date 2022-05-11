#include <iostream>
#include <stdlib.h>
#include <time.h>
using namespace std;
class knight{
	private:
		int health;
		int strenght;
		string name;
	public:
		
		knight(int h, int s, string n): health(h), strenght(s), name(n){ }
		
		int get_health(){
			return health;
		}
		void sayHi(){ 
			cout<<"Hi I'am "<< name << " my health is " <<
			health<<"\n";
			} //nothing exciting yet
		//a friend function "fight". "&" denotes passing arguments as a	reference
		// to make possible modification of the input objects
		friend void knight_fight(knight& k1, knight& k2);
		friend class wizzard;
};


class wizzard{
	private:
		int health;
		int mana;
		int power;
		int strength;
		string name;
	public:
		wizzard(int h, int m, int p, int s, string n): health(h), strength(s), name(n), mana(m), power(p){ }
		void sayHi(){ 
			cout<<"Hi I'am "<< name << " my health is " <<
			health<<"\n";
			} 
			
		int get_health(){
			return health;
		}
		
		void wizzard_vs_knight(knight& k1){
			int magic_hit1 = 0, heal1 = 0,  hit1 = 0, hit2 = 0;
			
			cout<<endl<<"hokus pokus!"<<endl;
			cout<<endl<<"Aaaaaaa!"<<endl<<endl;
			
			if(health < 20 && mana > 0){
				heal1 = rand() % power;
				mana = mana - heal1;
				health += heal1; 
				cout << name << " heals for " << heal1 << " he has " << mana << " mana left " << endl; 
				
			}
			
			
			magic_hit1 = rand() % power;
			hit2 = rand() % k1.strenght;
			health = health - hit2;
			k1.health = k1.health - magic_hit1;
			
		}
		
		
		friend void wizzard_fight(wizzard& w1, wizzard& w2);
		
};



void knight_fight(knight& k1, knight& k2){
	int hit1, hit2;
	
	cout<<endl<<"wobodobodoo!"<<endl<<endl;
	hit1 = rand() % k1.strenght;
	hit2 = rand() % k2.strenght;
	k1.health = k1.health - hit2;
	k2.health = k2.health - hit1;
}


void wizzard_fight(wizzard& w1, wizzard& w2){
	int magic_hit1, magic_hit2, heal1, heal2, hit1, hit2;
	
	cout<<endl<<"hokus pokus!"<<endl<<endl;
	
	if(w1.health < 20 && w1.mana > 0){
		heal1 = rand() % w1.power;
		w1.mana = w1.mana - heal1 / 10;
		w1.health += heal1; 
		cout << w1.name << " heals for " << heal1 << " he has " << w1.mana << " left " << endl; 
		
	}
	
	if(w2.health < 20 && w2.mana > 0){
		heal2 = rand() % w2.power;
		w2.mana = w2.mana - heal1 / 10;
		w2.health += heal2; 
		cout << w2.name << " heals for " << heal2 << " he has " << w2.mana << " mana left " << endl; 
	}
	
	hit1 = rand() % w1.power;
	hit2 = rand() % w2.power;
	w1.health = w1.health - hit2;
	w2.health = w2.health - hit1;
}


int main()
{
	knight jozek( 100,50, "Jozek");
	knight zdzich( 100,50, "Zdzichu");
	
	wizzard Archibald(100, 100, 80, 20, "Archibald");
	wizzard Leokadia(100, 100, 50, 40, "Krolowa Leokadia");
	/*
	jozek.sayHi(); zdzich.sayHi();
	srand (time(NULL));
	knight_fight(jozek,zdzich);
	jozek.sayHi(); zdzich.sayHi();
	return 0;
	*/
	
	//Archibald.sayHi(); 
	//Leokadia.sayHi();
	
	/*
	while(Leokadia.get_health() > 0 && Archibald.get_health() > 0){
		srand (time(NULL));
		wizzard_fight(Archibald,Leokadia);
		Archibald.sayHi(); Leokadia.sayHi();
		
		if(Leokadia.get_health() < 0 && Archibald.get_health() > 0){
			cout << "Archibald wins" << endl;
		}
		
		if(Leokadia.get_health() > 0 && Archibald.get_health() < 0){
			cout << "Leokadia wins" << endl;
		}
		
		if(Leokadia.get_health() < 0 && Archibald.get_health() < 0){
			cout << "Its a draw" << endl;
		}
	}
	*/
		Leokadia.sayHi();
		zdzich.sayHi();
	
		while(Leokadia.get_health() > 0 && zdzich.get_health() > 0){
			srand (time(NULL));
			Leokadia.wizzard_vs_knight(zdzich);
			Leokadia.sayHi();
			zdzich.sayHi();
			
			if(Leokadia.get_health() < 0 && zdzich.get_health() > 0){
				cout << "Zdzich wins" << endl;
			}
			
			if(Leokadia.get_health() > 0 && zdzich.get_health() < 0){
				cout << "Leokadia wins" << endl;
			}
			
			if(Leokadia.get_health() < 0 && zdzich.get_health() < 0){
				cout << "Its a draw" << endl;
			}
	}
	

	return 0;
}



