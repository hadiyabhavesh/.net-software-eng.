#include <iostream>
using namespace std;
class InstaStory{
protected:
    int storyViews;
};
class SponsoredStory:public InstaStory{
public:
    void setViews(int v){
        storyViews=v;
    }
    void displayViews(){
        cout<<"Story Views: "<<storyViews<<endl;
    }
};
main(){
    SponsoredStory story;
    story.setViews(1500);
    story.displayViews();
}
