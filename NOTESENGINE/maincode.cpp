
#include <iostream>
#include <vector>
#include <string>

using namespace std;

int main() {
    int v;
    string a;
    string k; 
    string master;
    vector<string> m;  
    string input3;
    do {
        cout << "TO CREATE A NEW FILE: 1" << endl;
        cout << "TO SEE CREATED FILES: 2" << endl;
        cout << "TO EDIT A FILE: 3" << endl;
      
        cin >> master;

        if (master == "1") {
            string input;
     
            while (true) {
                cout << "ENTER YOUR FILE NAME (<--enter (exit) to break-->):::";
                cin >> input;
         
                if (input == "exit") break;
            
                m.push_back(input);
        
                cout << "CREATED FILE WITH NAME: " << m.back() << endl;
                cout << "WANT TO CREATE MORE FILES (ANY INPUT APART FROM NO WILL BE CONSIDERED YES):";
                cin >> a;
                if (a == "NO" || a == "no") break;
            }
        }
        else if (master == "2") {
          
            if (m.empty()) {
                cout << "ERROR, NO FILES INSIDE THE MEMORY" << endl;
            } 
            else if (m.size() == 1) {
                cout << "THE FILE CREATED BY YOU IS:: " << *m.begin() << endl;
            } 
            else {
                cout << "THE FILES CREATED BY YOU ARE::" << endl;
                for (auto it = m.begin(); it != m.end(); ++it) {
                    cout << "- " << *it << endl;
                }
            }
        }

      

    } while (k == "YES" || k == "yes"); // Correctly matches the 'do' block

    return 0;
}

//pause;
