#include<iostream>
using namespace std;
class playlist{
	string name;
	string createdOn;
	bool ispublic;
	
	public:
		void getplaylist(){
			cout<<"\n Enter playlist name createdOn ispublic: ";
			cin>>name>>createdOn>>ispublic;
		}
		void showplaylist(){
			cout<<"\n name="<<name;
			cout<<"\n createdOn="<<createdOn;
			cout<<"\n ispublic="<<ispublic;
		}
};
main(){
	playlist p1;
	p1.getplaylist();
	p1.showplaylist();
}
