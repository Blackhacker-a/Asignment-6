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
	for(int i=0;i<n;i++){
		if(arr[i]<0){
			count++;
			}
	}
	if(count==n){
		printf("Mang toan so am");
		return 0;
		}
	int min=arr[0];
	for(int i=0;i<n;i++){
		if(min > arr[i]){
			min = arr[i];
		}
	}
	int n_min=min;
	
	for(int i=0;i<n;i++){
	    if(arr[i]>0){
	    n_min=arr[i];
	    break;
	    }
	}   
    for(int i=0;i<n;i++){
    	if(n_min>arr[i]&& arr[i]>0){
    		n_min=arr[i];
    		}
    	
    }
	
	printf("Gia tri can tim la %d", n_min);
}	
	
	
