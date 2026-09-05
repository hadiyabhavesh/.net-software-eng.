#include<iostream>
using namespace std;
class movie{
	const char*title;
	
	public:
		movie(const char*t){
			title=t;
		}
		movie(const movie &m){
			title=m.title;
		}
		void displayInfo(){
			cout<<"\n movie title: "<<title;
		}
};
main(){
	movie m1("AWARAPAN 2");
	cout<<"\n original movie:";
	m1.displayInfo();
	movie m2=m1;
	cout<<"\n copied movie:";
	m2.displayInfo();
}
