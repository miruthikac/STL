#include <iostream>
#include <set>
#include<algorithm>
using namespace std;

int main()
{

    set<int>s={4,6,7,8,3} ;

        s.insert(4);
        s.insert(6);
        s.insert(9);
    cout<<"The number of unique elements of the set is : "<<s.size();

    return 0;
}