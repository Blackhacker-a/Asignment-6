#include<stdio.h>
int main(){
	int n;
	do{
	printf("Nhap vao so luong cua mang ");
	scanf("%d",&n);
	} while(n<0);
    int arr[n];	
	for(int i=0;i<n;i++){
		printf("Nhap phan tu cua %d cua mang ",i);
		scanf("%d",&arr[i]);
	}
	int count=0;
	for(int i=n-1;i>=0;i--){
		
		if(arr[i]%2!=0){
			printf("Phan tu le cuoi cung cua mang la %d",arr[i]);
			break;
		}
		if(arr[i]%2==0){
			count++;
		}
	}
	if(count==n){
		printf("Mang khong co phan tu le ");
	}
}
