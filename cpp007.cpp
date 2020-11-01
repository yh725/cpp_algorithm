#include<stdio.h>
#include<string>
using namespace std;

int main(){
	
	char s[101];
	string str;
	
	//freopen("input007.txt", "rt", stdin);
	
	gets(s);
	
	for(int i=0; s[i]!='\0'; i++){
		if(s[i]>='A' && s[i]<='Z'){
			str += s[i]+32;
		}else if(s[i]>='a' && s[i]<='z'){
			str += s[i];
		}		
	
	}
	
	printf("%s", str.c_str());
	
	
	
	return 0;
}
