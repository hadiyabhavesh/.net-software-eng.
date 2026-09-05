#include<iostream>
using namespace std;
class socialmediauser{
	public:
	char username[40];
	int followers;
	
	void displayprofile(){
		cout<<"\n username:"<<username;
		cout<<"\n followers"<<followers;
	}
};
main(){
	socialmediauser user1 = {"rohit.sharma", 270000000};
    cout << "--- Social Media User Profile ---";
    user1.displayprofile();
}
