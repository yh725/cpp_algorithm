#include <stdio.h>
using namespace std;

int cnt[11];
int main(){
	int n, i, tmp, sum;
	scanf("%d", &n);
	
	for(i=1; i<=n ; i++){
		tmp = i ;
		while(tmp>0){
			cnt[tmp%10]++;
			tmp = tmp/10;
		}
	}
	for(i=0; i<=9; i++){
		sum += cnt[i];
	}
	
	printf("%d\n", sum);	
	
	return 0;
}
