#include <stdio.h>
void mergesort(int a[],int l,int r);
void merge(int a[],int l1,int r1,int l2,int r2);
int main()
 {
    int n,element,choice,position;
    printf("Please enter the number of integers in the list you want to sort:- ");
    scanf("%d",&n);
    int alpha[n];
    printf("Please enter %d integers for sorting with space: ",n);
    for(int i=0;i<n;i++){
        scanf(" %d",&alpha[i]);
    }
    printf("Which sorting method you want to use :\nPress 0 for insertion sort\nPress 1 for bubble sort\nPress 2 for selection sort\nPress 3 for merge sort\n");
    scanf("%d",&choice);
    switch(choice){
    case 0:
    for(int i = 1; i <= n - 1; i++) {
    for(int j = i; j > 0 && alpha[j - 1] > alpha[j]; j--) {
     element = alpha[j];
     alpha[j] = alpha[j - 1];
     alpha[j - 1] = element;
   }
} 
   printf("\nInsertion Sort Result is ");
   for(int i = 0; i < n; i++) {
    printf(" %d", alpha[i]);
    if (i!=n-1){
        printf(",");
    }
  } 
  break;
   case 1:
   for(int i = 0 ; i < n - 1; i++) {
     for(int j = 0 ; j < n-i-1; j++) {
      if(alpha[j] > alpha[j+1]) {
         element = alpha[j];
         alpha[j] = alpha[j+1];
         alpha[j+1] = element;
       }
    }
}  
   printf("\nBubble Sort Result is ");
   for(int i = 0; i < n; i++) {
    printf(" %d", alpha[i]);
    if (i!=n-1){
        printf(",");
    }
  } 
   break;
   case 2:
   for (int i = 0; i < (n- 1); i++) {
   position = i;
   for (int j = i + 1; j < n; j++) {
    if (alpha[position] > alpha[j])
      position = j;
   }
   if (position != i) {
     element = alpha[i];
     alpha[i] = alpha[position];
     alpha[position] = element;
   }
 }
 printf("Sorted list in ascending order is ");
 for(int i = 0; i < n; i++) {
    printf(" %d", alpha[i]);
    if (i!=n-1){
        printf(",");
    }
  } break;
  case 3:
    mergesort(alpha,0,n-1);
    printf("\nMerge Sort Array result is : ");
    for(int i = 0; i < n; i++) {
    printf(" %d", alpha[i]);
    if (i!=n-1){
        printf(",");
    }
  }
    break;
  default:
    printf("You have not chosen appropriate sorting method");
    break;
  }
    return 0;
 }
 void mergesort(int a[],int l,int r) {
 int mid;
 if(l<r) {
   mid=(l+r)/2;
   mergesort(a,l,mid); //left recursion
   mergesort(a,mid+1,r); //right recursion
   merge(a,l,mid,mid+1,r); //merging of two sorted sub-arrays
 }
}
void merge(int a[],int l1,int r1,int l2,int r2) {
 int temp[50]; //array used for merging
 int l,r,k;
 l=l1; 
 r=l2; 
 k=0;
 while(l<=r1 && r<=r2){ 
   if(a[l]<a[r])
      temp[k++]=a[l++];
   else
      temp[k++]=a[r++];
}
 while(l<=r1)
   temp[k++]=a[l++];
   while(r<=r2)
     temp[k++]=a[r++];
     for(l=l1,r=0;l<=r2;l++,r++)
       a[l]=temp[r];
       
 
}