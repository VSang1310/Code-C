#include<stdio.h>
int min( int m, int n){
	return m < n ? m : n;
}
int main(){
	int a, b; scanf("%d%d", &a,&b);
	for( int i = 1; i <= a; i++){
		int d = min(i,b);
		for( int j = 1; j<= b; j++){
			if( j<= b - i + 1){
				printf("%c", 63 + d++);
			} else {
				printf("%c", 63 + b);
			}
		}
		printf("\n");
	}
}