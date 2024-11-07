#include <iostream>
#include <unordered_set>
#include <set>
using namespace std;

set<int> SangGen;

int main()
{
    freopen("/Users/jaewook/Desktop/Algorithm Structure/Algorithm Structure/Map and Set/empty.txt", "r", stdin);
    
    int N, M, i, num;
    cin >> N;
    
    for (i = 0; i < N; i++)
    {
        cin >> num;
        SangGen.insert(num);
    }
    
    cin >> M;
    for (i = 0; i < M; i++)
    {
        cin >> num;
        if (SangGen.count(num) == 0)
            cout << "0 ";
        else
            cout << "1 ";
    }
}
