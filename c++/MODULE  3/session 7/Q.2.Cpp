#include<iostream>
#include<fstream>
using namespace std;
main(){
	ifstream f2;
	char data[200];
	
	f2.open("my_favourite_song.txt",ios::in);
	cout<<"\n------------SONGS LIST-----";
	while(f2.getline(data,200)){
		cout<<data<<"\n";
	}
	f2.close();
}
