#include <stdio.h>
#include <vector>
#include <algorithm>
using namespace std;

int a[2001];
int tmp[2001];
int main(){
	
	int n, k, i, pos=0, cnt=0, z_cnt=0;
	
	scanf("%d", &n);
	
	for(i=1; i<=n; i++){
		scanf("%d", &a[i]);
		tmp[i] = a[i];
			
	}
	
	scanf("%d", &k);
	
	while(1){
		++pos;
		if(pos>k) pos=1;
		
		if(a[pos]!=0){
			a[pos]--;
			cnt++;
		}else{
			z_cnt++;
		}
		
		if(cnt==k){
			break;
		}else if(z_cnt==k){
			break;
		}
	}
	
	
	if(z_cnt==k){
		printf("-1");
	}else{
		printf("%d", tmp[pos]);	
	}
	
	
	return 0;
}
