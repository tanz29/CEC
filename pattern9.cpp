#include<iostream>
using namespace std;

int main()
{
	int i,j,k;
	int n = 5;
	for(i=0;i<n;i++){
        for(j=0;j<n-i-1;j++)
            cout<<" ";
		for(k=i+1;k>=1;k--){
			cout<<k;
		}
        cout<<"\n";
	}
	return 0;
}
