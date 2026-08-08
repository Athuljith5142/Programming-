#include <stdio.h>

int binary_search(int arr[],int a,int k,int low,int high){
   if(low>high){
        return -1;
   }
   int mid=(low+high)/2;

    if(arr[mid]==k){
        return 1;
    }

   if(arr[mid]<k){
    return binary_search(arr,a,k,mid+1,high);
   }
   else{
    return binary_search(arr,a,k,low,mid-1);
   }

}

int main(){
    
    int a;
    printf("Enter the size of the array: ");
    scanf("%d", &a);
    int arr[a];

    for(int i=0;i<a;i++){
        printf("Enter the %d element : ",i+1);
        scanf("%d",&arr[i]);
    }

    for(int i=0;i<a;i++){
        printf("%d\t",arr[i]);
    }

    int k;
    printf("\nEnter the value to be search : ");
    scanf("%d",&k);
    
    int low=0,high=a-1,mid,f=0;
    

    int d = binary_search(arr,a,k,0,a-1);

    if(d==-1){
        printf("Value is not founded");
    }
    else{
        printf("%d is founded in %d",k,d+1);
    }
    
}