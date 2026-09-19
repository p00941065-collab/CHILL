
#include <iostream>
#include <string>
using namespace std;

// Pass by reference (&) lets cin directly update 'naam' in main()

void namelikh(string naam) {  
    
    getline(cin,naam);
    cout<<naam<<endl;
}

int main() {
    string naam;
    cout << "enter your naam: "; 
    namelikh(naam);
   
     cout<<"enter you naam 2";
     namelikh(naam);      

                

    return 0;
}

