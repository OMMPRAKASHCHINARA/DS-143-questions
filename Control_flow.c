// C Program to Check Whether a Number is Positive or Negative or Zero

// #include <stdio.h>

// void checkNum(int N) {

//     if (N == 0) {
//         printf("Zeri\n");
//     }

//     else if (N < 0) {
//         printf("Negative\n");
//     }

//     else {
//         printf("Positive\n");
//     }
// }

// int main() {
//     int N = 10;
//     checkNum(N);
//     return 0;
// }

// C Program to Check for Odd or Even Number

// #include <stdio.h>

// void checkOddEven(int N) {

//     int r = N % 2;

//     if (r == 0)  {
//         printf("Even");
//     }

//     else  {
//         printf("Odd");
//     }
// }

// int main() {
//     int N = 101;
//     checkOddEven(N);
//     return 0;
// }

// C Program to Check Vowel or Consonant

// #include <stdio.h>

// int main()
// {
// 	char ch = 'A';

// 	if (ch == 'a' || ch == 'A' || ch == 'e' || ch == 'E'
// 		|| ch == 'i' || ch == 'I' || ch == 'o' || ch == 'O'
// 		|| ch == 'u' || ch == 'U') {

// 		printf("The character %c is a vowel.\n", ch);
// 	}
// 	else {
// 		printf("The character %c is a consonant.\n", ch);
// 	}

// 	return 0;
// }

// C program to Find the Largest Number Among Three Numbers

// #include <stdio.h>

// int main()
// {
//     int c = 10, b = 22, a = 9;

//         if (a >= b) {
//         if (a >= c)
//             printf("%d is the largest number.", a);
//         else
//             printf("%d is the largest number.", c);
//     }
//     else {
//         if (b >= c)
//             printf("%d is the largest number.", b);
//         else
//             printf("%d is the largest number.", c);
//     }

//     return 0;
// }

// C Program to Calculate Sum of Natural Numbers

// #include <stdio.h>
// int main()
// {
// 	int i, s = 0;
// 	int n = 10;
// 	i = 1;

// 	while (i <= n) {

// 		s += i;
// 		i++;
// 	}

// 	printf("Sum = %d", s);
// 	return 0;
// }

// Program to Print Alphabets From A to Z Using Loop

// #include <stdio.h>

// int main() {
//     char letter;

//     for (letter = 'A'; letter <= 'Z'; letter++) {
//         printf("%c ", letter);
//     }

//     return 0;
// }

// Leap Year Program in C

// #include <stdbool.h>
// #include <stdio.h>

// bool checkYear(int year)
// {
// 	if (year % 400 == 0)
// 		return true;

// 	else if (year % 100 == 0)
// 		return false;

// 	else if (year % 4 == 0)
// 		return true;
// 	return false;
// }
// int main()
// {
// 	int year = 2000;

// 	if (checkYear(year)) {
// 		printf("Leap Year");
// 	}
// 	else {
// 		printf("Not a Leap Year");
// 	}
// 	return 0;
// }

// Factorial Program in C

// #include <stdio.h>

// unsigned int factorial(unsigned int N) {
//     int fact = 1, i;

//     for (i = 1; i <= N; i++) {
//         fact *= i;
//     }

//     return fact;
// }

// int main() {
//     int N = 5;
//     int fact = factorial(N);
//     printf("Factorial of %d is %d", N, fact);
//     return 0;
// }

// C Program to Make a Simple Calculator

// #include <stdio.h>
// #include <float.h>

// int main() {
//     char op;
//     double a, b, res;

//     printf("Enter an operator (+, -, *, /): ");
//     scanf("%c", &op);

//     printf("Enter two operands: ");
//     scanf("%lf %lf", &a, &b);

//     switch (op) {
//     case '+':
//         res = a + b;
//         break;
//     case '-':
//         res = a - b;
//         break;
//     case '*':
//          res = a * b;
//         break;
//     case '/':
//         res = a / b;
//         break;
//     default:
//         printf("Error! Incorrect Operator Value\n");
//         res = -DBL_MAX;
//     }
//     if(res!=-DBL_MAX)
//       printf("%.2lf", res);

