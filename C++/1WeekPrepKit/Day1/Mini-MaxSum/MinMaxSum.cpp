//
// Created by Sanel Programmer on 22.01.2022.
//

#include <bits/stdc++.h>
#include "../../trim.h"
using namespace std;



/*
 * Complete the 'miniMaxSum' function below.
 *
 * The function accepts INTEGER_ARRAY arr as parameter.
 */

void miniMaxSum(vector<int> arr) {
    vector<int> summs(5);
    long int max=0;
    long long int min=10000000001;

    for (int i=0; i<5; i++) {
        int er=0;
        long long int summ=0;
        for (int j=0; j<5; j++) {
            if (arr[j]!=arr[i]) {
                summ+=arr[j];
            }else {
                er++;
            }
            if(er>4){
                summ=arr[j]*4;
            }
            //cout<<summ;
            //cout<<"\n";
        }
        if (summ>max) {
            max=summ;
        }
        if (summ<min) {
            min=summ;
        }

    }
    cout<<min<<" "<<max;
}

int MinMaxSum()
{

    string arr_temp_temp;
    getline(cin, arr_temp_temp);

    vector<string> arr_temp = split(rtrim(arr_temp_temp));

    vector<int> arr(5);

    for (int i = 0; i < 5; i++) {
        int arr_item = stoi(arr_temp[i]);

        arr[i] = arr_item;
    }

    miniMaxSum(arr);

    return 0;
}

