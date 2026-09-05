#include<iostream>
#include<string.h>
using namespace std;
char task[5][50];
char status[5][10];

void markTaskDone(int index){
    strcpy(status[index], "DONE");
}
main(){
    int a, index;
    cout<<"Enter the number of tasks you want to enter: ";
    cin>>a;
    for (int i=0;i<a;i++){
        cout<<"Enter your task: ";
        cin>>task[i];
        strcpy(status[i], "PENDING");
    }
    cout<<"\nEnter task number to mark as DONE: ";
    cin>>index;
    markTaskDone(index - 1);
    cout<<"\nUpdated Task List:\n";
    for (int i=0;i<a;i++){
        cout<<"\n"<<i+1<<"."<<task[i]<<"-"<<status[i];
    }
}
