// #include <stdio.h>
// #include <stdlib.h>

// int main() {
//     int i, n, a=0;
//     printf("enter number :");
//     scanf("%d",&n);
//     // int i=1,a=0;
//     // while(i<=n){
//     //     a=a+i;
//     //     i++;
//     // }
//     for(i=1;i<=n;i++){
//         a=a+i;
//     }
//     printf("sum of all numbers is %d",a);
//     return 0;
// }
// #include <stdio.h>
// #include <stdlib.h>
// float average(int*,int*);
// float average(int* a,int* b){
//  return (float) (*a + *b)/2;
// }
// int main() {
//     int x=20,y=30;
//     printf("average value is %f",average(&x,&y));
//     return 0;
// }
// #include <stdio.h>
// #include <stdlib.h>

// int main() {
//     int i,j, row,col,a[10][10],b[10][10],c[10][10];
//     printf("enter the order of matrix you want to create:");
//     scanf("%d %d",&row,&col);
//     printf("enter the elements of matrix A :");
//     for(i=0;i<row;i++){
//         for(j=0;j<col;j++){
//             scanf("%d",&a[i][j]);
//         }
//     }
//     printf("enter the elements of matrix B");
//     for(i=0;i<row;i++){
//         for(j=0;j<col;j++){
//             scanf("%d",&b[i][j]);
//         }
//     }
//     //printf("\n");
    
//     for(i=0;i<row;i++){
//         for(j=0;j<col;j++){
//             c[i][j]=a[i][j]+b[i][j];
//             printf("%d ",c[i][j]);
//         }
//         printf("\n");
//     }


//     return 0;
// }
// #include <stdio.h>
// #include <stdlib.h>

// int main() {
//     int i,j,arr[2][3];
//     for(i=1;i<=2;i++){
//         for(j=1;j<=3;j++){
//             printf("enter the arr[%d][%d]",i,j);
//             scanf("%d",&arr[i][j]);
//         }
//     }
//             for(i=1;i<=2;i++){
//                 for(j=1;j<=3;j++){
//                     printf(" a %d \t",arr[i][j]);
//                 }
//                 printf("\n");
//             }
//     return 0;
// }
// #include <stdio.h>
// #include <stdlib.h>

// int main() {
//     int i;
//     int arr[11];
//     for(i=1;i<=10;i++){
//         arr[i]=5*i ;
//     }
//     for(i=1;i<=10;i++){
//         printf("5 x %d = %d\n",i,arr[i]);
//     }

//     return 0;
// }
// #include <stdio.h>
// #include <stdlib.h>
// int factorial(int n);
// int factorial(int n){
//     if(n==1){
//         return 1;
//     }
//     else{
//         return factorial(n-1)*n;
//     }
// }
// int main() {
//     int n;
//     printf("enter the number  whose factorial is required");
//     scanf("%d",&n);
//     printf("the final result is %d",factorial(n));
//     return 0;
// }
#include <stdio.h>
#include <stdlib.h>

int main() {
    int array[5]= { 1,3,5,7,8};
    int* ptr =&array[0];
    printf("the value of first element is %d",*ptr);
    printf("the adress of that element is %p ",ptr);

    return 0;
}