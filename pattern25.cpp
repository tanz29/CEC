#include<iostream>
using namespace std;

int main()
{
	int i,j,k,l;
	int n = 5;
	for(i=0;i<n;i++){
        for(j=0;j<n-i-1;j++)
            cout<<" ";
		for(k=0;k<=i;k++){
			cout<<k+1;
		}
		for(l=i;l>=1;l--){
            cout<<l;
		}
        cout<<"\n";
	}
	for(i=0;i<n;i++){
        for(j=0;j<=i;j++)
            cout<<" ";
		for(k=0;k<n-i-1;k++){
			cout<<k+1;
		}
		for(l=k-1;l>=1;l--){
            cout<<l;
		}
        cout<<"\n";
	}
	return 0;
}
