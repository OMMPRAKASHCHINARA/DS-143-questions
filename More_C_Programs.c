// // 1. C Program to Show Runtime Exceptions

// #include <stdio.h>
// #include <stdlib.h>

// int main() {
//     int a = 10, b = 0;
//     int result = a / b; 
//     printf("Result: %d\n", result);
//     return 0;
// }


// // 2. C Program to Show Types of Errors

// #include <stdio.h>

// int main() {

//     int a = 5, b = 2;
//     int sum = a - b; 
//     printf("Sum: %d\n", sum);

//     int arr[3] = {1, 2, 3};
//     printf("%d\n", arr[5]); 

//     return 0;
// }



// // 3. C Program to Show Unreachable Code Error

// #include <stdio.h>

// int main() {
//     printf("This is reachable code.\n");
//     return 0;
//     printf("This is unreachable code.\n");
// }



// // 4. C Program to Find Quotient and Remainder

// #include <stdio.h>

// int main() {
//     int dividend, divisor;
//     printf("Enter dividend and divisor: ");
//     scanf("%d %d", &dividend, &divisor);

//     int quotient = dividend / divisor;
//     int remainder = dividend % divisor;

//     printf("Quotient: %d\n", quotient);
//     printf("Remainder: %d\n", remainder);

//     return 0;
// }



// // 5. C Program to Find the Initials of a Name

// #include <stdio.h>
// #include <ctype.h>

// int main() {
//     char name[100];
//     printf("Enter your full name: ");
//     fgets(name, sizeof(name), stdin);

//     printf("Initials: ");
//     printf("%c", toupper(name[0])); 

//     for (int i = 1; name[i] != '\0'; i++) {
//         if (name[i - 1] == ' ') {
//             printf("%c", toupper(name[i])); 
//         }
//     }
//     printf("\n");

//     return 0;
// }



// // 6. C Program to Draw a Circle in Graphics

// #include <graphics.h>
// #include <stdio.h>

// int main() {
//     int gd = DETECT, gm;
//     initgraph(&gd, &gm, NULL);

//     circle(250, 250, 100); 
//     getch();
//     closegraph();

//     return 0;
// }



// // 7. Printing Source Code of a C Program Itself

// #include <stdio.h>

// int main() {
//     FILE *fp;
//     char c;

//     fp = fopen(__FILE__, "r"); // Open the current source file
//     if (fp == NULL) {
//         printf("Error opening file.\n");
//         return 1;
//     }

//     while ((c = fgetc(fp)) != EOF) {
//         putchar(c);
//     }

//     fclose(fp);
//     return 0;
// }