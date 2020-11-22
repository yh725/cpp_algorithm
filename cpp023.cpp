#include <stdio.h>
#include <vector>
using namespace std;

int main() {
	int n, i, max=1, cnt=1;
	
	scanf("%d", &n);
	
	vector<int> num(n);
	
	for(i=0; i<n; i++){
		scanf("%d", &num[i]);
	}
	
	for(i=1; i<n; i++){
		if(num[i]>=num[i-1]){
			cnt++;
		}else{
			cnt=1;
		}
		
		if(cnt>max) max=cnt;
	}
	
	printf("%d", max);
	
	return 0;
}
