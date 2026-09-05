#include<iostream>
using namespace std;
// Base Class (Parent)
class socialmediauser{
public:
    char username[50];
    int followers;

    void getprofile(){
        cout<<"\n Enter username and followers: ";
        cin>>username>>followers;
    }
};
class youtuber : public socialmediauser {
public:
    char channelname[60];
    char videotitle[60];

    void getyoutuberdata(){
        getprofile();
        cout<<"\n Enter channel name and videotitle: ";
        cin>>channelname>>videotitle;
    }

    void uploadvideo(){
        cout<<"\n username: "<<username<<"\t followers: "<<followers;
        cout<<"\n video ["<<videotitle<<"] uploaded to ["<<channelname<<"]";
    }
};
class podcaster : public socialmediauser{
public:
    char podcastname[60];
    char episodetitle[60];

    void getpodcasterdata(){
        getprofile();
        cout<<"\n Enter podcast name and episode title: ";
        cin>>podcastname>>episodetitle;
    }

    void publishepisode(){
        cout<<"\n username: "<<username<<"\t followers: "<<followers;
        cout<<"\n episode ["<<episodetitle<<"] published on ["<<podcastname<<"]";
    }
};

main(){
    int ch;
    cout<<"\n Press 1 for YouTuber";
    cout<<"\n Press 2 for Podcaster";
    cout<<"\n Enter your choice: ";
    cin>>ch;

    if(ch==1){
        youtuber y1;
        y1.getyoutuberdata();
        y1.uploadvideo();
    }
    else if(ch==2){
        podcaster p1;
        p1.getpodcasterdata();
        p1.publishepisode();
    }
    else{
        cout<<"\n Wrong choice";
    }
}
