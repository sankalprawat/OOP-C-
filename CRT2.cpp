#include <stdio.h>
// void checkSign (int n) {
//     if (n > 0) {
//         printf("%d is a positive number.\n", n);
//     } else if (n < 0) {
//         printf("%d is a negative number.\n", n) ;
//     } else {
//         printf("Its zero.\n");
//     }
// }

// void checkEvenOdd (int n) {
//     if (n % 2 == 0) {
//         printf("%d is a even number.\n");
//     } else {
//         printf("%d is a odd number.\n");
//     }
// }

// int checkGreater (int n, int m, int o)  {
//     if (n > m && n > o) {
//         return n ;
//     } else if (m > n && m > o) {
//         return m ;
//     } else if (o > n && o > m){
//         return o ;
//     } else {
//         return 0 ;
//     }
// }

int naturalSum (int n) {
    int sum = 0;
    for (int i = n; i > 0; i--) {
        sum += i ; 
    }
    return sum ;
}

int main () {
    int n;
    printf("Enter first number: ");
    scanf("%d", &n);

    int res = naturalSum(n);

    printf ("Sum: %d", res);

    return 0 ;
}