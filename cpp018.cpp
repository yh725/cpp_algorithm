#include <stdio.h>
using namespace std;

int main() {
	int n, m, num, i, cnt=0, max=0;
	
	scanf("%d %d", &n, &m);
	
	for(i=0; i<n; i++){
		scanf("%d", &num);
		
		if(num > m){
			cnt++;
			if(cnt>max) max=cnt;
		}else{
			cnt=0;
		}
		
	}
	
	if(max==0) max--;
	
	printf("%d", max);
	
	return 0;
}
