#include<iostream>
using namespace std;
class foodOrder{
	int OrderId;
	string RestaurantName;
	bool IsDelivered;
	
	public:
		void getOrder(){
			cout<<"\n Enter OrderId Restaurant Name IsDelivered: ";
			cin>>OrderId>>RestaurantName>>IsDelivered;
		}
		void markDelivered(){
			IsDelivered=true;
			cout<<"\n Your Order IS Delivered Successfully!";
		}
		void showOrder(){
			cout<<"\n OrderId="<<OrderId;
			cout<<"\n RestaurantName="<<RestaurantName;
			cout<<"\n IsDelivered="<<IsDelivered;
		}
};
main(){
	foodOrder f1;
	f1.getOrder();
	cout<<"\n--------Before Delivery--";
	f1.showOrder();
	f1.markDelivered();
	cout<<"\n--------After Delivery--";
	f1.showOrder();
}
