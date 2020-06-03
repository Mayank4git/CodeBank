#include<iostream>
using namespace std;

int main()
    {

    int matrix[5][5],transpose_matrix[5][5];
    int rows,cols;
      cout<<"Enter Number of Rows: ";
      cin>>rows;
      cout<<"Enter Number Of Columns: ";
      cin>>cols;
       for( int i=0;i<rows;i++){
           for(int  j=0;j<cols;j++)
           {
               cin>>matrix[i][j];
           }
          }
          cout<<"\n Matrix You Entered\n";
       for( int i=0;i<rows;i++){
           for(int j=0;j<cols;j++)
           {
               cout<<matrix[i][j]<<"     ";
           }
           cout<<endl;
          }
    cout<<"\n\n\nTranspose of Entered Matrix\n";
       for( int i=0;i<rows;i++){
           for( int j=0;j<cols;j++)
           {
               transpose_matrix[j][i]=matrix[i][j];
           }
           cout<<endl;
          }
       for( int i=0;i<cols;i++){
           for( int j=0;j<rows;j++)
           {
               cout<<transpose_matrix[i][j]<<"    ";
           }
           cout<<endl;
          }
        }