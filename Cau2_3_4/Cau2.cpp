#include <bits/stdc++.h>
using namespace std;
void docFile(char tenFile[50],int a[30][30], int &n)
{
	fstream f;
	f.open(tenFile,ios::in);
	if(f.fail())
	{
    	printf("Khong mo duoc tep!");
    	return;
    }
	f>>n;
	for(int i=1;i<=n;i++)
	{
		for(int j=1;j<=n;j++)
			f>>a[i][j];
	}
	f.close();		
}
void inMaTran(int a[30][30],int &n)
{
	docFile("input1.txt",a,n);
	cout<<"MA TRAN KE"<<endl;
	for(int i=1;i<=n;i++)
	{
		for(int j=1;j<=n;j++)
			cout<<a[i][j]<<"\t";
		cout<<endl;
	}
}
void dsCanh(int a[30][30],int &n)
{
	fstream f;
	f.open("input1_2",ios::out);
	if(f.fail())
	{
    	printf("Khong mo duoc tep!");
    	return;
    }
	docFile("input1.txt",a,n);
	f<<n<<endl;
	cout<<"DANH SACH CANH"<<endl;
	for(int i=1;i<=n;i++)
	{
		for(int j=1;j<=n;j++)
		{
			if(a[i][j]==1&&i<j)
			{
				cout<<i<<"\t"<<j<<endl;
				f<<i<<"\t"<<j<<endl;
			}
		}
		
	}
	f.close();
}
void dsKe(int a[30][30],int &n)
{
	fstream f;
	f.open("input1_1",ios::out);
	if(f.fail())
	{
    	printf("Khong mo duoc tep!");
    	return;
    }
	docFile("input1.txt",a,n);
	f<<n<<endl;
	cout<<"DANH SACH KE"<<endl;
	for(int i=1;i<=n;i++)
	{
		cout<<i<<":\t";
		f<<i<<"\t";
		for(int j=1;j<=n;j++)
		{
			if(a[i][j]==1)
			{
				cout<<j<<"\t";
				f<<j<<"\t";
			}
		}
		f<<endl;
		cout<<endl;
		
	}
	f.close();
}
	

int main()
{
	int a[30][30], n;
	FILE *f;
	inMaTran(a,n);
	dsCanh(a,n);
	dsKe(a,n);

}
	
