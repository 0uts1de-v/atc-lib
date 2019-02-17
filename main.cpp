#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <numeric>
#include <cmath>
#include <climits>
#include <cfloat>

using namespace std;

//start of 0uts1de's library

template <typename T>
T cin_arr(vector<T> &arr) {
    for (int &i : arr) {
        cin >> i;
    }
    return 0;
}

template <typename T>
T cout_arr(vector<T> &arr, bool insertNewLine = true) {
    if (insertNewLine) {
        for (const int &i : arr) {
            cout << i << endl;
        }
    } else {
        for (const &i : arr) {
            cout << i << flush;
        }
    }
    return 0;
}


int max_int_arr(std::vector<int> &arr, bool returnValue = true) {    //Value mode and Index mode
    int maxVal = INT_MIN;       //min of int
    int maxIndex = 0;
    if (returnValue) {
        for (int i : arr) {
            if (i > maxVal) {
                maxVal = i;
            }
        }
        return maxVal;
    } else {
        for (unsigned int i = 0; i < arr.size(); ++i) {
            if (arr.at(i) > maxVal) {
                maxVal = arr.at(i);
                maxIndex = i;
            }
        }
        return maxIndex;
    }
}

double max_double_arr(std::vector<double> &arr) {    //data mode
    double maxVal = -DBL_MAX;       //min of double
    for (double i : arr) {
        if (i > maxVal) {
            maxVal = i;
        }
    }
    return maxVal;
}

int max_double_arr(std::vector<double> &arr, int mode) {    //overload index mode
    double maxVal = -DBL_MAX;       //min of double
    int maxIndex = 0;
    for (unsigned int i = 0; i < arr.size(); ++i) {
        if (arr.at(i) > maxVal) {
            maxVal = arr.at(i);
            maxIndex = i;
        }
    }
    return maxIndex;
}

//end of 0uts1de's library

int main() {
    int n;
    cin >> n;
    vector<int> a(n);
    cin_arr(a);
    cout_arr(a);
    return 0;
}
