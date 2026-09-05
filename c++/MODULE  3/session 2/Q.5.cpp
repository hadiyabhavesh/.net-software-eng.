#include<iostream>
using namespace std;
class foodOrder{
	int OrderId;
	string RestaurantName;
	bool isDelivered;
	 
	public:
	foodOrder(int id,string name,bool status){
		OrderId=id;
		RestaurantName=name;
		isDelivered=status;
	}
	foodOrder(const foodOrder&obj){
		OrderId=obj.OrderId;
		RestaurantName=obj.RestaurantName;
		isDelivered=obj.isDelivered;
	}
	void display(){
		cout<<"\n OrderId="<<OrderId;
		cout<<"\n RestaurantName="<<RestaurantName;
		cout<<"\n isDelivered="<<isDelivered;
	}
};
main(){
	foodOrder OrderDetails(201,"PIZZA HUT",0);
	foodOrder f1(OrderDetails);
	f1.display();
}


