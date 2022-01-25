//
// Created by OmnissiahPriest on 25.01.2022.
//

#include <bits/stdc++.h>
#include "../../trim.h"
using namespace std;



/*
 * Complete the 'towerBreakers' function below.
 *
 * The function is expected to return an INTEGER.
 * The function accepts following parameters:
 *  1. INTEGER n
 *  2. INTEGER m
 */

int towerBreakers(int n, int m) {
    if(n%2==1&&m!=1){
        return 1;
    }else {
        return 2;
    }
}

int TowerBreakers()
{
//    ofstream fout(getenv("OUTPUT_PATH"));

    string t_temp;
    getline(cin, t_temp);

    int t = stoi(ltrim(rtrim(t_temp)));

    for (int t_itr = 0; t_itr < t; t_itr++) {
        string first_multiple_input_temp;
        getline(cin, first_multiple_input_temp);

        vector<string> first_multiple_input = split(rtrim(first_multiple_input_temp));

        int n = stoi(first_multiple_input[0]);

        int m = stoi(first_multiple_input[1]);

        int result = towerBreakers(n, m);

        cout << result << "\n";
    }

//    fout.close();

    return 0;
}


