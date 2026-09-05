#include<iostream>
#include<fstream>
using namespace std;
struct Content{
    char title[100];
    char platform[50];
    int views;
    char status[30];
};
main(){
    Content c;
    cout<<"Enter Title: ";
    cin.getline(c.title,100);
    cout<<"Enter Platform: ";
    cin.getline(c.platform,50);
    cout<<"Enter Views: ";
    cin>>c.views;
    cin.ignore();
    cout<<"Enter Status: ";
    cin.getline(c.status,30);

    ofstream f1;
    f1.open("content_list.txt",ios::app);
    f1<<c.title<<","<<c.platform<<","<<c.views<<","<<c.status<<"\n";
    f1.close();
    cout<<"Content Saved Successfully!\n";
}
