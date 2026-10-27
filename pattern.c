// //.     HALF PYRAMID PATTERN 
// #include<stdio.h>
// int main(){
//     int n;
//     printf("enter number of rows required:");
//     scanf("%d",&n);
//     for (int i=1;i<=n;i++){
//         for (int j=1;j<=i;j++){
//             printf("*");
//         }
//         printf("\n");
//     }
// }
// int main(){
//     int n=4;
//     for(int i =n;i>=1;i--){
//         for(int j=1;j<=n-i;j++){
//             printf(" ");
//         }
//         for (int j=1;j<=i;j++){
//             printf("*");
//         }
//         printf("\n");
//     }
//     return 0;
// }

// // }
// #include<stdio.h>
// int main(){
//     int n=5;
//     for (int i=1; i<=n; i++){
//         for(int j=1; j<=n-i;j++){
//             printf(" ");
//         }
//         for(int j=1;j<=i;j++){
//             printf("%d ",j );
//         }
//         printf("\n");
//     }
//     return 0;
// }


// #include <stdio.h>

// int main() {
//     int n = 5;

//     for (int i = 1; i <= n; i++) {

//         // Print spaces
//         for (int j = 1; j <= n - i; j++) {
//             printf(" ");
//         }

//         // Print stars
//         for (int j = 1; j <= i; j++) {
//             printf("* ");
//         }

//         // Move to the next row
//         printf("\n");
//     }

//     return 0;
// }

// ask  tyahi num store rashanxa
// #include <stdio.h>

// int main() {
//     int n = 5;
//     int num = 1;

//     for (int i = 1; i <= n; i++) {
//         for (int j = 1; j <= i; j++) {
//             printf("%d ", num);
//             num++;
//         }

//         printf("\n");
//     }

//     return 0;
// }


#include <stdio.h>

// int main() {
//     int n = 5;

//     for (int i = n; i >= 1; i--) {
//         for (int j = 1; j <= n - i; j++) {
//             printf(" ");
//         }
//         for (int j = 1; j <= i; j++) {
//             printf("%c ", 'A' + j - 1);
//         }
//         printf("\n");
//     }

//     return 0;
// }

//.   taking marks on 5 subjects using loop
// #include<stdio.h>
// int main(){
//     int num[5];
//     printf("enter marks in 5 subjects :");
//     for(int i=1;i<=5;i++){
//         scanf("%d",&num[i]);
//     }
//     return 0;
// }
//. pointer important concept 
// #include<stdio.h>
// int main(){
//     int marks[]={12,33,42,13,21};
//     int* ptr=&marks[0];
//     for(int i=1;i<=5;i++){
//         printf("the value at that location is %d\n",*ptr);
//         ptr++;
//     }
//     return 0;
// }
// kina chaldena marks[] garda matrai 

// #include<stdio.h>
// int main(){
//     int arr[2][3];
//     for(int i=1;i<=2;i++){
//         for (int j=1;j<=3;j++){
//             printf("enter the arr[%d][%d]",i,j);
//             scanf("%d",&arr[i][j]);
//         }
//     }
//     for(int i=1;i<=2;i++){
//         for (int j=1;j<=3;j++){
//             printf("%d ",arr[i][j]);
//             printf(" the required  array is %d \n",arr[i][j]);
//             scanf("%d",arr[2][3]);
// // // }
// printf("\n");
//     }
//     return 0;
// }


//    int arr[10];
//    int i;
//     for (i=1;i<=10;i++){
//         arr[i]=5*i;
//     //     printf("5 * %d = %d\n",i,5*i);
// //     }
//     printf(" multiplication table of 5 is \n");
//     for (int i=1;i<=10;i++){

//         printf(" 5*%d=%d \n",i,arr[i]);
    // }
    // int a[]={1,2,3,4,5,6,7,8,9,11};
    // int* ptr =&a[0];
    // printf("the value at position 1 is %d",*(ptr+3));
    // return 0;




// }
// #include <stdio.h>

// void change(int a) {
//     a = 77;
// }

// int main() {
//     int b = 22;
//     change(b);
//     printf("b = %d", b);
//     return 0;
// }