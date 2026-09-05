#include<iostream>
using namespace std;
main(){
	char str[5][50];
	int i,n;
	cout<<"\n Enter the number of string you want to add: ";
	cin>>n;
	for(i=0;i<n;i++){
		cout<<"\n Enter the string: ";
		cin>>str[i];
	}
	cout<<"\n The strings you mention are: ";
	for(i=0;i<n;i++){
		cout<<"\n"<<str[i];
	}
}
