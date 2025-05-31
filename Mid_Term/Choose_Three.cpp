#include <bits/stdc++.h>
using namespace std;

int main() {
    int tc;
    cin >> tc;

    int arr_size = 1000, sum;
    int arr[arr_size];

    for(int i = 0; i < tc; i++){
        cin >> arr_size >> sum;

        for(int j = 0; j < arr_size; j++) {
            cin >> arr[j];
        }

        bool i_run = false;
        for(int x = 0; x < arr_size && !i_run; x++) {
            for(int y = x + 1; y < arr_size; y++) {
                    for(int z = y + 1; z < arr_size; z++) {
                        if(arr[x] + arr[y] + arr[z] == sum){
                            // cout << arr[x] << ' ' << arr[y] << ' ' << arr[z] << ' ' << endl;
                            i_run = true;
                            break;
                        }
                    } 
            }  
            
        } 
        
        i_run ? cout << "YES" << endl : cout << "NO" << endl;
    }    

    return 0;
}