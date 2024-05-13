#include<stdio.h>
int temp=-1;


void insert(int  arr[],int n,int element)
 {
    if(temp >= n-1){
        printf("stack is full");
    }
    else{
        temp++;
        arr[temp]=element;
 } 
}

void display(int arr[] ){
    for(int i=0;i<=temp;i++){
        printf(" %d ",arr[i]);
    }
}
int main(){
    int n;
    printf("enter the array size :");
    scanf("%d",&n);
    int arr[n];
    int element;
    int user;
    
   
    do{
    printf("1. for insert the data\n ");
    printf("2. for display the data\n");
    printf("0. for exit\n");
    printf("enter your choice\n");
    scanf("%d",&user);

    if(user==1){
        printf("enter the element :");
        scanf("%d",&element);
    insert(arr,n,element);
    }
    else if(user==2){
    display(arr);
    }
}
while(user>=0|| user<=5);

return 0;
}