#include <stdio.h>
using namespace std;

int reverse(int x){
	int res=0, tmp;
	while(x>0){
		tmp=x%10;
		res=res*10+tmp;
		x=x/10;
	}
	
	return res;
}

bool isPrime(int x){
	int i;
	bool flag=true;
	if(x==1) flag=false;
	for(i=2; i<x; i++){
		if(x%i==0){
			flag=false;
			break;
		}
	}
	
	return flag;
}

int main(){
	
	//freopen("input014.txt", "rt", stdin);
	int n, num, i, rev;
	scanf("%d", &n);

	for(i=1; i<=n; i++){
		scanf("%d", &num);
		rev=reverse(num);
		if(isPrime(rev)) printf("%d ", rev);
	}
	
	return 0;
}
