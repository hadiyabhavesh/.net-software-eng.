#include<iostream>
#include<fstream>
using namespace std;
class playlist{
	const char*name;
	
	public:
		playlist(){
		name="MY FAVOURITES";	
	}
	~playlist(){
		ofstream f1;
		f1.open("autosave.txt",ios::out);
		f1<<"playlist name: "<<name;
		f1.close();
		cout<<"\n auto saved playlist to autosave.txt";
	}
};
main(){
	playlist p1;
}
