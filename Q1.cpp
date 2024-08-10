#include <bits/stdc++.h>
using namespace std;

string derivate(int a[], int s){
    string derivative="";
    for(int i=s; i>1; i--){
        if(a[i]!=0)
            derivative= derivative + to_string(a[i]) + "x^" + to_string(i-1) + " + ";
    }
    derivative= derivative + to_string(a[1]) + "x^0";
    return derivative;
}

int main()
{
    int n;
    cout<<"Enter the degree of polynomial: ";
    cin>>n;
    int arr[n+1];
    for(int i=0; i<=n; i++){
        cout<<"Enter the coefficient of polynomial to power "<<i<<": ";
        cin>>arr[i];
    }
    string og_str="";
    for(int i=n; i>0; i--){
        if(arr[i]!=0)
            og_str= og_str + to_string(arr[i]) + "x^" + to_string(i) + " + ";
    }
    og_str= og_str + to_string(arr[0]) + "x^0";
    cout<<"Original Polynomial is: \n"<<og_str<<endl;
    string str= derivate(arr, n);
    cout<<"The derivative is: \n"<<str<<endl;
    return 0;
}
