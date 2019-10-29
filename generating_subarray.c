#include<stdio.h>
void generate(int arr[],int n){
    int i,j,k;
    for(i=0;i<n;i++){
        for(j=i;j<n;j++){
            for(k=i;k<=j;k++){
                printf("%d\t",arr[k]);
            }
            printf("\n");
        }
    }
}
int main(){
    int arr[4]={1,2,3,4};
    int n=4;
    generate(arr,n);
}