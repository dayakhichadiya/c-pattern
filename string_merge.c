#include<stdio.h>
int main(){
    
    char arr1[5];
    char arr2[5];
    int k=0;
    char arr3[10];
    
    printf("Enter first string :");
    scanf("%s",arr1);
    
    printf("\nEnter second string :");
    scanf("%s",arr2);
    
    for(int i=0;i<5;i++,k++){
        arr3[i]=arr1[i];
    }
    for(int j=0;j<5;j++,k++){
        arr3[k]=arr2[j];  
    }
    for(int a=0;a<10;a++){
        printf("%c ",arr3[a]);
    }
    
return 0;
}