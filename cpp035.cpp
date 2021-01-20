#include <stdio.h>

int main(){
	//버블 정렬 응용  
	int n, i, j, tmp;
	
	scanf("%d", &n);
	
	int num[n];
	
	for(i=0; i<n; i++){
		scanf("%d", &num[i]);
	}

	for(i=0; i<n; i++){
		for(j=0; j<n-i-1; j++){
			if(num[j]>num[j+1] && !(num[j]>0&&num[j+1]>0) && !(num[j]<0&&num[j+1]<0)){
				tmp = num[j];
				num[j]=num[j+1];
				num[j+1]=tmp;
			}
			
		}
	}
	
	for(i=0; i<n; i++){
		printf("%d ", num[i]);
	}
	
	
	return 0;
}
