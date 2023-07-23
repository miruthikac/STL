#include <iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main()
{
    vector<vector<int>> a = {
        {4,5,9},
        {8,9,2},
        {6,7,3}
    };
    vector<vector<int>> b = {
        {6,7,1},
        {4,6,5},
        {3,4,7}
    };

    vector<vector<int>> c(a.size(), vector<int>(b[0].size(),0));

    if(a[0].size()==b.size()){

    for (int i = 0; i < a.size(); ++i) {
        for (int j = 0; j < b[0].size(); ++j) {
            for (int k = 0; k < a[0].size(); ++k) {
                c[i][j] += a[i][k] * b[k][j];
            }
        }
    }

    }

   cout<<"Matrix multiplication :"<<endl;
    for ( auto &r : c) {
        for (auto &s : r) {
            cout << s<< " ";
        }
        cout << endl;
    }
    return 0;
}