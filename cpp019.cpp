#include <stdio.h>
using namespace std;

int main() {
	int n, max, cnt=0, i;
	
	scanf("%d", &n);
	
	int num[n];
	
	for(i=0; i<n; i++){
		scanf("%d", &num[i]);
	}
	
	max=num[n-1];
	
	for(i=n-2; i>=0; i--){
		if(num[i]>max){
			max=num[i];
			cnt++;
		}
	}
	
	printf("%d", cnt);
	
	return 0;
}
