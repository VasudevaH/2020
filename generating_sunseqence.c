#include<stdio.h>
#include<math.h>
//Total number of subsequences in the given array is pow(2,sizeof(arr))
void generate(int arr[],int n){
    int count= pow(2,n);int i,j;
    for(i=1;i<count;i++){
        for(j=0;j<n;j++){
            if(i&(1<<j)){
                //check wether each bit of the counter is set, if set then print the element 
                // corresponding to that element.
                printf("%d ",arr[j]);
            }
        }
        printf("\n");
    }
}
int main(){
    int arr[4]={1,2,3,4};
    int n=4;
    generate(arr,n);
}