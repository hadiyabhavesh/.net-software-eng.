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
            cout<<"No Data in File!\n";
        }
        else{
            cout<<"--- CURRENT ITEMS ---\n";
            for(int i=0;i<total;i++){
                cout<<i+1<<". Title: "<<list[i].title<<" | Platform: "<<list[i].platform<<" | Views: "<<list[i].views<<" | Status: "<<list[i].status<<"\n";
            }

            int num;
            cout<<"\nEnter item number to update: ";
            cin>>num;
            
            if(num>=1 && num<=total){
                cin.ignore();
                cout<<"Enter new Status: ";
                cin.getline(list[num-1].status,30);

                ofstream f1;
                f1.open("content_list.txt",ios::out);
                for(int i=0;i<total;i++){
                    f1<<list[i].title<<","<<list[i].platform<<","<<list[i].views<<","<<list[i].status<<"\n";
                }
                f1.close();
                cout<<"\nStatus Updated Successfully!\n";
            }
            else{
                cout<<"Invalid Number Entered! Please enter between 1 and "<<total<<"\n";
            }
        }
    }
}
