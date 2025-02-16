// C Program to Print Pyramid Pattern

// #include <stdio.h>

// int main() {
//     int n = 5;

//     for (int i = 0; i < n; i++) {
//         for (int j = 0; j <= i; j++)
//             printf("* ");
//         printf("\n");
//     }
//     return 0;
// }


// C Program To Print Triangle

// C program to print a triangle 
// #include <stdio.h>
// int main() 
// { 
// 	int n = 6;  
// 	for (int i = 1; i <= n; i++) { 
// 		for (int j = 1; j <= i; j++) { 
// 			printf("*"); 
// 		} 
// 		printf("\n"); 
// 	} 
// 	return 0; 
// }


// C Program For Printing Inverted Pyramid

// #include <stdio.h>

// int main() {
//     int n = 5;
//     for (int i = 0; i < n; i++) {

//         for (int j = 0; j < n - i; j++)
//             printf("* ");
//         printf("\n");
//     }
// }


// C Program to Print Number Pattern

// #include <stdio.h>

// int main() {
//     int n = 5;
//     for (int i = 0; i < n; i++) {
//         for (int j = 0; j < n - i - 1; j++)
//             printf("  ");

//         for (int k = 0; k < n; k++)
//             printf("%d ", k + 1);
//         printf("\n");
//     }
//     return 0;
// }


// C Program To Print Character Pyramid Pattern

// #include <stdio.h>

// int main() {
//     int n = 5; 
//     for (int i = 1; i <= n; i++) {

//         for (int j = 1; j <= i; j++) {
//             printf("%c ", 'A' + j - 1);
//         }
//         printf("\n");
//     }

//     return 0;
// }



// C Program to Print Continuous Character Pattern

// #include <stdio.h>
// int main() 
// { 
// 	int i, j;

// 	int rows = 3;
// 	char character = 'A';

// 	for (i = 0; i < rows; i++) 
// 	{
	
// 		for (j = 0; j <= i; j++) 
// 		{
// 			printf("%c ",character);
// 			character++;
// 		}
// 		printf("\n");
// 	}
// 	return 0;
// }


// C Program To Print Hollow Pyramid Patterns

// #include <stdio.h>

// int main() {
//     int n = 5;
//     for (int i = 1; i <= n; i++) {
      
//         for (int j = 1; j <= i; j++) {
          
//             if (j == 1 || j == i || i == n)
//                 printf("* ");
//             else
//                 printf("  ");
//         }
//         printf("\n");
//     }
//     return 0;
// }


// C Program To Print Inverted Hollow Pyramid Patterns

// #include <stdio.h>

// int main() {
//     int n = 5;

//     for (int i = 0; i < n; i++) {
      
//         for (int j = 0; j < n - i; j++) {
//             if (j == 0 || j == n - i - 1 || i == 0)
//                 printf("* ");
//             else
//                 printf("  ");
//         }
//         printf("\n");
//     }

//     return 0;
// }


// C Program To Print Hollow Diamond Pattern

// #include <stdio.h>

// int main() {
//     int n = 5;

//     for (int i = 0; i < 2 * n - 1; i++) {
        
//         int comp;

//         if (i < n) comp = 2 * (n - i) - 1;
//         else comp = 2 * (i - n + 1) + 1;

//         for (int j = 0; j < comp; j++)
//             printf(" ");

//         for (int k = 0; k < 2 * n - comp; k++) {
//             if (k == 0 || k == 2 * n - comp - 1)
//                 printf("* ");
//             else
//                 printf("  ");
//         }
//         printf("\n");
//     }
    
//     return 0;
// }


// C Program To Print Diamond Pattern

// #include <stdio.h>

// int main() {
//     int n = 5;
//     for (int i = 0; i < 2 * n - 1; i++) {

//         int comp;
//         if (i < n) comp = 2 * (n - i) - 1;
//         else comp = 2 * (i - n + 1) + 1;

//         for (int j = 0; j < comp; j++)
//             printf(" ");

//         for (int k = 0; k < 2 * n - comp; k++) {
//             printf("* ");
//         }
//         printf("\n");
//     }
//     return 0;
// }


// Pascal Triangle Program in C

// #include <stdio.h>
// int main() {
  
//     int n = 5; 
//     for (int i = 0; i < n; i++) {
        
//         for (int j = 0; j < n - i - 1; j++)
//             printf(" ");
//         int val = 1;
//         for (int k = 0; k <= i; k++) {
//             printf("%d ", val);
          
//             val = val * (i - k) / (k + 1);  
//         }
//         printf("\n");
//     }

//     return 0;
// }


// C Program to Print Floyd’s Triangle Pyramid Patterns

// #include <stdio.h>

// int main() {
//     int n = 5;
//     int c = 1;

//     for (int i = 0; i < n; i++) {

//         for (int j = 0; j <= i; j++) {
//             printf("%d ", c++);
//         }
//         printf("\n");
//     }
//     return 0;
// }


// C Program To Print Reverse Floyd’s Pattern

// #include <stdio.h>

// int main() {
  
//     int n = 4;  
//     int c = n * (n + 1) / 2;

//     for (int i = n; i >= 1; i--) {
//         for (int j = 1; j <= i; j++)
//             printf("%d ", c--);
//         printf("\n");
//     }

//     return 0;
// }

