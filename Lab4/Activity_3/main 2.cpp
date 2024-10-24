//ELEC/XJEL2645 - Maps wait they don't love you like I love you
// Create a map of integers with the surname (string) as a key.

#include <iostream> // for cout and cin
#include <map> // 

using namespace std;

map<string, int> int_map;
map<string, int>::iterator i;

int main(){  
    int_map["Soutar"] = 66;
    int_map["Harrison"] = 65;
    int_map["Lambert"] = 67;
    int_map["Stathopolous"] = 71;

    for(i = int_map.begin(); i != int_map.end(); i++) {
        cout << "Key = '" << i->first << "' Grade = " << i->second << endl;
    }
}