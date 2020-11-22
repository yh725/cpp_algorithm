#include <stdio.h>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
	int n, i, j, a[101], b[101];
	
	scanf("%d", &n);
	
	for(i=1; i<=n; i++){
		scanf("%d", &a[i]);
		b[i]=1;
	}
	
	for(i=1; i<=n; i++){
		for(j=1; j<=n; j++){
			if(a[j]>a[i]) b[i]++;
		}
	}
	
	for(i=1; i<=n; i++){
		printf("%d ", b[i]);
	}
	
	return 0;
}
