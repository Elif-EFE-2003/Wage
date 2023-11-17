#include <iostream>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
class Calisan{
	private:
		string Ad;
		int Ucret;
		int Saat;
	public:
		int getSaat(){return Saat;}
		int getUcret(){return Ucret;}
		string getAd(){return Ad;}
		void setSaat(int a){Saat=a;}
		void setUcret(int b){Ucret=b;}
		void setAd(string c){Ad=c;}
		Calisan(string c,int a):Ad(c),Saat(a){}	
};

class isci:public Calisan{
	public:
	isci(string c,int a):Calisan(c,a){
		setUcret(50);
	}
};

class muhendis:public Calisan{
	public:
	muhendis(string c,int a):Calisan(c,a){
		setUcret(100);
	}
};

class MaasHesapla{
	public:
		int hesapla(Calisan calisan){
			return calisan.getSaat()*calisan.getUcret();
		}
};
int main(int argc, char** argv) {
	muhendis calisan1("Ali",2);
	isci calisan2("Ayse",3);
	MaasHesapla hesaplayici;
    cout << hesaplayici.hesapla(calisan1) << endl; 
    cout << hesaplayici.hesapla(calisan2) << endl; 
	return 0;
}
