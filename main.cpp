#include <algorithm>
#include <cfloat>
#include <climits>
#include <cmath>
#include <iostream>
#include <numeric>
#include <string>
#include <vector>

using namespace std;
using ll = long long int;

const ll MOD = 1000000007;

template <typename T>
int cin_vec(vector<T> &vec) {
    for (auto &i : vec) {
        cin >> i;
    }
    return 0;
}

template <typename T>
int cout_vec(vector<T> vec, bool insertNewLine = true) {
    if (insertNewLine) {
        for (const auto &i : vec) {
            cout << i << endl;
        }
    } else {
        for (const auto &i : vec) {
            cout << i << flush;
        }
    }
    return 0;
}

template <typename T>
ll min_vec(std::vector<T> vec) {
    auto iter = min_element(vec.begin(), vec.end());
    ll index = distance(vec.begin(), iter);
    return index;
}

template <typename T>
ll max_vec(std::vector<T> vec) {
    auto iter = max_element(vec.begin(), vec.end());
    ll index = distance(vec.begin(), iter);
    return index;
}

int main() {
    int n;
    cin >> n;
    vector<double> a(n);
    cin_vec(a);
    cout_vec(a);
    cout << "max:" << a.at(max_vec(a)) << endl;
    cout << MOD << endl;
    return 0;
}
