#include <iostream>
using namespace std;
class InstagramAccount{
private:
    char password[30];
public:
    void setPassword(const char pwd[]){
        int i=0;
        while(pwd[i]!='\0'){
            password[i]=pwd[i];
            i++;
        }
        password[i]='\0';
    }
    void likePost(){
        cout<<"Post Liked! (Internal API call & DB update hidden from user)"<<endl;
    }
};
main(){
    InstagramAccount account;
    account.setPassword("mySecret123");
    account.likePost();
}
