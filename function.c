// #include<stdio.h>
// int main(){
//     printf("why are you here ");
//     return 0;
// }


//    FUNCTION USING RETURN

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

// 
// #include<stdio.h>
// void good_morning();
// void good_evening();
// void good_evening();

// void good_morning(){
// printf("hey everyon, good morning\n");
// }
// void good_evening(){
// printf("hey everyon, good evening\n");
// }
// void good_afternoon(){

//     printf("hey everyon, good afternoon\n");
// }
// int main(){
//     good_morning();
//     good_evening();
//     good_afternoon();
// }
// #include<stdio.h>
// #include<math.h>
// int main(){
//     int a=5;
//     printf("swuare of the input number is %f \n :" ,pow(a,2));
//     return 0;
// }
// #include<stdio.h>
// float average(int a,int b , int c);
// float average(int a , int b, int c){
//   return (a+b+c/3) ;
// }
// int main(){
//     printf("%f is the result",average(4,3,2));
// return 0;
// }
// 
// #include<stdio.h>
//     float g;
// float force(float a);
// float force(float a){
//     return a*g ;

// }


// int main(){

//     g=9.8;
//     printf("force of attraction on body is %f",force(9));
//     return 0;

// }
// #include<stdio.h>
// // void fibo(int a , int b , int c);
// // void fibo(int a , int b , int c){
// for(int i=0;i<=10;i++){
//     a=b;
// b=c;
// c=a+b;
// }
// // return 0;
// }


// int main(){
// int a=0;
// int b=1;
// int c;
// printf("%d",c);
// }
// 0 
// a=0 b=1 a=a+b c=a b=c print c result 0 1 
// void fibo(int a , int b , int c);
// void fibo(int a , int b , int c){
//     #include<stdio.h>
//     int main(){
//     int a=0;
//     int b=1;
//     int c;
// for(int i=0;i<=10;i++){
//     printf("%d\t",a);
//     c=a+b;
//     a=b;
// b=c;
// }
// return 0;
// }
// // return 0;
// #include<stdio.h>
// int main(){
//     int a=5;
//     printf("%d ,%d, %d",a,++a,a++);
//     return 0;
// }


// #include<stdio.h>
// int sum(int n);
// int sum(int n){

//     if (n==1){
//    return 1;
//     }
//     return sum(n-1)+n ;
// }
// int main(){
//     printf("%d  is the sum of first 9 natural numbers ", sum(9));
// return 0;
// }


// #include<stdio.h>
// int main(){
//     int n=3;
//     for (int i =0 ; i<n ; i++){
//         for (int j=0;j<2*i+1;j++){
//             printf("*");
//         }
//         printf("\n");
//     }
//     return 0;
// }

    // #
// #include <stdio.h>
// void fibonacci(int n);
// void fibonacci(int n) {
//     int a = 0, b = 1, c;

//     for (int i = 1; i <= n; i++) {
//         printf("%d ", a);

//         c = a + b;
//         a = b;
//         b = c;
//     }
// }

// int main() {
//     int n;

//     printf("Enter number of terms: ");
//     scanf("%d", &n);

//     fibonacci(n);

//     return 0;
}