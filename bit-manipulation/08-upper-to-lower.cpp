#include<iostream>
using namespace std;

int main(){
    char ch;
    cout<<"ENTER LOWERCASE CHARACTER: ";
    cin>>ch;
    ch = ch^(1<<5);
    cout<<ch<<endl;
    char ch1;
    cout<<"ENTER UPPERCASE CHARACTER: ";
    cin>>ch1;
    ch1 = ch1|(1<<5);
    cout<<ch1<<endl;


    return 0;   
}