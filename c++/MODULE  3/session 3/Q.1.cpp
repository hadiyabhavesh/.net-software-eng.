#include<iostream>
using namespace std;
class playlist{
	string name;
	
	public:
		 playlist(){
		 	name="MY FAVOURITES";
			cout<<"\n Welcome to my music player!";
			cout<<"\n Default playlist: "<<name;
		}
};
main(){
	playlist p1;
}
