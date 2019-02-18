#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <numeric>
#include <cmath>
#include <climits>
#include <cfloat>

using namespace std;
using ll = long long int;

template <typename T>
T cin_arr(vector<T> &arr) {
    for (auto &i : arr) {
        cin >> i;
    }
    return 0;
}

template <typename T>
T cout_arr(vector<T> arr, bool insertNewLine = true) {
    if (insertNewLine) {
        for (const auto &i : arr) {
            cout << i << endl;
        }
    } else {
        for (const auto &i : arr) {
            cout << i << flush;
        }
    }
    return 0;
}

template <typename T>
ll min_arr(std::vector<T> arr) {
    auto iter = min_element(arr.begin(), arr.end());
    ll index = distance(arr.begin(), iter);
    return index;
}

template <typename T>
ll max_arr(std::vector<T> arr) {
    auto iter = max_element(arr.begin(), arr.end());
    ll index = distance(arr.begin(), iter);
    return index;
}

int main() {
    int n;
    cin >> n;
    vector<double> a(n);
    cin_arr(a);
    cout_arr(a);
    cout << "max:" << a.at(max_arr(a)) << endl;
    return 0;
}
