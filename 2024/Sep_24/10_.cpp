#include <iostream>
#include <vector>

using namespace std;

vector<int>v;

int main(){
    cin.tie(0)->sync_with_stdio(0);

    int m, n;
    cin >> n >> m;

    for(int i = 0; i < n; i++){
        int t;
        cin >> t;

        v.push_back(t);
    }



    return 0;
}