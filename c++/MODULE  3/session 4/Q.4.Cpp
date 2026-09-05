#include<iostream>
using namespace std;
class socialmediauser{
public:
    char username[50];
    int followers;

    void getprofile(){
        cout<<"\n Enter username and followers: ";
        cin>>username>>followers;
    }
};
class youtuber : public socialmediauser{
public:
    char channelname[60];

    void getyoutuberdata(){
        cout<<"\n Enter channel name: ";
        cin>>channelname;
    }
};
class gamingyoutuber : public youtuber{
public:
    char gamename[60];

    void getgamingdata(){
        getprofile();
        getyoutuberdata();
        cout<<"\n Enter game name: ";
        cin>>gamename;
    }
    void streamgame(){
        cout<<"\n username: "<<username<<"\t followers: "<<followers;
        cout<<"\n "<<username<<" is streaming ["<<gamename<<"] on ["<<channelname<<"]";
    }
};
main(){
    gamingyoutuber g1;
    g1.getgamingdata();
    g1.streamgame();
}
