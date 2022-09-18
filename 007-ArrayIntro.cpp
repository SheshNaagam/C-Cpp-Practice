#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {

    int N;
    cin >> N;
    int arr[10000];
    int i;

    for(i = 0; i < N; i++){
        cin >> arr[i];
    }

    for(i=1; i <= N; i++){
        cout << arr[N-i] << " ";
    }
    return 0;
}
