#include<iostream>
using namespace std;
class ticket{
	const char*moviename;
	
	public:
		ticket(const char*m){
			moviename=m;
			cout<<"\n ticket created for: "<<moviename;
		}
		ticket(){
			cout<<"\n saving your ticket.....";
		}
};
main(){
	ticket t1("AWARAPAN");
}
