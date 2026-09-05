#include<iostream>
using namespace std;
class flipkartsearch{
	public:
		void searchproduct(const char*productname){
			cout<<"\n searching for product: "<<productname;
		}
    	void searchproduct(const char*productname,const char*category){
    		cout<<"\n searching for product: "<<productname<<"in category: "<<category;
		}
};
main(){
	flipkartsearch f1;
	f1.searchproduct("iphone 18");
	f1.searchproduct("iphone 18","[electronics]");
}
