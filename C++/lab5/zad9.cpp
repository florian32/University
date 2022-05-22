#include <iostream> 
#include <stdlib.h>
#include <time.h>
#include <random>
using namespace std; 
 
class knight{ 
	private: 
	    int health; 
	    int strenght; 
	    string name; 
	public: 
		knight() {health=100; strenght = 100; 
		};
		
	    knight(int h, int s, string n): health(h), strenght(s), name(n){ } 
	    void sayHi(){ cout<<"Hi I'am "<< name << " my health is " << 
	health<<"\n";} //nothing exciting yet 
	    //a friend function "fight".  "&" denotes passing arguments as a reference 
	
		int get_health(){
			return health;
		}
		
		int get_strenght(){
			return strenght;
		}

		void set_strenght(int nowa){
			strenght = nowa;
		}
		
		void set_name(string nowa){
			name = nowa;
		}
		
		void set_health(int nowa){
			health = nowa;
		}
		
		string get_name(){
			return name;
		}
	    // to make possible modification of the input objects 
	    friend void fight(knight& k1, knight& k2); 
  }; 
 
void fight(knight& k1, knight& k2){ 
    int hit1, hit2;
    
    random_device dev;
    mt19937 rng(dev());
    uniform_int_distribution<std::mt19937::result_type> dist6(1,k1.strenght);
	uniform_int_distribution<std::mt19937::result_type> dist8(1,k2.strenght);  
    
    
    
        
        
	cout<<endl << k1.get_name() << " " << k1.get_health() <<"  vs  "<< k2.get_name() << " " << k2.get_health() <<endl<<endl; 
    hit1  = dist6(rng); 
    hit2  = dist8(rng); 
    k1.health = k1.health - hit2; 
    k2.health = k2.health - hit1; 
    
} 
 
 
int main() 
{ 
	int wynik_orkow = 0; 
	int wynik_krasnali = 0; 
 	
 	knight *elfs;
 	elfs = new knight[5];
 	
 	
 	
// 	knight orks[] = {
//		knight ( 100,100, "Jozek"), 
//    	knight ( 100,100, "Stach"), 
//    	knight ( 100,100, "Leosia"), 
//    	knight ( 100,100, "Oliwka" ), 
//    	knight ( 100,100, "Bonus BGC") 
//		};
//		
//		
// 	knight dwarfs[] = {
//		knight ( 100,100, "Gimli"), 
//    	knight ( 100,100, "Gloin"), 
//    	knight ( 100,100, "Bifur"), 
//    	knight ( 100,100, "Bombur" ), 
//    	knight ( 100,100, "Balin") 
//		};	
		
// 	for(int i = 0; i < 5; i++){
// 		
//	
// 		while(orks[i].get_health() > 0 && dwarfs[i].get_health() > 0){
// 			srand (time(NULL));
// 			fight(orks[i], dwarfs[i]);
// 			
// 			if(orks[i].get_health() > 0 && dwarfs[i].get_health() <= 0){
// 				cout << "Wygrywa: " << orks[i].get_name() << endl;
// 				wynik_orkow ++;
// 				
//			 }else if(orks[i].get_health() <= 0 && dwarfs[i].get_health() > 0){
//			 	wynik_krasnali++;
//			 	cout << "Wygrywa: " << dwarfs[i].get_name() << endl;
//			 }else if(orks[i].get_health() <= 0 && dwarfs[i].get_health() <= 0)
//			 	cout << " remis " << endl;
//			 
//		}
//	}
// 
//	cout << " wyniki krasnali: " << wynik_krasnali << endl << "wyniki orkow: " << wynik_orkow << endl;
 
 
 elfs[3].set_health(200);
 
 cout << elfs[3].get_health() << endl;
 
    return 0; 
}






