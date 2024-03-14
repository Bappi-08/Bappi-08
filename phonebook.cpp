#include <iostream>
#include <map>
#include <vector>
#include <string>
using namespace std;

int main() {
    map<string, vector<string>> phonebook;

    phonebook["bappi"].push_back("0182921");
    phonebook["musa"].push_back("018292321");
    phonebook["arifbakhtiar"].push_back("2334343323");
    phonebook["ronyy"].push_back("018292123");
    phonebook["bappisd"].push_back("018234921");

    // Iterate over the phonebook
    for( auto entry : phonebook) {
        cout << entry.first << ": ";
        for (auto x:entry.second)
        {
            cout<<x<<endl;
        }
      
          
        
        cout << endl; // End of the line for this entry
    }

    return 0;
}
