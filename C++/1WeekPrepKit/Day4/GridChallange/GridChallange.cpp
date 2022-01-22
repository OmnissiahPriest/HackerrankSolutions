//
// Created by Sanel Programmer on 22.01.2022.
//

#include <bits/stdc++.h>
#include "../../trim.h"
using namespace std;



/*
 * Complete the 'gridChallenge' function below.
 *
 * The function is expected to return a STRING.
 * The function accepts STRING_ARRAY grid as parameter.
 */

string gridChallenge(vector<string> grid) {
    for (int i=0; i<grid.size(); i++) {
//        cout<<grid[i]<<'\n';
        sort(grid[i].begin(),grid[i].end());
//        cout<<grid[i]<<'\n';
    }
    string r="YES";
    for (int i=0; i<grid.size(); i++) {
        for (int j=0; j<grid.size()-1; j++) {
            if (grid[j][i]>grid[j+1][i]) {
                r="NO";
                break;
            }
        }
    }
    return r;
}

int GridChallange()
{
//    ofstream fout(getenv("OUTPUT_PATH"));

    string t_temp;
    getline(cin, t_temp);

    int t = stoi(ltrim(rtrim(t_temp)));

    for (int t_itr = 0; t_itr < t; t_itr++) {
        string n_temp;
        getline(cin, n_temp);

        int n = stoi(ltrim(rtrim(n_temp)));

        vector<string> grid(n);

        for (int i = 0; i < n; i++) {
            string grid_item;
            getline(cin, grid_item);

            grid[i] = grid_item;
        }

        string result = gridChallenge(grid);

        cout << result << "\n";
    }

//    fout.close();

    return 0;
}


