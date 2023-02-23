#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
	int a[3][3],determinant;
	cout<<"please enter number:"<<endl;
	for(int i=0;i<=2;i++)
	{
		for (int j=0;j<=2;j++)
		{
			
			cout<<"a["<<i<<"]["<<j<<"] = ";
			cin>>a[i][j];
		}
	}
    determinant=(a[0][0]*((a[1][1]*a[2][2])-(a[1][2]*a[2][1])))-(a[0][1]*((a[1][0]*a[2][2])-(a[1][2]*a[2][0])))+(a[0][2]*((a[1][0]*a[2][1])-(a[1][1]*a[2][0])));
    cout<<"determinant = "<<determinant<<endl;
	getch();
	return 0;
}