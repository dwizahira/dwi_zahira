#include <iostream>
using namespace std;
int main(){
	char nilai;
	
	cout<<"input nilai anda (A - E)=";
	cin>>nilai;
	
	switch (nilai)
	{
	case 'A':
	cout<<"Pertahankan!"<<endl;
	break;
	case 'B':
	cout<<"harus lebih baik lagi"<<endl;
	break;
	case 'C':
	cout<<"perbanyak belajar"<<endl;
	break;
	case 'D':
	cout<<"jangan keseringan main"<<endl;
	break;
	case 'E':
	cout<<"kebanyakan bolos..."<<endl;
    }
    return 0;
}
