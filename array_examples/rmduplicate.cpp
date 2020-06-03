#include<iostream>
using namespace std;
int main ()
{
    int A[10], B[10], n,  k = 0;
    cout << "Enter size of array : ";
    cin >> n;
    cout << "Enter elements of array : ";
    for (int i = 0; i < n; i++)
    {
        cin >> A[i];    
    }
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < k; j++)
        {
            if (A[i] == B[j])
                break;
        }

        if (j == k)
        {
            B[k++] = A[i];
            
        }
    }
    cout << "Repeated elements after deletion : ";
    for (i = 0; i < k; i++){
        cout << B[i] << " ";
    }

}