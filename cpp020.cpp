#include <stdio.h>
using namespace std;

int main() {
	int n, i;
	
	scanf("%d", &n);
	
	int a[n], b[n];
	
	for(i=0; i<n; i++){
		scanf("%d", &a[i]);
	}
	
	for(i=0; i<n; i++){
		scanf("%d", &b[i]);
	}
	
	for(i=0; i<n; i++){
		if(a[i]==b[i]){
			printf("D\n");
		}else if(a[i]==1&&b[i]==3){
			printf("A\n");
		}else if(a[i]==3&&b[i]==1){
			printf("B\n");
		}else if(a[i]>b[i]){
			printf("A\n");
		}else{
			printf("B\n");
		}
	}
	
	
	return 0;
}
