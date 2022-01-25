//
// Created by OmnissiahPriest on 25.01.2022.
//

#include <bits/stdc++.h>
#include "../../trim.h"


using namespace std;



/*
 * Complete the 'minimumBribes' function below.
 *
 * The function accepts INTEGER_ARRAY q as parameter.
 */

void minimumBribes(vector<int> q) {
    vector<int> s=q;
    sort(s.begin(),s.end());
    //cout<<"\n\n\n";
    int c=0, t=0;
    int temp=0;
    bool br=false;
    while(q!=s&&br==false){
        for (int i=0; i<q.size(); i++) {
            //cout<<t<<" "<<c<<"\n";
            //for(auto x:q)
            //cout<<x<<" ";
            //cout<<"\n";
            //for(auto y:s)
            //cout<<y<<" ";
            //cout<<"\n\n";
            if(q[i]!=s[i]&&q[i]>q[i+1]){
                if(q[i]==temp){
                    t++;
                }else {
                    t=1;
                }
                temp=q[i];
                swap(q[i], q[i+1]);
                c++;


            }
            //cout<<t<<" "<<c<<"\n";
            if(t>2){
                br=true;
                cout<<"Too chaotic";
                cout<<"\n";
                break;
            }

        }
    }
    if(br!=true){
        cout<<c;
        cout<<"\n";
    }


}

int NewYearChaos()
{
    string t_temp;
    getline(cin, t_temp);

    int t = stoi(ltrim(rtrim(t_temp)));

    for (int t_itr = 0; t_itr < t; t_itr++) {
        string n_temp;
        getline(cin, n_temp);

        int n = stoi(ltrim(rtrim(n_temp)));

        string q_temp_temp;
        getline(cin, q_temp_temp);

        vector<string> q_temp = split(rtrim(q_temp_temp));

        vector<int> q(n);

        for (int i = 0; i < n; i++) {
            int q_item = stoi(q_temp[i]);

            q[i] = q_item;
        }

        minimumBribes(q);
    }

    return 0;
}


