#include<bits/stdc++.h>
using namespace std;
int  main(){
    unordered_map <string,int> umpp {
        {"one",1},
        {"two",2},
        {"three",3}
    };

    // Access Value By Key

    cout << "Access By Value Key" << umpp.at("one") << endl;

    // Insert
    umpp["four"] = 4;
    umpp.insert({"five",5});

    // Insert two Pairs
    umpp.insert({{"six",6},{"seven",7}});

    // Remove
    umpp.erase("seven");

    cout << "Key - Value" << endl;
    for(const auto &it : umpp){
        string key = it.first;
        int value = it.second;
        cout << key << " - " << value << endl;
    }

    
    cout << endl;
    // Copy Map
    unordered_map <string,int> umpp2(umpp.begin(),umpp.end());
    cout << "Key - Value" << endl;
    for(const auto &it : umpp){
        string key = it.first;
        int value = it.second;
        cout << key << " - " << value << endl;
    }
    return 0;
}