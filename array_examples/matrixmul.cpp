#include<iostream>
using namespace std;
int  main()
{
	int mat1[3][3], mat2[3][3], mat3[3][3], sum=0;
	cout<<"Enter first matrix element (3*3) : ";
	for(int i=0; i<3; i++)
	{
		for(int j=0; j<3; j++)
		{
			cin>>mat1[i][j];
		}
	}
	cout<<"Enter second matrix element (3*3) : ";
	for(int i=0; i<3; i++)
	{
		for(int j=0; j<3; j++)
		{
			cin>>mat2[i][j];
		}
	}
	cout<<"Multiplying two matrices...\n";
	for(int i=0; i<3; i++)
	{
		for(int j=0; j<3; j++)
		{
			sum=0;
			for(int k=0; k<3; k++)
			{
				sum = sum + mat1[i][k] * mat2[k][j];
			}
			
			mat3[i][j] = sum;
		}
	}
	cout<<"\nMultiplication of two Matrices : \n";
	for(int i=0; i<3; i++)
	{
		for(int j=0; j<3; j++)
		{
			cout<<mat3[i][j]<<" ";
		}
		cout<<"\n";
	}
}