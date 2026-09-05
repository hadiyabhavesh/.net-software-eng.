#include<iostream>
#include<fstream>
using namespace std;
main(){
    ifstream f2;
    f2.open("content_list.txt",ios::in);
    if(!f2){
        cout<<"No Data Found!\n";
    }
    else{
        char title[100],platform[50],status[30];
        int views,count=1;
        cout<<"--- CONTENT LIST ---\n";
        while(f2.getline(title,100,',')){
            f2.getline(platform,50,',');
            f2>>views;
            f2.ignore();
            f2.getline(status,30);
            cout<<count<<". Title: "<<title<<" | Platform: "<<platform<<"\n";
            count++;
        }
        f2.close();
    }
}
