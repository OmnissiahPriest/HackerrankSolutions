//
// Created by OmnissiahPriest on 22.01.2022.
//
#include <bits/stdc++.h>
#include <cstdlib>
#include "../../trim.h"
using namespace std;


/*
 * Complete the 'diagonalDifference' function below.
 *
 * The function is expected to return an INTEGER.
 * The function accepts 2D_INTEGER_ARRAY arr as parameter.
 */

int diagonalDifference(vector<vector<int>> arr) {
    int pim=0, sec=0;
    for (int i=0; i<arr.size(); i++) {
        for (int j=0; j<arr.size(); j++) {
            if (i==j) {
                pim+=arr[i][j];
//                cout<<i<<' '<<j<<' '<<arr[i][j]<<' '<<pim<<'\n';
            }
            if (j==abs(int(i-arr.size()+1))) {
                sec+=arr[i][j];
//                cout<<i<<' '<<j<<' '<<arr[i][j]<<' '<<sec<<'\n';
            }
        }
    }
    return abs(pim-sec);
}

int DiagonalDifference()
{
//    ofstream fout(getenv("OUTPUT_PATH"));

    string n_temp;
    getline(cin, n_temp);

    int n = stoi(ltrim(rtrim(n_temp)));

    vector<vector<int>> arr(n);

    for (int i = 0; i < n; i++) {
        arr[i].resize(n);

        string arr_row_temp_temp;
        getline(cin, arr_row_temp_temp);

        vector<string> arr_row_temp = split(rtrim(arr_row_temp_temp));

        for (int j = 0; j < n; j++) {
            int arr_row_item = stoi(arr_row_temp[j]);

            arr[i][j] = arr_row_item;
        }
    }

    int result = diagonalDifference(arr);

    cout << result << "\n";

//    fout.close();

    return 0;
}


