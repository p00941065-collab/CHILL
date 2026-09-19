#include<bits/stdc++.h>
using namespace std;


void familymembersinput() {
    int x;
cout<<"HOW MANY FAMILY MEMBERS ARE THERE SON::::"<<endl;
cin>>x;
    
    string arr[x];
    int i;
    int b;

    for(i=1;i<=x;i=i+1) {
        cout<<"ENTER NAME OF THE FAMILY MEMBER  "<<i<<"BRUH:::"<<endl;
        getline(cin >> ws,arr[i-1]);
        
    }
    for(b=1;b<=x;b=b+1) {
        cout<<"YOUR "<<b<<"FAMILY MEMBER IS::"<<arr[b-1]<<endl;
    }


}
void PersonalDetailsofeveryfamilymemeber() {
    cout<<"TYPE THE ASSIGNED NUMBER OF THE FAMILY MEMBER TO REGISTER PERSONAL DETAILS"<<endl;
    int assignnumber;
    int verfication;
    int phonenumber[100];
    string emailid[100];


    
    
        cout<<"VERIFY THAT THE NAME OF YOUR FAMILY MEMBER IS :::"<<endl;
        cout<<arr[x-1];
        cout<<"TYPE 1 IF TURE AND 0 IF FALSE"<<endl;

        cin>>verification;
        if(verification=1) {
            cout<<"ENTER FOLLOWING DETAILS::::"<<endl;
            cout<<"PHONE NUMBER"<<endl;
            getline(cin >> ws,phonenumber[assignnumber-1]);
            cout<<"EMAIL ID::"<<endl;
            getline(cin >> ws,emailid[assignnumber-1]);
            cout<<"THIS IS THE FAMILY MEMBER PROFILE";
            cout<<arr[assignnumber-1];
        }
        if(verification=0) {
            cout<<"PLEASE CHECK THE ASSIGN NUMBER OF FAMILY MEMBER AGAIN"<<endl;
        }
        if(verification>1) {
            cout<<"ARE YOU OKAY"<<endl;
        }
        if(verification<0) {
            cout<<"BRUH"<<endl;
        } 
    }

    if(assignnumber>x) {
        cout<<"BRUH"<<endl;
    }
}

        
             
            



            


  int main() {

    familymembersinput(x);
    PersonalDetailsofeveryfamilymemeber(x);
   return 0;
  }

    
    
    




    

    