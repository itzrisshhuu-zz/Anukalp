            // POINTERS
            
            //INTEGER POINTERS
        //     int i=23;
        //     int *j= &i;
        //     int *o= &j;
        //     printf("addreess of integer i is %p \n",j);
        //     printf("addreess of integer j is %p \n",l);
        //     printf("the value at address j is %d \n",*j);
        //     printf("the value at address l is %p \n",*(&j));
        //     return 0;
        // }
        // here * basicaly indicates value of j 
        //while the & gives address  
        
        // #include<stdio.h>
        // int main(){
        //       char i='A';
        //     char* j= &i;
        //     char* o= &j;
        //     float k=3.443;
        //     float * f=&k;
        //     printf("addreess of integer i is %p \n",j);
        //     printf("the value at address j is %c \n",*j);
        //     printf("the  address of  k is %p \n",f);
        //     printf("addreess of integer j is %p \n",o);
        //     printf("the value at address l is %p \n",*(&j));
        //     printf("the value at address f is %f \n",*(&k));
           
        //     return 0;
        // }
// #include<stdio.h>
// int sum(int,int);
// int sum(int x ,int y){
//     // printf("sum of 2 will be %d " , x+y); 
//     return x+y;
// }
// int main(){
//    int c=  sum(12,2);
//     // sum(10,3);
//     // sum(5,4);
//     printf("%d is result" ,c);
// return 0;
// }


//    PRACTICE SET CH 6 POINTERS 


//.   Q NO. 2 
// #include <stdio.h>
// #include <stdlib.h>
// int value(int);
// int value(int a){
//     printf("the addres of value passed is %p\n",&a);
        // }

// int main() {
//     int i=77;
//     printf("adddres of i is %p\n",&i);
//     value(i);
//     return 0;
// }
  


//        . Q NO 3
// #include <stdio.h>
// #include <stdlib.h>
// int changevalue(int*);
// int changevalue(int* a){
    //     *a=*a * 30 ;
    
    // }
    // int main() {
        //     int x=20;
        //     printf("value of x is %d\n",x);
        //     changevalue(&x);
        //     printf("changes value by 30 times result is %d\n",x);
        //     return 0;
        // }
        
        
        // Q NO. 5
        // #include <stdio.h>
        // #include <stdlib.h>
        // int sum(int* ,int*);
        // int sum(int* a, int* b){
        //     return *a + *b;
        // }
        // float average(int*,int*);
        // float average (int * a, int* b){
        //     return (*a + *b)/2;
        // }
        // // int calculate(int*,int*,int*,float*);
        // // int calculate(int* a,int* b, int* sum, float* average){
        // //      *sum= *a + *b; 
        // //      *average= (*a + *b)/2;
        // // }
        // int main() {
        //     // int sum;
        //     // float average;
        //     int x=20,y=20;
        //     // calculate(&x,&y);
        //     // calculate(&x,&y,&sum,&average);
        //     printf("%d is the addition\n",sum(&x,&y));
        //     printf("%.2f is the median\n",average(&x,&y));
        //     return 0;
    //     // }
//     #include <stdio.h>
//     #include <stdlib.h>
    
//     int main() {

//         int arr[4]={2,3,4,5};
//         int *ptr = &arr[0];
//         printf("%d",*ptr);
//     for(int i=0;i<=4;i++){
// printf("%d")
//     }    
//     return 0;
//     }
//     #include <stdio.h>
//     #include <stdlib.h>
//     int array(int arr[],int n);
//     int array(int arr[],int n){
//         for(int i=0;i<=4;i++){
//             printf("%d",arr[i]);
//         }
//     }
//     int main() {
//         int a[]={1,2,3,4};
// array(a,4);
//         return 0;
//     }

