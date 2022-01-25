//
// Created by OmnissiahPriest on 25.01.2022.
//

#include <bits/stdc++.h>
#include "../../trim.h"

using namespace std;


/*
 * Complete the 'caesarCipher' function below.
 *
 * The function is expected to return a STRING.
 * The function accepts following parameters:
 *  1. STRING s
 *  2. INTEGER k
 */

string caesarCipher(string s, int k) {
    k=k%26;
    for (int i=0; i<s.size(); i++) {
        if (s[i]<91&&s[i]>64) {
//            cout<<s[i]<<'\n';
            if (s[i]>90-k) {
                s[i]+=k-26;
            }else {
                s[i]+=k;
            }
        }
        if (s[i]<123&&s[i]>96){
//            cout<<s[i]<<'\n';
            if (s[i]>122-k) {
                s[i]+=k-26;
            }else {
                s[i]+=k;
            }
        }
    }
    return s;
}

int CaesarCipher()
{
//    ofstream fout(getenv("OUTPUT_PATH"));

    string n_temp;
    getline(cin, n_temp);

    int n = stoi(ltrim(rtrim(n_temp)));

    string s;
    getline(cin, s);

    string k_temp;
    getline(cin, k_temp);

    int k = stoi(ltrim(rtrim(k_temp)));

    string result = caesarCipher(s, k);

    cout << result << "\n";

//    fout.close();

    return 0;
}


