# include <iostream>
# include <conio.h>
using namespace std;
int main ()
{
int A[10][10],m,n,x,y,sum=0;
cout<<"Enter number of rows and columns in Matrik A: \n";
cin>>n>>m;
cout<<"Enter elements of Matrik A: \n";
for (x=1;x<n+1;++x)
for (y=1;y<m+1;++y)
cin>>A[x][y];
//find sum of each row
for (x=1;x<n+1;++x)
{
A[x][m+1]=0;
for (y=1;y<m+1;++y)
A[x][m+1]=A[x][m+1]+A[x][y];
}
//find sum of each column
for (y=1;y<m+1;++y)
{
A[n+1][y]=0;
for (x=1;x<n+1;++x)
A[n+1][y]+=A[x][y];
}
cout<<"\nMatrik A, Row Sum (Last Column)"<<"and Column Sum (Last Row): \n";
for (x=1;x<n+1;++x)
{
for (y=1;y<m+2;++y)
cout<<A[x][y]<<" ";
cout<<"\n";
if (m==n)
{
for (x=1;x<m+1;x++)
for (y=1;y<n+1;y++)
if(x==y)
sum+=A[x][y];
}
}
cout<<"Sum of diagonal elements is: "<<sum<<endl;
getch();
return 0;
}
