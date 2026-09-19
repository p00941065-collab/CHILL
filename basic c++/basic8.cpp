#include<bits/stdc++.h>
using namespace std;

int main() {
    cout<<"PLEASE ENTER THE MARKS OF THE STUDENT"endl;
    string x;
    getline(cin,x);
    cout<<"HELLO PLEASE ENTER YOUR MARKS  "<<x<<endl;
    int y;
    cin>>y;
    

    if(y<=44) {
        cout<<"GRADE OF STUDENT"<<x<<"IS E"<<endl;
    }
        else if(y<=59&&y>44) {
        cout<<"GRADE OF STUDENT"<<x<<"IS D"<<endl;  
        }
     
        return 0;
    }
    