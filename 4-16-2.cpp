#include<bits/stdc++.h>
using namespace std;
int main(){
	//long long a,b;
	int sum=0;
	//cin>>a>>b;
	//for(int i=a;i<=b;i+=6){
	for(int i=101;i<=1000000;i+=6){
		if(i%2!=0)
		for(int k=0;k<=2;k+=2){
			sum=0;
			for(int j=2;j<=sqrt(i+k);j++){
				if((i+k)%j==0) sum=1;
			} 
			if(sum==0) cout<<(i+k)<<" ";
		}
	}
	return 0;
}
