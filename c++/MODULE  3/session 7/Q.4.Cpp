#include<iostream>
#include<fstream>
using namespace std;
main(){
    ofstream f1;
    char pName[100];
    double price;
    f1.open("wishlist.txt", ios::out);
    for(int i = 1; i <= 3; i++){
        cout<<"Enter product"<<i<<"name: ";
        cin>>ws;
        cin.getline(pName,100);
        cout<<"Enter price: ";
        cin>>price;
        f1<<pName<<" "<<price<<"\n";
    }
    f1.close();
    ifstream f2;
    f2.open("wishlist.txt", ios::in);
    cout<<"\n--- Wishlist Data ---\n";
    while(f2>>pName>>price){
        cout<<"Product: "<<pName<<" | Price: "<<price<<"\n";
    }
    f2.close();
}
