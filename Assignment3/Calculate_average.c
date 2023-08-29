#include "stdio.h"
int main(){
int size_data;
int sum=0;
printf("please enter the size of the data  ");
scanf("%d",&size_data);
int arr[size_data];
for(int i =0;i<size_data;i++){
   printf("Enter element no %d ",i+1);
   scanf("%d",&arr[i]);
   sum=sum+arr[i];
    
}

double average=sum/size_data ;
printf("The average sum of the array given is %f",average);






    return 0;
}