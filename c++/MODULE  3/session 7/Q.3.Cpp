#include<iostream>
#include<fstream>
using namespace std;
main(){
    ofstream f1;
    char newSong[100];
    cout<<"Enter new song name: ";
    cin.getline(newSong, 100);
    f1.open("my_fav_songs.txt", ios::app);
    f1<<"\n"<<newSong;
    f1.close();
    cout<<"Song Appended Successfully!";
}
