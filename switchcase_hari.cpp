#include <iostream>
using namespace std;
int main(){
	char hari;
	cout<<"masukkan nama hari(1-7)=";
	cin>>hari;
	switch (hari){
		case '1':
			cout<<"hari senin"<<endl;
			break;
		case '2':
			cout<<"hari selasa"<<endl;
			break;
		case '3':
			cout<<"hari rabu"<<endl;
			break;
		case '4':
			cout<<"hari kamis"<<endl;
			break;
		case '5':
			cout<<"hari jumat"<<endl;
			break;
		case '6':
			cout<<"hari sabtu"<<endl;
			break;
		case '7':
			cout<<"hari minggu"<<endl;
			break;
	}
}
