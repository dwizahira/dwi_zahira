#include <iostream>
using namespace std;
int main(){
	int nilai;
	cout <<"masukkan nilai mahasiswa:";
	cin>>nilai;
	
	if(nilai>=90)
	{
		cout <<"nilai mahasiswa A"<<endl;
	}
	else if(nilai>=80)
	{
		cout <<"nilai mahasiswa B"<<endl;
	}
	else if(nilai>=70)
	{
		cout<<"nilai mahasiswa C"<<endl;
	}
	else if(nilai>=60)
	{
		cout<<"nilai mahasiswa D"<<endl;
	}
	else if(nilai>=50)
	{
		cout<<"nilai mahasiswa E"<<endl;
	}
	else
	{
		cout<<"anda tidak lulus";
	}
}
