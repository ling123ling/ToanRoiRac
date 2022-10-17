#include <bits/stdc++.h>
using namespace std;
void docDSCanh(int a[][30],int&n)
{
	fstream f;;
	f.open("input1_2.txt",ios::in);
	if(f.fail())
	{
    	printf("Khong mo duoc tep!");
    	return;
    }
    int g,h;
	f>>n;
	for (int i = 1; i <=n; i++)
        for (int j = 1; j <=n; j++)
            a[i][j] = 0;
	while(!f.eof())
	{
		f>>g;
		f>>h;
		a[g][h]=1;
		a[h][g]=1;
	}
	f.close();
	f.open("output1_2.txt",ios::out);
	f<<"MA TRAN KE"<<endl;
//	cout<<"MA TRAN KE"<<endl;
	for(int i=1;i<=n;i++)
	{
		for(int j=1;j<=n;j++)
		{
			f<<a[i][j]<<"\t";
			//cout<<a[i][j]<<"\t";
		}
		f<<endl;
	//	cout<<endl;
	}
	f<<"DANH SACH KE"<<endl;
	for(int i=1;i<=n;i++)
	{
		f<<i<<"  :\t";
		for(int j=1;j<=n;j++)
		{
			if(a[i][j]==1)
			{
				f<<j<<"\t";
			}
		}
		f<<endl;
		
	}
	f<<"BAC CUA DINH"<<endl;
	for (int i = 1; i <= n; i++)
	{
        f << "Bac cua dinh " << i << " : ";
        int d = 0;
        for (int j = 1; j <= n; j++) 
			if (a[i][j] == 1) 
				d++;
       		f << d << endl;
    }
	
	f.close();
	
}
int main()
{
	int a[30][30];
	int n;
	docDSCanh(a,n);
}
