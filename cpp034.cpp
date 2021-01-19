#include <stdio.h>

int main(){
	//버블 정렬 
	int n, m, i, j, tmp;
	
	scanf("%d", &n);
	
	int num[n];
	
	for(i=0; i<n; i++){
		scanf("%d", &num[i]);
	}
	
	m = n;
	
	for(i=0; i<n; i++){
		tmp = num[0];
		for(j=1; j<m; j++){
			if(num[j-1]>num[j]){
				num[j-1]=num[j];
				num[j]=tmp;
			}else{
				tmp = num[j];
			}
			
		}
		m--;
	}
	
	for(i=0; i<n; i++){
		printf("%d ", num[i]);
	}
	
	
	return 0;
}
