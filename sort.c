#include <stdio.h>
int main()
 {
    int n,element,choice;
    printf("Please enter the number of integers in the list you want to sort:- ");
    scanf("%d",&n);
    int alpha[n];
    printf("Please enter %d integers for sorting with space: ",n);
    for(int i=0;i<n;i++){
        scanf(" %d",&alpha[i]);
    }
    printf("Which sorting method you want to use :\nPress 0 for insertion sort\nPress 1 for bubble sort\n");
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
  default:
    printf("You have not chosen appropriate sorting method");
    break;
  }
    return 0;
 }