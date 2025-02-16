// C Hello World Program
// #include <stdio.h>

// int main() {
//     printf("Hello World");

//     return 0;
// }

// C Program To Print Your Own Name
// #include <stdio.h>

// int main() {

//     printf("jayadev");

//     return 0;
// }

// Print an Integer Value in C

// #include <stdio.h>

// int main()
// {
// 	int x = 7;

// 	printf("Printing Integer value %d", x);
// 	return 0;
// }

// C Program to Add Two Integers

// #include <stdio.h>

// int main() {
//     int a, b, sum = 0;
  
//     printf("Enter two integers: ");
//     scanf("%d %d", &a, &b);
//     sum = a + b;

//     printf("Sum: %d", sum);

//     return 0;
// }

// Prime Number Program in C

// #include <stdbool.h>
// #include <stdio.h>

// int main() {
//     int n = 49;

//     int cnt = 0;

//     if (n <= 1)
//         printf("%d is NOT prime\n", n);
//     else {

//         for (int i = 1; i <= n; i++) {

//             if (n % i == 0)
//                 cnt++;
//         }

//         if (cnt > 2)
//             printf("%d is NOT prime\n", n);

//         else
//             printf("%d is prime", n);
//     }

//     return 0;
// }

// C Program to Multiply two Floating Point Numbers

// #include <stdio.h> 

// float multiply(float a, float b) 
// { 
// return a * b; 
// } 
 
// int main() 
// { 
// 	float A = 2.12, B = 3.88, product; 
 
// 	product = multiply(A, B); 
 
// 	printf("Product of entered numbers is:%.3f", product); 

// 	return 0; 
// }

// ASCII Value of a Character in C

// #include <stdio.h>

// int main() {
//     char c = 'k';
//     printf("The ASCII value of %c is %d", c, c);
//     return 0;
// }

// C Program to Swap Two Numbers

// #include <stdio.h>

// int main() {
//     int a = 5, b = 10, temp;

//     temp = a;
//     a = b;
//     b = temp;

//     printf("a = %d, b = %d\n", a, b);
//     return 0;
// }

// C Program To Convert Fahrenheit To Celsius

// #include <stdio.h> 
 
// float fahrenheit_to_celsius(float f) 
// { 
// 	return ((f - 32.0) * 5.0 / 9.0); 
// } 

// int main() 
// { 
// 	float f = 40; 
 
// 	printf("Temperature in Degree Celsius : %0.2f", 
// 		fahrenheit_to_celsius(f)); 
// 	return 0; 
// }


// C Program to Find the Size of int, float, double and char

// #include <stdio.h>

// int main() {
  
//     printf("Size of int: %u bytes\n", sizeof(int));

//     printf("Size of float: %u bytes\n", sizeof(float));

//     printf("Size of double: %u bytes\n", sizeof(double));

//     printf("Size of char: %u bytes\n", sizeof(char));

//     return 0;
// }


// C Program to Add Two Complex Numbers

// #include <stdio.h>

// typedef struct complexNumber {
// 	int real;
// 	int img;
// } complex;

// complex add(complex x, complex y);

// int main()
// {

// 	complex a, b, sum;

// 	a.real = 2;
// 	a.img = 3;

// 	b.real = 4;
// 	b.img = 5;

// 	printf("\n a = %d + %di", a.real, a.img);

// 	printf("\n b = %d + %di", b.real, b.img);

// 	sum = add(a, b);

// 	printf("\n sum = %d + %di", sum.real, sum.img);

// 	return 0;
// }

// complex add(complex x, complex y)
// {

// 	complex add;

// 	add.real = x.real + y.real;

// 	add.img = x.img + y.img;

// 	return (add);
// }


// C Program to Print Prime Numbers From 1 to N

// #include <stdbool.h>
// #include <stdio.h>
// #include <math.h>

// bool isPrime(int n)
// {
//     if (n == 1 || n == 0)
//         return false;

//     for (int i = 2; i <= sqrt(n); i++) {
//         if (n % i == 0)
//             return false;
//     }
//     return true;
// }

// int main()
// {
//     int N = 50;

//     for (int i = 1; i <= N; i++) {
//         if (isPrime(i)) {
//             printf("%d ", i);
//         }
//     }

//     return 0;
// }


// C Program To Find Simple Interest

// #include <stdio.h>

// int main() {
  
//     float P = 1, R = 1, T = 1;

//     float SI = (P * T * R) / 100;

//     printf("Simple Interest = %f\n", SI);

//     return 0;
// }


// C Program For Compound Interest

// #include <stdio.h>
// #include<math.h> 

// int main() 
// {

//   double principal = 10000; 

//   double rate = 5; 

//   double time = 2; 

//   double Amount = principal * 
//                   ((pow((1 + rate / 100), 
//                     time)));
//   double CI = Amount - principal;
 
//   printf("Compound Interest is : %lf",CI);
//   return 0;
// }


// C Program To Find Area And Perimeter of Rectangle

    // #include <stdio.h>

    // int main()
    // {

    // 	int l = 10, b = 10;
    // 	printf("Area of rectangle is : %d", l * b);
    // 	printf("\nPerimeter of rectangle is : %d", 2 * (l + b));
    // 	return 0;
    // }


