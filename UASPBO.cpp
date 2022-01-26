/*
	NAMA 	: VIKY NUR ALLIFI
	NIM		: 20030024
	Prodi	: Informatika
	
	--------------------------------------
	Program Menghitung Bangun Ruang Tabung
	 Denga menerapkann konsep Inheritance
	--------------------------------------
*/
#include <iostream>
#include <conio.h>
using namespace std;

// supperclass
class bangun_tabung {
	protected:
		int panjang, lebar, jari;
		double phi=3.14;
		
	public:
		virtual void get_data()=0;
		virtual void display_area()=0;
};

// subclass
class luas_tabung : public bangun_tabung
{
   	public:
    void get_data(void)
    {
       	cout<<"\n\n Menghitung Luas Selimut Tabung\n";
       	cout<<" ------------------------------\n";
       	cout<<" Masukan Panjang   = "; cin>>panjang;
       	cout<<" Masukan Lebar     = "; cin>>lebar;
    }
    void display_area(void){
    	double luas;
       	luas = panjang * lebar;
       	cout<<"\n Perhitungan :";
       	cout<<"\n -------------";
       	cout<<"\n * Dik : panjang = "<<panjang<<" cm";
       	cout<<"\n         lebar   = "<<lebar<<" cm";
       	cout<<"\n\n * Dit : luas selimut tabung";
       	cout<<"\n\n * Penyelesaian\n";
       	cout<<"   luas selimut = panjang x lebar\n";
       	cout<<"                = "<<panjang;
       	cout<<"\n                = "<<luas;
       	cout<<"\n\n    => Jadi luas selimut tabung dengan ukuran panjang "<<panjang<<" cm" 
		   <<"\n       dan lebar "<<lebar<<" cm"<<" adalah "<<luas<<" cm";
    }
};

// subclass
class volume_tabung : public bangun_tabung
{
   public:
    void get_data(void)
    {
       cout<<"\n\n Menghitung Volume Tabung\n";
       cout<<" ------------------------\n";
       cout<<" Masukan Panjang   = "; cin>>panjang;
       cout<<" Masukan Lebar     = "; cin>>lebar;
       cout<<" Masukan Jari-Jari = "; cin>>jari;
    }
    void display_area(void)
    {
    	double volume;
		volume = phi * jari * jari * lebar;
       	cout<<"\n Perhitungan :";
       	cout<<"\n -------------";
        cout<<"\n * Dik : panjang   = "<<panjang;
        cout<<"\n         lebar     = "<<lebar;
        cout<<"\n         jari-jari = "<<jari;
        cout<<"\n\n * Dit : volume tabung";
        cout<<"\n\n * Penyelesaian\n";
        cout<<"   volume tabung = phi x jari x jari x lebar\n";
        cout<<"                 = "<<phi<<" x "<<jari<<" x "<<jari<<" x "<<lebar;
        cout<<"\n                 = "<<volume;
        cout<<"\n\n    => Jadi volume tabung dengan ukuran panjang "<<panjang<<" cm" 
		   <<"\n       lebar "<<lebar<<" cm"<<" dan jari-jari "<<jari<<" cm"<<" adalah "<<volume<<" cm";
	}

};

// main method
int main(){
	system("cls");
	luas_tabung luas;
	volume_tabung volume;
	
	bangun_tabung *list[2];
	list[0]=&luas;
	list[1]=&volume;
	
	int pilih;
	while(1){
		system("cls");
		cout<<"============================================================\n";
		cout<<"| Selamat Datang di Program Menghitung Bangun Datar Tabung |\n";
		cout<<"============================================================\n";
		cout<<"\n Apa Yang Ingin Anda Hitung??\n";
		cout<<" 1) Luas Selimut Tabung\n";
		cout<<" 2) Volume Tabung\n";
		cout<<" 3) Exit\n";
		cout<<"\n Masukkan Pilihan: ";
		cin>>pilih;
		
		if(pilih==1){
			list[0]->get_data();
			list[0]->display_area();
			getch();
		}
		else if(pilih==2){
			list[1]->get_data();
			list[1]->display_area();
			getch(); 	
		}
		else exit(1);
	}
}
