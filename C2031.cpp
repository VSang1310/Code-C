#include<stdio.h>

int main(){
	int n; scanf("%d", &n);
	for(int i = n; i >= 1; i--){
		int d = i;
		for(int j = 1; j<= i; j++){
			printf("%c", 63 + d++);
		}
		printf("\n");
	}
}