//     return 0;
// }

// C Program to Generate Multiplication Table

// #include <stdio.h>
// void print_table(int range, int num)
// {
//     int mul;

//     for (int i = 1; i <= range; i++)
//     {
//         mul = num * i;

//         printf("%d * %d = %d", num, i, mul);

//         printf("\n");
//     }
// }
// int main()
// {
//     int range = 10;
//     int num = 5;
//     print_table(range, num);

//     return 0;
// }


// C Program to Print Fibonacci Series

// #include <stdio.h>

// void printFib(int n) {
//     if (n < 1) {
//         printf("Invalid Number of terms\n");
//         return;
//     }
  
//     int prev1 = 1;
//     int prev2 = 0;

//     for (int i = 1; i <= n; i++) {
          
//         if (i > 2) {
//             int curr = prev1 + prev2;
//             prev2 = prev1;
//             prev1 = curr;
//             printf("%d ", curr);
//         }
//         else if (i == 1)
//             printf("%d ", prev2);
//         else if (i == 2)
//             printf("%d ", prev1);
//     }
// }

// int main() {
//     int n = 9;
  
//     printFib(n);
//     return 0;
// }


// LCM of Two Numbers in C

// #include <stdio.h>

// int main()
// {
//     int x = 15, y = 25, max;
//     max = (x > y) ? x : y;

//     while (1) {
//         if (max % x == 0 && max % y == 0) {
//             printf("The LCM of %d and %d is %d.", x, y,
//                    max);
//             break;
//         }

//         ++max;
//     }

//     return 0;
// }


// C Program to Check Armstrong Number

// #include <math.h>
// #include <stdio.h>
// #include <stdbool.h>

// bool isArmstrong(int N) {
//     int temp = N;
//     int sum = 0;

//     int K = log10(temp) + 1;

//     while (temp > 0) {
//         int digit = temp % 10;
//         sum += pow(digit, K);
//         temp /= 10;
//     }

//     return (sum == N);
// }

// int main() {
//     int N = 153;

//     if (isArmstrong(N)) {
//         printf("Yes\n");
//     }
//     else {
//         printf("No\n");
//     }

//     return 0;
// }

// C Program to Print Armstrong Numbers Between 1 to 1000

// #include <math.h>
// #include <stdio.h>

// int main()
// {
// 	int i, sum, num, count = 0;
// 	printf(
// 		"All Armstrong number between 1 and 1000 are:\n");

// 	for (i = 1; i <= 1000; i++) {
// 		num = i;
// 		while (num != 0) {
// 			num /= 10;
// 			count++;
// 		}
// 		num = i;
// 		sum = pow(num % 10, count)
// 			+ pow((num % 100 - num % 10) / 10, count)
// 			+ pow((num % 1000 - num % 100) / 100, count);
		
// 		if (sum == i) {
// 			printf("%d ", i);
// 		}
// 		count = 0;
// 	}
// }


// C Program to Display Armstrong Number Between Two Intervals

// #include <stdio.h>
// int countDigits(int num) {
//     int count = 0;
//     while (num != 0) {
//         num /= 10;
//         ++count;
//     }
//     return count;
// }

// int power(int base, int exp) {
//     int result = 1;
//     for (int i = 0; i < exp; ++i) {
//         result *= base;
//     }
//     return result;
// }

// int isArmstrong(int num) {
//     int originalNum = num;
//     int n = countDigits(num);
//     int result = 0;

//     while (num != 0) {
//         int remainder = num % 10;
//         result += power(remainder, n);
//         num /= 10;
//     }

//     return (result == originalNum);
// }

// int main() {
//     int low = 100, high = 500; 

//     printf("Armstrong numbers between %d and %d are: ", low, high);

//     for (int i = low + 1; i < high; ++i) {
//         if (isArmstrong(i)) {
//             printf("%d ", i);
//         }
//     }

