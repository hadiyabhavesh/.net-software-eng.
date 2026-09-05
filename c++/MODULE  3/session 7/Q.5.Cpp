#include<iostream>
#include<fstream>
using namespace std;
main(){
    ofstream f1;
    f1.open("insta_followers.txt", ios::out);
    
    f1<<"gautamgambhir55\n";  
    f1<<"sunilnarine24\n";     
    f1<<"andre_russell12\n";  
    f1<<"robinuthappa\n";      
    f1<<"rinkusingh12\n";      
    f1<<"shreyas41\n";      
    f1<<"yusuf_pathan\n";     
    f1<<"piyushchawla_official\n"; 
    f1<<"shakib.75\n";        
    f1<<"varunchakravarthy9\n"; 
    
    f1.close();
    ifstream f2;
    char data[100];
    int count = 0;
    f2.open("insta_followers.txt", ios::in);
    while(f2.getline(data, 100)){
        if(data[0] != '\0'){
            count++;
        }
    }
    f2.close();
    cout<<"Total Followers Count: "<<count;
}
