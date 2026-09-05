#include<iostream>
#include<fstream>
using namespace std;
struct Content{
    char title[100];
    char platform[50];
    int views;
    char status[30];
};
main(){
    ifstream f2;
    f2.open("content_list.txt",ios::in);
    if(!f2){
        cout<<"File Not Found!\n";
    }
    else{
        Content list[100];
        int total=0;
        while(f2.getline(list[total].title,100,',')){
            f2.getline(list[total].platform,50,',');
            f2>>list[total].views;
            f2.ignore();
            f2.getline(list[total].status,30);
            total++;
        }
        f2.close();
        if(total==0){
            cout<<"No Items Found in File!\n";
        }
        else{
            cout<<"--- CURRENT LIST ---\n";
            for(int i=0;i<total;i++){
                cout<<i+1<<". "<<list[i].title<<" ("<<list[i].platform<<")\n";
            }
            int num;
            cout<<"\nEnter item number to delete: ";
            cin>>num;

         if(num>=1 && num<=total){
                ofstream f1;
                f1.open("content_list.txt",ios::out);
                for(int i=0;i<total;i++){
                    if(i==(num-1)) continue;
                    f1<<list[i].title<<","<<list[i].platform<<","<<list[i].views<<","<<list[i].status<<"\n";
                }
                f1.close();

                cout<<"\nItem Deleted Successfully!\n";
                ifstream f3;
                f3.open("content_list.txt",ios::in);
                char t[100], p[50], s[30];
                int v, count=1;
                cout<<"\n--- UPDATED LIST ---\n";
                while(f3.getline(t,100,',')){
                    f3.getline(p,50,',');
                    f3>>v;
                    f3.ignore();
                    f3.getline(s,30);
                    cout<<count<<". "<<t<<" ("<<p<<")\n";
                    count++;
                }
                if(count==1){
                    cout<<"(List is empty)\n";
                }
                f3.close();
            }
            else{
                cout<<"Invalid Input Number!\n";
            }
        }
    }
}
