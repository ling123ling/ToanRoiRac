#include<iostream>
using namespace std;
class DoThi
{
	private:
		int n1,n2;
		int a[n1][n2];
	public:
		void docMaTranKe(char tenFile[50]);
		void docDSKe(char tenFile[50]);
		void docDSCanh(char tenFile[50]);
		int timBac(int);
		void timDinhKe(int);
		int soDinh();
		int soCanh();
};
void DoThi::docMaTranKe(char tenFile[50])
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
	f.close()
}

