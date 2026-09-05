#include<iostream>
using namespace std;
class socialmediauser{
	public:
	char username[50];
	int followers;
	
	void getprofile(){
		cout<<"\n enter username and followers";
		cin>>username>>followers;
	}
};
class youtuber: protected socialmediauser{
	public:
		char channelname[60];
		char videotitle[60];
		
		void getyoutuberdata(){
			getprofile();
			cout<<"\n enter channel name and videotitle";
			cin>>channelname>>videotitle;
		}
		void uploadvideo(){
			cout<<endl<<"username: "<<username<<endl<<"\t followers: "<<followers;
			cout<<endl<<"video["<<videotitle<<"] uploaded to["<<channelname<<"]";
		}
};
main(){
	youtuber y1;
	y1.getyoutuberdata();
	y1.uploadvideo();
}
