#include<iostream>
#include<string.h>
using namespace std;
class task{
	public:
		char title[50];
		int isDone;
		void markDone(){
			isDone = true;
		}
		 void display(){
        cout<<"\nTask: "<< title;
        if(isDone)
            cout<<"\nstatus: DONE";
        else
            cout<<"\nstatus: NOT DONE";
    }
};
main(){
	task t1;
	strcpy(t1.title,"complete Assignment");
	t1.isDone = false;
	t1.markDone();
	t1.display();
}
