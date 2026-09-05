#include <iostream>
using namespace std;
class UserProfile{
private:
    char phoneNumber[15];
public:
    void setPhoneNumber(const char num[]){
        int i=0;
        while(num[i]!='\0'){
            phoneNumber[i]=num[i];
            i++;
        }
        phoneNumber[i]='\0';
    }
    const char*getPhoneNumber(){
        return phoneNumber;
    }
};
main(){
    UserProfile user;
    user.setPhoneNumber("+919876543210");
    cout<<"User Phone Number: "<<user.getPhoneNumber()<<endl;
}
