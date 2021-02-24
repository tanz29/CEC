#include<iostream>
using namespace std;

int main()
{
	int i,j;
	int n = 5;
	for(i=0;i<n;i++){
		for(j=0;j<n-i;j++){
			cout<<n-j-i;
		}
	cout<<"\n";
	}
	return 0;
}
