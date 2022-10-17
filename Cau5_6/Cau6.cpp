#include <bits/stdc++.h>
using namespace std;
void docDSKe(int a[][30],int&n)
{
	fstream f;
	string s; 
	f.open("input2_1.txt",ios::in);
	if(f.fail())
	{
    	printf("Khong mo duoc tep!");
    	return;
    }
	getline(f,s);
	n=s[0]-48;
	for (int i = 1; i <=n; i++)
        for (int j = 1; j <=n; j++)
            a[i][j] = 0;
    int i=0,j=0;  
    int m,q;
	while(!f.eof())
	{
		//f>>i;
		j=0;
		getline(f,s);
		i=s[0]-48;
		for (int k = 1; k < s.length(); k++)
		{
			if (s[k] <= '9' && s[k] >= '1' )
			{
                m=s[k]-48;
                a[i][m] = 1;
               // cout  << a[i][j] << " ";
            }
           
		}
				
    }
  	
	//ghi ma tran ke
	f.close();
	f.open("output2_1.txt",ios::out);
	cout<<"MA TRAN KE"<<endl;
	f<<"MA TRAN KE\n";
	for(int i=1;i<=n;i++)
	{
		for(int j=1;j<=n;j++)
		{
			f<<a[i][j]<<"\t";
			cout<<a[i][j]<<"\t";
		}
		f<<endl;
		cout<<endl;
	}
	f<<"DANH SANH CANH\n";
	for (int i = 1; i <= n; i++)
	{
        for (int j = 1; j <= n; j++)
		{
            if (a[i][j] == 1)
				f << i << "\t" << j << endl;
        }
    }
    f<<"BAC CUA DINH\n";
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
	int a[30][30], n;
	docDSKe(a,n);
}
