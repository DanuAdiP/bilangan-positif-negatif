#include<iostream>
using namespace std;

int main()
{
	int bil;
	cout<<"Nama  = Danu Adiputra"<<endl;
	cout<<"NIM   = 311810929"<<endl;
	cout<<"Kelas = 18.B.2"<<endl<<endl;
	cout<<"PROGRAM MENGETAHUI BILANGAN POSITIF DAN NEGATIF"<<endl<<endl;
	cout<<"Masukkan angka = ";cin>>bil;
	cout<<bil;
	if(bil<0)
	cout<<" adalah bilangan negatif";
	else if(bil>0)
	cout<<" adalah bilangan positif";
	return 0;
	}
