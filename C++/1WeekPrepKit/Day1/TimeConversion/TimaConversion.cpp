//
// Created by Sanel Programmer on 22.01.2022.
//

#include <bits/stdc++.h>

using namespace std;

/*
 * Complete the 'timeConversion' function below.
 *
 * The function is expected to return a STRING.
 * The function accepts STRING s as parameter.
 */

string timeConversion(string s) {
    int hh, mm, ss, res;
    string dtm;
    hh=((int)s[0]-48)*10+(int)s[1]-48;
    mm=((int)s[3]-48)*10+(int)s[4]-48;
    ss=((int)s[6]-48)*10+(int)s[7]-48;
    if (s[8]=='P') {
        if(hh>11){
            hh=12;
        }else {
            hh=12+hh;
        }
    }else if(hh>11){
        hh=0;
    }
    if(hh<10){
        dtm="0"+std::to_string(hh)+s[2]+s[3]+s[4]+s[5]+s[6]+s[7];
    }else {
        dtm=std::to_string(hh)+s[2]+s[3]+s[4]+s[5]+s[6]+s[7];
    }
//cout<<dtm;
    return dtm;
}

int TimeConv()
{
//    ofstream fout(getenv("OUTPUT_PATH"));

    string s;
    getline(cin, s);

    string result = timeConversion(s);

    cout << result << "\n";

//    fout.close();

    return 0;
}

