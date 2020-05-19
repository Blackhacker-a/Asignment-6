#include<stdio.h>
int main(){
	int n;
	do{
		printf("Nhap so phan tu cua mang ");
		scanf("%d",&n);
	} while(n<2);
	int arr[n];
	for(int i=0;i<n;i++){
		printf("Nhap phan tu thu %d cua mang ",i);
		scanf("%d",&arr[i]);
	}
	for(int j=0;j<n;j++){
	for(int i=j+1;i<n;i++){
		if(arr[j]==arr[i]){
			printf("Nhap lai phan tu thu %d cua mang ",i);
		scanf("%d",&arr[i]);
		}
	}
    }
}
	
	
	
	
	
	
	
	
	
