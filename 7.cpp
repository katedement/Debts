#include <iostream>
#include <set>
#include <string>

using namespace std;

int main() {
    string ch;
    string  str;

    set<string> set;
    
    while (ch != "#") {
        cin >> ch >> str;

        if (ch == "+")
            set.insert(str);
        
        else if (ch == "-")
            set.erase(str);
        
        else if (ch == "?"){
            if (set.count(str) > 0) 
                cout << "YES" << endl;
            else
                cout << "NO" << endl;
        }
    }
    return 0;
}

