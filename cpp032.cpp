#include <stdio.h>
#include <algorithm>

int main(){
	
	//선택정렬 
	int n, i, j, idx, tmp;
	
	scanf("%d", &n);
	
	int num[n];
	
	for(i=0; i<n; i++){
		scanf("%d", &num[i]);
	}

	for(i=0; i<n; i++){
		idx = i;
		for(j=i+1; j<n; j++){
			if(num[idx] > num[j]){
				idx = j;
			}
		}
		tmp = num[i];
		num[i] = num[idx];
		num[idx] = tmp;
	}

	for(i=0; i<n; i++){
		printf("%d ", num[i]);
	}
	
	return 0;
}
