//
// Created by OmnissiahPriest on 25.01.2022.
//


#include <bits/stdc++.h>
#include "../../trim.h"


using namespace std;



/*
 * Complete the 'superDigit' function below.
 *
 * The function is expected to return an INTEGER.
 * The function accepts following parameters:
 *  1. STRING n
 *  2. INTEGER k
 */

int superDigit(string n, int k) {
    string nn=n;
    if(k>10){
        k=10;
    }
    for (int i=0; i<k-1; i++) {
        nn+=n;
        //cout<<'n'<<n<<'\n';
    }
    //long int s=std::stoi(n);
    string ss=nn;
    while (ss.size()>1){
        int t=0;
        //cout<<'s'<<ss<<'\n';
        for (int i=0; i<ss.size(); i++) {

            t+=ss[i]-48;
            //cout<<'t'<<t<<'\n';
        }
        //s=t;
        //cout<<'t'<<t<<'\n';
        ss=to_string(t);
    }
    return std::stoi(ss);

}

int RecursiveDigitSum()
{
//    ofstream fout(getenv("OUTPUT_PATH"));

    string first_multiple_input_temp;
    getline(cin, first_multiple_input_temp);

    vector<string> first_multiple_input = split(rtrim(first_multiple_input_temp));

    string n = first_multiple_input[0];

    int k = stoi(first_multiple_input[1]);

    int result = superDigit(n, k);

    cout << result << "\n";

//    fout.close();

    return 0;
}


