#include <iostream>
#define N 10
using namespace std;

int main(){

    int i, j, p, q, id[N], sz[N], count;

    for (i = 0; i < N; i++)
    {
        id[i] = i;
        sz[i] = 1;
    }

    while (scanf("%d %d\n", &p, &q) == 2)
    {
        count = 0;
        for(i = p; i!=id[i]; count++, i = id[i]);
        for(j = q; j!=id[j]; count++, j = id[j]);
        if(i == j) continue;

        if (sz[i] < sz[j])
        {
            count++;
            id[i] = j; sz[j] += sz[i];
        }
        else
        {
            count++;
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