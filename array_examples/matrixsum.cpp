#include<iostream>
using namespace std;

int main()
{
int x[3][3],y[3][3],z[3][3];
cout<<"ENTER ELEMENTS OF 1st MATRIX\n";
for(int i=0;i<3;i++)
{
for(int j=0;j<3;j++)
cin>>x[i][j];
}
cout<<"ENTER ELEMENTS OF 2nd MATRIX\n";
for(int i=0;i<3;i++)
{
for(int j=0;j<3;j++)
cin>>y[i][j];
}
cout<<"MATRIX first";
for(int i=0;i<3;i++)
{
cout<<"\n\n";
for(int j=0;j<3;j++)
{
cout<<x[i][j];
}
}
cout<<"\nMATRIX second";
for(int i=0;i<3;i++)
{
cout<<"\n\n";
for(int j=0;j<3;j++)
{
cout<<y[i][j];
}
}
for(int i=0;i<3;i++)
{
for(int j=0;j<3;j++)
     z[i][j]=x[i][j]+y[i][j];
}
cout<<"\nMATRIX [Z]";
for(int i=0;i<3;i++)
{
cout<<"\n\n";
for(int j=0;j<3;j++)
{
cout<<z[i][j];
}
}
}