//     return 0;
// }



// Reverse Number Program in C

// #include <stdio.h> 
// int reverseDigits(int num) 
// { 
// 	int rev_num = 0; 
// 	while (num > 0) { 
// 		rev_num = rev_num * 10 + num % 10; 
// 		num = num / 10; 
// 	} 
// 	return rev_num; 
// } 
// int main() 
// { 
// 	int num = 4562; 
// 	printf("Reverse of is %d", reverseDigits(num)); 

// 	getchar(); 
// 	return 0; 
// }


// Palindrome Number Program in C

// #include <stdio.h>

// int reverseNum(int N) {
  
//     int rev = 0;
//     while (N > 0) {

//         int dig = N % 10;

//         rev = rev * 10 + dig;

//         N /= 10;
//     }
//     return rev;
// }

// int isPalindrome(int N) {
  
//     if (N < 0)
//         return 0;
//     return N == reverseNum(N);
// }

// int main() {
//     int N = 121;
//     if (isPalindrome(N)) {
//         printf("Yes\n");
//     }
//     else {
//         printf("No\n");
//     }
//     return 0;
// }


// Prime Number Program in C

// #include <stdbool.h>
// #include <stdio.h>

// int main() {
//     int n = 29;

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


// C Program to Display Prime Numbers Between Intervals

// #include <stdio.h>

// int main()
// {
// 	int a, b, i, j, flag;
// 	printf("Enter lower bound of the interval: ");
// 	scanf("%d", &a); 

// 	printf("Enter upper bound of the interval: ");

// 	scanf("%d", &b); 
// 	printf("Prime numbers between %d and %d are: ", 
// 			a, b);

// 	for (i = a; i <= b; i++) 
// 	{

// 		if (i == 1 || i == 0)
// 			continue;

// 		flag = 1;

// 		for (j = 2; j <= i / 2; ++j) 
// 		{
// 			if (i % j == 0) 
// 			{
// 				flag = 0;
// 				break;
// 			}
// 		}

// 		if (flag == 1)
// 			printf("%d ", i);
// 	}

// 	return 0;
// }


// C Program To Check Neon Number

// #include <stdio.h> 

// int Check_Neon_Number(int num) { 
// 	int square = num * num; 
// 	int n = square;  
// 	int digit; 

// 	int sum = 0; 

// 	while (n != 0) { 
// 		digit = n % 10; 
// 		sum = sum + digit; 
// 		n = n / 10; 
// 	} 
// 	if (sum == num) 
// 		return 1;  
// 	else
// 		return 0; 
// } 
// int main() 
// { 
// 	int num = 9; 
// 	int ans = Check_Neon_Number(num); 
// 	if (ans == 1) 

// 		printf("true"); 
// 	else
// 		printf("false"); 
// 	return 0; 
// }


// C Program to Find All Factors of Number

// #include <stdio.h>  
// void printDivisors(int n) 
// { 
// 	for (int i = 1; i <= n; i++) 
// 		if (n % i == 0) 
// 			printf("%d ", i); 
// }  
// int main() 
// { 
// 	printf("The divisors of 100 are: "); 
// 	printDivisors(100); 

// 	return 0; 
// }


// C Program to Find the Sum of Fibonacci Numbers at Even Indexes up to N Terms

// #include <stdio.h>

// int calculateEvenSum(int n)
// {
//     if (n <= 0)
//         return 0;

//     int fibo[2 * n + 1];
//     fibo[0] = 0, fibo[1] = 1;

//     int sum = 0;

//     for (int i = 2; i <= 2 * n; i++) {
//         fibo[i] = fibo[i - 1] + fibo[i - 2];
//         if (i % 2 == 0)
//             sum += fibo[i];
//     }
//     return sum;
// }

// int main()
// {
//     int n = 5;

//     int sum = calculateEvenSum(n);
//     printf("Even indexed Fibonacci Sum upto %d terms = %d",
//            n, sum);

//     return 0;
// }


