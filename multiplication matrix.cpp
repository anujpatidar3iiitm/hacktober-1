#include<iostream>
using namespace std;
main()
{
    int w,x,y,z,i,j,k,sum;
    cout<<"Enter the order of the first matrix,and then of the second matrix you want to multiply";
    cin>>w>>x>>y>>z;
    int a[w][x],b[y][z],c[w][z];

    if(x!=y)
        cout<<"These matrices cannot be multiplied";
    else
    {
    cout<<"Enter the elements of the first matrix";
    for(i=0;i<w;i++)
        {for(j=0;j<x;j++)
        cin>>a[w][x];}
    cout<<"Enter the elements of the second matrix";
    for(i=0;i<y;i++)
       {for(j=0;j<z;j++)
        cin>>b[y][z];}
    for(i=0;i<w;i++)
    {
        for(j=0;j<z;j++)
        {
            sum=0;
               for(k=0;k<x;k++)
               {
                 sum=sum+a[i][k]*b[k][j];
               }
               c[i][j]=sum;
        }
    }

    for(i=0;i<w;i++)
    {
        for(j=0;j<z;j++)
            cout << c[i][j] << endl;
    }
    }

}
