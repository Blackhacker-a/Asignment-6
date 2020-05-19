#include<stdio.h>
int main(){
	int n;
	do{
	printf("Nhap so phan tu cua mang \n");
	scanf("%d",&n);
	} while(n<2);
	int arr[n];
	for(int i=0;i<n;i++){
		printf("Nhap phan tu thu %d cua mang \n",i);
		scanf("%d",&arr[i]);
	}
	
	int count;
//	int x=arr[0];
	for(int i=1;i<n;i++){
		if(arr[i]!=arr[0]){
		   count=0;
		}
		if(arr[i]==arr[0]){
			count=1;
		}
	}
	if(count==0){
	   printf("Cac so ban nhap cua mang phan biet ");
	}
	else if(count==1){
	do{
		for(int i=0;i<n;i++){
			printf("Nhap lai phan tu thu %d cua mang \n",i);
		    scanf("%d",&arr[i]);
		}
		for(int i=0;i<n;i++){    
		    if(arr[i]!=arr[0]){
		    	count=0;
		    }
		    if(arr[i]==arr[0]){
		    	count=1;
		    }
		}    	
	}while(count==1);
	if(count==0){
		printf("Cac so ban nhap cua mang phan biet ");
	}
    }
}		

	
	
	
	
	
	
	
	
	
	
