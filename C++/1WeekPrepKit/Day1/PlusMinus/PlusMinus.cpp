//
// Created by Sanel Programmer on 22.01.2022.
//

#include <bits/stdc++.h>
#include "../../trim.h"
using namespace std;


/*
 * Complete the 'plusMinus' function below.
 *
 * The function accepts INTEGER_ARRAY arr as parameter.
 */

void plusMinus(vector<int> arr, int n) {
    float nPos=0;
    float nNeg=0;
    float nZer=0;
    int i=0;
    int l=n;//sizeof(arr)/sizeof(int);
    while (i<l) {

        if(arr[i]<0){
            nNeg++;
        }else if (arr[i]==0) {
            nZer++;
        }
        else{
            nPos++;
        }
        i++;

    }
    cout<<showpoint;
    cout<<nPos/l;
    cout<<'\n';
    cout<<nNeg/l;
    cout<<'\n';
    cout<<nZer/l;
}

int PlusMinus()
{
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

    plusMinus(arr,n);

    return 0;
}

