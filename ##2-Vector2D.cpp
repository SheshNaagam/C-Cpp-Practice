#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int main() {

    int i,j,k;// iterators
    int q1,q2; // query elements
    int n, q;

    cin >> n >> q; // array dimensions // queries // 1st Input

    vector<vector<int> >arr(n); //int arr[n][MAX]; // array and dimensions

    int s; // q = query // s1 = arr1 // s2 = arr2

    for(i = 0; i < n ; i++){ // array dimension creation

        cin >> s;

        arr[i] = vector<int>(s);

        for(j = 0; j < s; j++){
            cin >> arr[i][j];
        }
    }

    for(k = 0; k < q; k++){
        cin >> q1 >> q2;
        cout << arr[q1][q2] << "\n";
    }

    return 0;
}
