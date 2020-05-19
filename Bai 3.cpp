#include<stdio.h>
int main(){
	int n;
	do{
		printf("Nhap so phan tu cua mang ");
		scanf("%d",&n);
	} while(n<0);
	int count=0;
	int arr[n];
	for(int i=0;i<n;i++){
		int trungso=0;
		do{
		printf("Nhap phan tu thu %d cua mang ",i);
		scanf("%d",&arr[i]);
		for(int j=0;j<i;j++){
			if(arr[i]==arr[j]){
				trungso=1;
				break;
			}
		}
	    } while(trungso==1); // lam cai ben trong den khi dung thoat 
	}
}
	
	
	
	
	
	
	
	
	
