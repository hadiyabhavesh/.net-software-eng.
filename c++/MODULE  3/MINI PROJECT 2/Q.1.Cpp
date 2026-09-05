#include <iostream>
using namespace std;
struct Content{
    char title[100];
    char platform[50];
    int views;
    char status[30];
    void display_details(){
        cout<<"Title: "<<title<<"\n";
        cout<<"Platform: "<<platform<<"\n";
        cout<<"Views: "<<views<<"\n";
        cout<<"Status: "<<status<<"\n--------------------\n";
    }
};
main(){
    Content c1={"My First Video","YouTube",6700,"Uploaded"};
    c1.display_details();
}
