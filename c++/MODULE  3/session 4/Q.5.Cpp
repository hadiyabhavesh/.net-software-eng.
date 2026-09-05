#include<iostream>
using namespace std;
class socialmediauser{
public:
    char username[50];
    long long followers;

    void getprofile(){
        cout<<"\n Enter username and followers: ";
        cin>>username>>followers;
    }
};
class InstagramInfluencer : public socialmediauser{
public:
    char storyTitle[60];
    
    void postStory(){
        getprofile();
        cout<<"\n Enter story title: ";
        cin>>storyTitle;
        cout<<"\n ["<<username<<"] posted a new story: ["<<storyTitle<<"]";
    }
};
main(){
    InstagramInfluencer insta1;
    insta1.postStory();
}
