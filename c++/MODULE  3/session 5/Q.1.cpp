#include <iostream>
using namespace std;
class Song{
private:
    char title[50];
    char artist[50];
public:
    void setTitle(const char t[]){
        int i = 0;
        while (t[i]!='\0'){
            title[i]=t[i];
            i++;
        }
        title[i]='\0';
    }
    const char*getTitle(){
        return title;
    }
    void setArtist(const char a[]){
        int i=0;
        while(a[i]!='\0'){
            artist[i]=a[i];
            i++;
        }
        artist[i]='\0';
    }
    const char*getArtist(){
        return artist;
    }
};
main(){
    Song s1;
    s1.setTitle("Tu hai ke nahi");
    s1.setArtist("Arjit singh");
    cout<<"Original Title: "<<s1.getTitle()<<endl;
    s1.setTitle("Perfect");
    cout<<"Updated Title: "<<s1.getTitle()<<endl;
}
