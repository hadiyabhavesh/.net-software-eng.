#include<iostream>
#include<fstream>
using namespace std;
main(){
	ofstream f1;
	f1.open("my_favourite_song.txt",ios::out);
	f1<<"\n YEH AWARAPAN";
	f1<<"\n SULTAN TITLE TRACK";
	f1<<"\n KAR HAR MAIDAAN FATEH";
	f1<<"\n TOH PHIR AAO";
	f1<<"\n PAISA HAI TOH";
	f1.close();
	cout<<"\n 5 songs written: ";
}
