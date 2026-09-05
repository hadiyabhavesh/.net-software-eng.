#include<iostream>
#include<string.h>
using namespace std;
class task{
	public:
		string name;
		int isDone; 
};
class tasklist{
	public:
		task list[20];
		int total = 0;
		int i;
		
		void addtask(string t){
			list[total].name=t;
			list[total].isDone=0;
			total++;
		}
		void marktaskDone(int index){
			list[index].isDone=1;
		}
		void showtask(){
			cout<<"\n MY TASKS:\n";
			for(i=0;i<total;i++){
				cout<<i+1<<"."<<list[i].name;
				if(list[i].isDone==1){
					cout<<"\n->DONE \n";
				}else{
					cout<<"\n->NOT DONE \n";
				}
			}
		}
};
main(){
	tasklist mytasks;
	mytasks.addtask("ASSIGNMENT IS COMEPLETED");
	mytasks.addtask("WATCHING C++ VIDEO ON YOUTUBE");
	mytasks.addtask("C PROGRAMMING WORK");
	mytasks.marktaskDone(0);
	mytasks.showtask();
}
