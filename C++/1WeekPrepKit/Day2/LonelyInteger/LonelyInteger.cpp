//
// Created by OmnissiahPriest on 22.01.2022.
//

#include <bits/stdc++.h>
#include "../../trim.h"
using namespace std;



/*
 * Complete the 'lonelyinteger' function below.
 *
 * The function is expected to return an INTEGER.
 * The function accepts INTEGER_ARRAY a as parameter.
 */

int lonelyinteger(vector<int> a) {
    int c=0;
    int l=a[0];
//    cout<<a.size()<<'\n';
    for (int i=0; i<a.size(); i++) {
        c=1;
        for (int j=0; j<a.size(); j++) {

            if(i!=j){
                if(a[i]==a[j]){
                    c=0;
                    break;
                }
//                cout<<a[i]<<a[j]<<'\n';
            }
        }
        if (c==1) {
            l=a[i];
            break;
        }
    }
    return l;
}

int LonelyInteger()
{
//    ofstream fout(getenv("OUTPUT_PATH"));

    string n_temp;
    getline(cin, n_temp);

    int n = stoi(ltrim(rtrim(n_temp)));

    string a_temp_temp;
    getline(cin, a_temp_temp);

    vector<string> a_temp = split(rtrim(a_temp_temp));

    vector<int> a(n);

    for (int i = 0; i < n; i++) {
        int a_item = stoi(a_temp[i]);

        a[i] = a_item;
    }

    int result = lonelyinteger(a);

    cout << result << "\n";

//    fout.close();

    return 0;
}

