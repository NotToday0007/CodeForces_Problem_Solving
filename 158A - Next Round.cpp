#include <iostream>
using namespace std;
 
int main() {
    int n, k;
    cin >> n >> k;   
    int array[50];
    for (int i = 0; i < n; i++) {
        cin >> array[i];
    }
 
    int s = array[k - 1];
    int count = 0;
 
    for (int i = 0; i < n; i++) {
        if (array[i] >= s && array[i] > 0) {
            count++;
        }
    }
 
    cout << count << endl;
 
    return 0;
}