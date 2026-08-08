#include <stdio.h>
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
    int f=0,c=0;
    for(int i=0;i<a;i++){
        if(arr[i]==k){
            f=1;
            break;
        }
        c++;
    }

    if(!f){
        printf("%d is not founded",k);
    }
    else{
        printf("%d  is founded at index %d",k,c);
    }
    
    
}