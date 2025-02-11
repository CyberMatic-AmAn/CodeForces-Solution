#include <bits/stdc++.h>

using namespace std;

int main() {
    int n;
    cin >> n;
    
    unordered_map<string, int> database;
    
    while (n--) {
        string name;
        cin >> name;
        
        if (database.find(name) == database.end()) {
            cout << "OK" << endl;
            database[name] = 0;
        } else {
            int count = ++database[name]; 
            string newName = name + to_string(count);
            
            while (database.find(newName) != database.end()) {
                count++;
                newName = name + to_string(count);
            }
            
            cout << newName << endl;
            database[newName] = 0;
        }
    }
    
    return 0;
}
