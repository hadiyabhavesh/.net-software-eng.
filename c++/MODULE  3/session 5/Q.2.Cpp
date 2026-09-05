#include<iostream>
using namespace std;
class socialmediauploader{
	public:
		virtual void uploadcontent(){
			cout<<"\n uploading content from social media";
		}
};
class instagramuploader: public socialmediauploader{
	public:
		void uploadcontent(){
			cout<<"\n uploading reel to instagram";
		}
};
class youtubeuploader:public socialmediauploader{
	public:
		void uploadcontent(){
			cout<<"\n uploading video to youtube";
		}
};
main(){
	socialmediauploader *s1;
	instagramuploader insta;
	youtubeuploader yt;
	s1=&insta;
	s1->uploadcontent();
	s1=&yt;
	s1->uploadcontent();
}
