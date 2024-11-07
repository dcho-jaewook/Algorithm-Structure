#include <iostream>
#include <unordered_set>
using namespace std;

unordered_set<string> set1;

int main()
{
    freopen("/Users/jaewook/Desktop/Algorithm Structure/Algorithm Structure/Map and Set/empty.txt", "r", stdin);
    
    int N, M, i, cnt = 0;
    cin >> N >> M;
    cin.ignore(10000, '\n');
    
    string tmp;
    for (i = 0; i < N; i++)
    {
        cin >> tmp;
        set1.insert(tmp);
    }
    
    for (i = 0; i < M; i++)
    {
        cin >> tmp;
        cnt += set1.count(tmp);
    }
    
    cout << cnt << endl;
}
