#include <iostream>
#include <map>
#include <string>

using namespace std;

int main(){
    map<int,string> map1;
    map<string,int> map2;

    map<int,string>::iterator it1;
    map<string,int>::iterator it2;

    map1[1] = "um";
    map1[2] = "dois";
    map1[3] = "tres";
    map1[4] = "quatro";

    map2["um"] = 1;
    map2["dois"] = 2;
    map2["tres"] = 3;
    map2["quatro"] = 4;

    for (it1 = map1.begin(); it1 != map1.end(); ++it1){
        cout << it1->first << " " << it1->second << endl;
    }

    for (it2 = map2.begin(); it2 != map2.end(); ++it2){
        cout << it2->first << " " << it2->second << endl;
    }

    if (map2.find("quatrooooooo") != map2.end()){
        cout << "tem!" << endl;
    }

    for (it2 = map2.begin(); it2 != map2.end(); ++it2){
        cout << it2->first << " " << it2->second << endl;
    }

    //map2["quatro"]++;

    //cout << map2["quatro"] << endl;

    return 0;
}
