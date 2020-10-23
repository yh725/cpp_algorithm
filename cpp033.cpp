#include <iostream>
#include <stdio.h>
using namespace std;

int main(){
	
	//입력 
	freopen("input033.txt", "rt", stdin);
	int n, a[101], i, j, tmp, idx, cnt=0;
	scanf("%d", &n);
	for(i=0; i<n ;i++){
		scanf("%d", &a[i]);
	}
	
	//내림차순 정렬 
	for(i=0; i<n ;i++){
		idx=i;
		for(j=i+1; j<n; j++){
			if(a[idx]<a[j]) idx=j;
		}
		
		tmp=a[i];
		a[i]=a[idx];
		a[idx]=tmp;
	}
	
	//순위 
	for(i=1; i<n ;i++){
		if(a[i-1]!=a[i]) cnt++;
		if(cnt==2){
			printf("%d\n", a[i]);
			break;
		}
	}	
	
	return 0;
}

