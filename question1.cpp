#include <bits/stdc++.h>
using namespace std;

void rightRotate(int a[], int n, int k)
{
    k = k % n;
 
    for(int i = 0; i < n; i++)
    {
       if(i < k)
       {

           cout << a[n + i - k] << " ";
       }
       else
       {

           cout << (a[i - k]) << " ";
       }
    }
    cout << "\n";
}
 
void leftRotete(int arr[], int d, int n)
{
    int temp[n];
 
    int k = 0;
    for (int i = d; i < n; i++) {
        temp[k] = arr[i];
        k++;
    }

    for (int i = 0; i < d; i++) {
        temp[k] = arr[i];
        k++;
    }
 
    for (int i = 0; i < n; i++) {
        arr[i] = temp[i];
    }
}

void PrintTheArray(int arr[], int n)
{
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
}

int main()
{
    int N;
    int p;
    int d;
    cin>>N>>p>>d;
    int arr[N];
    for(int i=0;i<N;i++)
    {
        cin>>arr[i];
    }
    if(d==0)
    leftRotate(arr, p, N);
    else
     rightRotate(arr, N,p);
    PrintTheArray(arr, N);
 
    return 0;
}