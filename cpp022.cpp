#include <stdio.h>
#include <vector>
using namespace std;

int main() {
	int n, k, i, max=0, sum;
	
	scanf("%d %d", &n, &k);
	
	vector<int> num(n);
	
	for(i=0; i<n; i++){
		scanf("%d", &num[i]);
	}
	
	// 첫구간 데이터
	for(i=0; i<k; i++){
		sum+=num[i];
		max=sum;
	}
	
	for(i=k; i<n; i++){
		sum=sum+(num[i]-num[i-k]);
		if(sum>max) max=sum;
	}
	
	printf("%d", max);
	
	
	return 0;
}
