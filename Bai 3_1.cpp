#include<stdio.h>
int main(){
	int n,count;
	do{
	printf("Nhap so phan tu cua mang ");          //nhap so luong phan tu cua mang
	scanf("%d",&n);
	} while(n<2);
	int arr[n];
	for(int i=0;i<n;i++){
		printf("Nhap phan tu thu %d cua mang \n",i);//nhap mang
		scanf("%d",&arr[i]);
	}
	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++){
		    if(i!=j&& arr[i]!=arr[j]){
		    	count=1;                            //neu 2 thang khac nhau voi chi so khac nhau thi count=1
		    } 
		    if(i!=j && arr[i]==arr[j]){
		    	count=0;                            //neu 2 thang bang nhau voi chi so khac nhau thi count=0
		    }
		}
	}
	if (count==1){
	   printf("Ket thuc vong lap");
	}     
	else if(count==0){
	do{
	    for(int k=0;k<n;k++){
		printf("Nhap lai phan tu thu %d cua mang \n",k); //nhap lai mang
		scanf("%d",&arr[k]);	
		}
		for(int i=0;i<n;i++){
		    for(int j=0;j<n;j++){
		        if(i!=j && arr[i]==arr[j]){               //check mang phat nua
		    	   count=0;
		        }
		        if(i!=j&& arr[i]!=arr[j]){
		    	   count=1;
		        } 
		    }
	    }
	    if(count==1){
		break;
		}
	} while(count==0);	
}
}	
