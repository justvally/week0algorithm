#include <iostream>
using namespace std;

int insert(int arr[], int n, int value, int index) {
    for (int i=n; i >index; i--) {
        arr[i]= arr[i-1];
    }
    arr[index]= value;
    return n+1;
}
int Delete(int arr[], int n, int index) {
    for (int i=index; i<n-1; i++) {
        arr[i]= arr[i+1];
    }
    return n-1;
}
int main() {
    int arr[50]= {5,4,3,2,1};
    int n=5;
    n= insert(arr, n, 10,2);
    n= Delete(arr, n, 1);
    for (int i=0; i<n; i++) {
        cout<< arr [i]<< " ";
    }
    return 0;
}
