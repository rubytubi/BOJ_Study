#include <iostream>
#include <string>

using namespace std;

int main(){
    string str;
    int cnt = 0;

    while(getline(cin, str)){
        if(str == "gum gum for jay jay")
        cnt++;
    }

    cout << cnt;


    return 0;
}