// #include<stdio.h>
// int main(){
// int marks[90];  // this says that 90 values can be stored
// printf("enter the mark of first student :"); 
// scanf("%d",&marks[0]);
//     printf("the value is   %d ", marks[0]);
//     return 0;
// }
#include<stdio.h>
int main(){
    printf("enter the marks of 5 students :");
    int marks[10];
    for ( int i=0;i<5;i++){
        scanf("%d",&marks[i]);
    }
    for (int i =0;i<5;i++){
        printf("the value of 5 subjectsat index %d is %d \n", i,marks[i]);

    }
    return 0;
}