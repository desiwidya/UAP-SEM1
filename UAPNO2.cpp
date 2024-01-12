#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;


double Median(vector<int> v) {
    int n = v.size();
    if (n % 2 == 0)
        return (v[n / 2 - 1] + v[n / 2]) / 2.0;
    else
        return v[n / 2];
}

void main() {
    // membuat array deret
    int arr[] = { 87,45,50,25,32,10,75,90,5,8 };
    int n = sizeof(arr) / sizeof(arr[0]);

    // menampilkan array deret sebelum di sort
    cout << "Deret sebelum di sorting : \n";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " " << " | ";
    }
    cout << endl;

    // mengubah array ke vector
    vector<int> v(arr, arr + n);

    // melakukan sorting pada vector
    sort(v.begin(), v.end(), greater<int>());

    // menampilkan vector yang sudah di sort
    cout << "Deret setelah di sorting dari besar ke kecil :  \n";
    for (int i = 0; i < n; i++) {
        cout << v[i] << " " << " | ";
    }
    cout << endl;

    // mencari nilai median
    double median = Median(v);
    cout << "Nilai median: " << median << endl;

     
}