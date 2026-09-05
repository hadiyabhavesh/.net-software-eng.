#include<iostream>
using namespace std;
class playlist{
	string name;
	string createdOn;
	bool ispublic;
	string songs[20];
	int songscount;
	
	public:
		playlist(){
			songscount=0;
		}
		void getplaylist(){
			cout<<"\n Enter playlist name createdOn ispublic: ";
			cin>>name>>createdOn>>ispublic;
		}
		void addsongs(string songstitle){
			songs[songscount]=songstitle;
			songscount++;
		}
		void showplaylist(){
			cout<<"\n name="<<name;
			cout<<"\n createdOn="<<createdOn;
			cout<<"\n ispublic="<<ispublic;
			cout<<"\n----songs list---";
			for(int i=0;i<songscount;i++){
				cout<<"\n songscount"<<i+1<<":"<<songs[i];
			}
			cout<<"\n";
		}
};
main(){
	playlist p1;
	p1.getplaylist();
	p1.addsongs("YEH AWARAPAN");
	p1.addsongs("JALWA");
	p1.addsongs("PAISA HAI TOH");
	p1.showplaylist();
}
