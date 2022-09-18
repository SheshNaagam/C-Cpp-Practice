#include <iostream>
#include <cstdio>
using namespace std;

int main() {
    int a, b, i, j;

    string arr[9] = {"one","two","three","four","five","six","seven","eight","nine"};

    cin >> a;
    cin >> b;

    for(i = a; i <= b; i++){
        for(j=1; j<=9; j++){
            if (i==j){
                cout << arr[j-1] << endl;
            }
        }
        if (i>9 && i%2==0){
                cout << "even" << endl;
        }
        else if(i>9 && i%2!=0){
                cout << "odd" << endl;
        }
    }
    return 0;
}
