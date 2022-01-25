//
// Created by OmnissiahPriest on 22.01.2022.
//

#include <bits/stdc++.h>
#include "../../trim.h"


using namespace std;


/*
 * Complete the 'countingSort' function below.
 *
 * The function is expected to return an INTEGER_ARRAY.
 * The function accepts INTEGER_ARRAY arr as parameter.
 */

vector<int> countingSort(vector<int> arr) {
    vector<int> res(100);
    for (int i = 0; i < 100; i++) {
        for (int j = 0; j < arr.size(); j++) {
            if (arr[j]==i) {
                res[i]+=1;
            }
        }
    }
    return res;
}

int CountingSort1()
{
//    ofstream fout(getenv("OUTPUT_PATH"));

    string n_temp;
    getline(cin, n_temp);

    int n = stoi(ltrim(rtrim(n_temp)));

    string arr_temp_temp;
    getline(cin, arr_temp_temp);

    vector<string> arr_temp = split(rtrim(arr_temp_temp));

    vector<int> arr(n);

    for (int i = 0; i < n; i++) {
        int arr_item = stoi(arr_temp[i]);

        arr[i] = arr_item;
    }

    vector<int> result = countingSort(arr);

    for (size_t i = 0; i < result.size(); i++) {
        cout << result[i];

        if (i != result.size() - 1) {
            cout << " ";
        }
    }

    cout << "\n";

//    fout.close();

    return 0;
}

