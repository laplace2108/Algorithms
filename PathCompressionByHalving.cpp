#include<iostream>
#define N 10
using namespace std;

int main(){

    int i, j, p, q, count, id[N], sz[N];

    for (i = 0; i < N; i++)
    {
        id[i] = i;
        sz[i] = 1;
    }

    while (scanf("%d %d\n", &p, &q) == 2)
    {
        for(i = p; i!=id[i]; count++, i = id[i]){
            int t = i;
            i = id[id[t]];
            id[t] = i;
        }
        for(j = q; j!=id[j]; count ++, j = id[j]){
            int t = j;
            j = id[id[t]];
            id[t] = j;
        }
        if(i == j) continue;

        if (sz[i] < sz[j])
        {
            count++
            id[i] = j; sz[j] += sz[i];
        }
        else
        {
            count++
            id[j] = i; sz[i] += sz[j];
        }
        
        for (int  i = 0; i < N; i++){
            cout << id[i] << " "; 
        }
        cout << endl;
        cout << count << endl;
    }

    return 0;
}