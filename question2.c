#include<stdio.h>
int main(){
int arr[]={18,6,43,10,38};
int p = sizeof(arr)/sizeof(arr[0]);
int smallest = arr[0];
for(int a=1 ; a < p ;a++){
    if(arr[a]< smallest){
        smallest = arr[a];
    }
}
printf("the smallest element in array is : %d\n",smallest);
return 0;
}