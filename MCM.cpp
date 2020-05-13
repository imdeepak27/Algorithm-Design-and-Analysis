#include<iostream>
#include<limits.h>

using namespace std;

int MatrixChainMultiplication(int p[], int n)
{
    int m[n][n];
    int i, j, k, l, q;

    for(i=1;i<n;i++)
        m[i][i]=0;

    for(l=2;l<n;l++)
    {
        for(i=1;i<n-l+1;i++)
        {
            j=i+l-1;
            m[i][j]=INT_MAX;

            for(k=i;k<=j-1;k++)
            {
                q=m[i][k]+m[k+1][j]+p[i-1]*p[k]*p[j];
                if(q<m[i][j])
                {
                    m[i][j]=q;
                }
            }
        }
    }
    return m[1][n-1];
}
int main()
{

    int n,i;
    cout<<"Enter Number Of Matrices : \n";
    cin>>n;
    n++;
    int arr[n];
    cout<<"Enter Dimensions : \n";
    for(i=0;i<n;i++)
    {
        cout<<"Enter d"<<i<<": :";
        cin>>arr[i];
    }
    int size=sizeof(arr)/sizeof(arr[0]);
    cout<<"Minimum Number Of Multiplications Is : \n"<<MatrixChainMultiplication(arr,size);
    return 0;
}
