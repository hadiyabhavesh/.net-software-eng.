#include <iostream>
using namespace std;
class Product{
public:
    virtual void upload()=0;
};
class Electronics:public Product{
public:
    void upload(){
        cout<<"Uploading Electronics item: Laptop added to catalog."<<endl;
    }
};
class Clothing:public Product{
public:
    void upload(){
        cout<<"Uploading Clothing item: Jacket added to catalog."<<endl;
    }
};
main(){
    Electronics e;
    Clothing c;
    e.upload();
    c.upload();
}
