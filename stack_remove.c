#include<stdio.h>
int temp=-1;


void add(int  arr[],int n,int element)
 {
    if(temp >= n-1){
        printf("stack is full\n");
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
void delete(int  arr[],int n,int element)
 {
    if(temp >= n-1){
        printf("stack is empty\n");
    }
    else{
        temp--;
        arr[temp]=element;
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
    printf("1. for insert the data\n");
    printf("2. for display the data\n");
    printf("3. for remove the data \n");
    printf("0. for exit\n");
    printf("enter your choice\n");
    scanf("%d",&user);

    if(user==1){
        printf("enter the element :");
        scanf("%d",&element);
    add(arr,n,element);
    }
    else if(user==2){
    display(arr);
    }
    else if(user==3){
        printf("enter the element which you want to delete:");
        scanf("%d",element);
         delete(arr,n,element);

    }
}
while(user>=0|| user<=5);

return 0;
}