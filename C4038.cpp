#include<stdio.h>

void swap( int *a, int *b){
	int tmp = *a;
	*a = *b;
	*b = tmp;
}
int main(){
	int n; scanf("%d",&n);
	int a[101];
	for( int i = 0; i<n;i++)
		scanf("%d",&a[i]);
		for( int i = 0; i < n-1;i++){
		int min = i;
			for( int j = i + 1; j < n; j++)
		    if(a[j]<a[min])
		    min = j;
		    swap(&a[i],&a[min]);
		    for( int j = 0; j < n; j++){
		    	printf("%d ",a[j]);
		    	
			}printf("\n");
		}
}