#include<iostream>
using namespace std;
class MusicPlayer{
	public:
		virtual void play(const char*song){
			cout<<"\n Playing: "<<song;
		}
};
class SpotifyPlayer:public MusicPlayer{
	public:
		void play(const char*song){
			cout<<"\n Streaming on Spotify: "<<song;
		}
};
main(){
	MusicPlayer *player;
	SpotifyPlayer spotify;
	player=&spotify;
	player->play("Tera mera rishta");
}
