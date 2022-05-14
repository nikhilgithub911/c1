#include<iostream>
using namespace std;


void  halfPyramidPattern5(int n){
    for(int i =1;i<=n;i++)
    {
       
        for(int j=1;j<=i;j++)
        {
            cout<<j;
        }
      
        cout<<endl;
    }
}




int main()
{
    int n;
    cout<<"enter the no. of rows"<<endl;
    cin>>n;
    halfPyramidPattern5(n);
}