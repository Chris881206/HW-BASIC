#include <iostream>
using namespace std;
int a,b,c;
int main(int argc,char** argv)
{
	cout<<"���F�P�_�i�_�򦨤T���νп�J�T�Ӽ�"<<endl;
	cin>>a;
	cin>>b;
	cin>>c;
	if(a+b>c)
	{
		if(a+c>b)
		{
			if(b+c>a)
			{
				cout<<"�i�H�Φ��T����";
			}
		}
	}
	else
	{
		cout<<"���i�Φ��T����"<<endl; 
	}
	return 0;
}
