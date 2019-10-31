#include<stdio.h>
int cache[5];
int query(int i,int j){
    return cache[j+1]-cache[i];
}
void generate_cache(int arr[],int n){
    int i;
    cache[0]=0;
    for(i=1;i<=n;i++){
        cache[i]=cache[i-1]+arr[i-1];
    }

}
int main(){
    int arr[5]={10,20,5,4,3};
    int n=sizeof(arr)/sizeof(arr[0]);
    generate_cache(arr,n);
    int i=1;
    int j=4;
    printf("Sum from index %d to %d is %d",i,j,query(i,j));
}