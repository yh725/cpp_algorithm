#include<stdio.h>
using namespace std;

//전역 변수 선언, 기본 테이블, 다이나믹 테이블 
int a[701][701], dy[701][701];
int main(){
	// 내용 :  DP
	
	// 입력 
	//freopen("input051.txt", "rt", stdin);
	int h, w, n, m, i, j, tmp, max=-2147000000;
	scanf("%d %d", &h, &w);
	
	//다이나믹 테이블 입력 
	for(i=1; i<=h; i++){
		for(j=1; j<=w; j++){
			scanf("%d", &a[i][j]);
			dy[i][j]=dy[i-1][j]+dy[i][j-1]-dy[i-1][j-1]+a[i][j];
		}
	}
	
	printf("%d\n", h);
	for(i=n; i<=h ;i++){
		for(j=m; j<=w ;j++){
		 	tmp=dy[i][j]-dy[i-n][j]-dy[i][j-m]+dy[i-n][j-m];
		 	if(tmp>max) max=tmp;
		}
	 }
	
	printf("%d\n", max);
	
	return 0;
}
