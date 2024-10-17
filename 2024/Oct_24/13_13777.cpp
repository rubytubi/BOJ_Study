#include <iostream>

using namespace std;

int arr[51];

int main(){
    cin.tie(0)->sync_with_stdio(0);

    for(int i = 1; i <= 50; i++){
        arr[i] = i;
    }
    int n = -1;
    while(true){
        cin >> n;
        if(n == 0)
            return 0;
        int left = 1, right = 50;

        while(left <= right){
            int mid = (left + right) / 2;

            if(n == arr[mid]){
                cout << arr[mid] << "\n";
                break;
            }

            if(arr[mid] > n){
                right = mid - 1;
                cout << arr[mid] << " ";
            }
            else{
                left = mid + 1;
                cout << arr[mid] << " ";
            }
        }
    }

    return 0;
}