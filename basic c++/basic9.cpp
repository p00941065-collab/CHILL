#include<bits/stdc++.h>
using namespace std;

int main() {
    int day;
    cin>>day;
    switch(day) {
        case 1:
            cout<<"Monday"<<endl;
            break;
        case 2:
            cout<<"Tuesday"<<endl;
            break;
        case 3:
            cout<<"Wednesday"<<endl;
            break;
        case 4:
            cout<<"Thursday"<<endl;
            break;
        case 5:
            cout<<"Friday"<<endl;
            break;
        case 6:
            cout<<"Saturday"<<endl;
            break;
        case 7:
            cout<<"Sunday"<<endl;
            break;
        default:
            cout<<"invalid";
    }        
    return 0;
}
//here break command will stop the execution of the switch statement and will exit the switch block. If break is not used, the program will continue to execute the next case statements until it encounters a break or reaches the end of the switch block. 
