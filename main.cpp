/*###Begin banned keyword - each of the following line if appear in code will raise error. regex supported
define
include
using
###End banned keyword*/

#include <iostream>
#include <math.h>
using namespace std;



//###INSERT CODE HERE -

void inputArray(int a[][100],int &n)
{
    cin >> n;
    for (int i = 0; i < n; i++)
        for(int j = 0; j < n; j++)
            cin >> a[i][j];
}

long long TinhDinhThuc(int a[][100], int n){
    if(n == 1)
        return a[0][0];
    
    long long sum;
    
    for(int i = 0; i < n; i++){
        int A[100][100];
        for(int j = 0; j < n-1; j++)
            for(int k = 0; k < n-1; k++){
                if(j < i)
                    A[j][k] = a[j][k+1];
                else
                    A[j][k] = a[j+1][k+1];
            }
        sum += (int)pow(i,-1) * a[i][0] * TinhDinhThuc(a, n-1);
    }
                
        return sum;
}

int main(){
    int a[100][100], n;
    inputArray(a, n);
    
    cout << TinhDinhThuc(a, n);
}
