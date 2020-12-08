#include <stdio.h>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
	int n, i, j, tmp, cnt1=0;
	
	scanf("%d", &n);
	
	
	// 소인수 분해 
	for(i=2; i<=n; i++){
		tmp=i;
		j=2;
		while(1){
			if(tmp%j==0){
				tmp=tmp/j;
				if(j==5) cnt1++;
			}else{
				j++;
			}
			if(tmp==1) break;
		}
	}
	
	printf("%d\n", cnt1);

	
	return 0;
}
