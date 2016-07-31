#include <iostream>
#include <string>
#include <map>

using namespace std;

int main(){
    string palavra;
    map<string,int> freq;
    map<string,int>::iterator it;

    cin >> palavra;
    while (palavra != "acabou"){
        freq[palavra]++;
        cin >> palavra;
    }

    for (it = freq.begin(); it != freq.end(); ++it){
        cout << it->first << " " << it->second << endl;
    }

    return 0;
}
