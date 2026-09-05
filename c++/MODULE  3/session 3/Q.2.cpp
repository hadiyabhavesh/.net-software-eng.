#include<iostream>
using namespace std;
class product{
	const char*ProductName;
	float Price;
	float Rating;
	
	public:
		product(const char*pName,float pPrice,float pRating){
		ProductName=pName;
		Price=pPrice;
		Rating=pRating;
   }
   void displayInfo(){
   	cout<<"\n------PRODUCT DETAILS------";
   	cout<<"\n name:  "<<ProductName;
   	cout<<"\n Price: "<<Price;
   	cout<<"\n Rating: "<<Rating;
   }
};
main(){
	product p1("WIRELESS BOAT 219 EARBUDS",1500.00,4.4);
	p1.displayInfo();
}
