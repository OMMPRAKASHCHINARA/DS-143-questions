// C Program To Check Prime Number By Creating a Function

// #include <stdio.h>

// int isPrime(int N) {
//     for (int i = 2; i < N; i++) {
    
//         if (N % i == 0) {
//             return 0;
//         }
//     }
//     return 1;
// }

// int main() {
//     int N = 10;
//     printf("Is %d prime?\n", N);
//     if (isPrime(N)) {
//         printf("Yes\n");
//     }
//     else {
//         printf("No\n");
//     }

//     return 0;
// }


// C Program to Display Prime Numbers Between Two Intervals Using Functions

// #include <stdio.h>
// int checkPrimeNumber(int number)
// {
// 	int i, f = 1;

// 	for (i = 2; i <= number / 2; ++i) 
// 	{
// 		if (number % i == 0) 
// 		{
// 			f = 0;
// 			break;
// 		}
// 	}

// 	return f;
// }

// int main()
// {
// 	int num1 = 2, num2 = 10, j, f;

// 	printf("Prime numbers between %d and %d are: ", 
// 			num1, num2);
// 	for (j = num1; j < num2; ++j) 
// 	{
// 		f = checkPrimeNumber(j);

// 		if (f == 1) 
// 		{		 
// 			printf("%d ", j);
// 		}
// 	}

// 	return 0;
// }


// C Program for Quadratic Equation Roots

// #include <math.h> 
// #include <stdio.h> 
// #include <stdlib.h> 

// void findRoots(int a, int b, int c) 
// { 
	
// 	if (a == 0) { 
// 		printf("Invalid"); 
// 		return; 
// 	} 

// 	int d = b * b - 4 * a * c; 
// 	double sqrt_val = sqrt(abs(d)); 

// 	if (d > 0) { 
// 		printf("Roots are real and different\n"); 
// 		printf("%f\n%f", (double)(-b + sqrt_val) / (2 * a), 
// 			(double)(-b - sqrt_val) / (2 * a)); 
// 	} 
// 	else if (d == 0) { 
// 		printf("Roots are real and same\n"); 
// 		printf("%f", -(double)b / (2 * a)); 
// 	} 
// 	else 
// 	{ 
// 		printf("Roots are complex\n"); 
// 		printf("%f + i%f\n%f - i%f", -(double)b / (2 * a), 
// 			sqrt_val / (2 * a), -(double)b / (2 * a), 
// 			sqrt_val / (2 * a)); 
// 	} 
// } 

// int main() 
// { 
// 	int a = 1, b = -7, c = 12;  
// 	findRoots(a, b, c); 
// 	return 0; 
// }


// C Program to Check Whether a Number Can Be Express as Sum of Two Prime Numbers

// #include <stdio.h>

// int isPrime(int n)
// {
//     int i, isPrime = 1;

//     if (n == 0 || n == 1) {
//         isPrime = 0;
//     }
//     else {
//         for (i = 2; i <= n / 2; ++i) {
//             if (n % i == 0) {
//                 isPrime = 0;
//                 break;
//             }
//         }
//     }

//     return isPrime;
// }

// int main()
// {
//     int n = 7, i, flag = 0;

//     for (i = 2; i <= n / 2; ++i) {
      
//         if (isPrime(i) == 1) {
//             if (isPrime(n - i) == 1) {
//                 printf("Yes\n");
//                 return 0;
//             }
//         }
//     }

//     printf("No\n");
//     return 0;
// }


// C Program to Find Sum of Natural Numbers using Recursion

// #include <stdio.h>
// int recSum(int n)
// {
// 	if (n <= 1)
// 		return n;

// 	return n + recSum(n - 1);
// }
// int main()
// {
// 	int n = 10;
// 	printf("Sum = %d ", recSum(n));
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


// GCD of Two Numbers in C

// #include <math.h>
// #include <stdio.h>

// int gcd(int a, int b)
// {
//     int result = ((a < b) ? a : b);
//     while (result > 0) {
//         if (a % result == 0 && b % result == 0) {
//             break;
//         }
//         result--;
//     }
//     return result;
// }

// int main()
// {
//     int a = 98, b = 56;
//     printf("GCD of %d and %d is %d ", a, b, gcd(a, b));
//     return 0;
// }


// C Program to Reverse a Stack using Recursion

// #include <stdio.h> 
// #include <stdlib.h> 
// #define bool int 

// struct sNode { 
// 	char data; 
// 	struct sNode* next; 
// }; 

// void push(struct sNode** top_ref, int new_data); 
// int pop(struct sNode** top_ref); 
// bool isEmpty(struct sNode* top); 
// void print(struct sNode* top); 

// void insertAtBottom(struct sNode** top_ref, int item) 
// { 
// 	if (isEmpty(*top_ref)) 
// 		push(top_ref, item); 
// 	else { 

// 		int temp = pop(top_ref); 
// 		insertAtBottom(top_ref, item); 
// 		push(top_ref, temp); 
// 	} 
// } 

// void reverse(struct sNode** top_ref) 
// { 
// 	if (!isEmpty(*top_ref)) { 
	
// 		int temp = pop(top_ref); 
// 		reverse(top_ref); 
// 		insertAtBottom(top_ref, temp); 
// 	} 
// } 

// int main() 
// { 
// 	struct sNode* s = NULL; 
// 	push(&s, 4); 
// 	push(&s, 3); 
// 	push(&s, 2); 
// 	push(&s, 1); 

// 	printf(" 
// Original Stack "); 
// 	print(s); 
// 	reverse(&s); 
// 	printf(" 
// Reversed Stack "); 
// 	print(s); 
// 	return 0; 
// } 

// bool isEmpty(struct sNode* top) 
// { 
// 	return (top == NULL) ? 1 : 0; 
// } 

// void push(struct sNode** top_ref, int new_data) 
// { 
// 	struct sNode* new_node 
// 		= (struct sNode*)malloc(sizeof(struct sNode)); 

// 	if (new_node == NULL) { 
// 		printf("Stack overflow 
// "); 
// 		exit(0); 
// 	} 
// 	new_node->data = new_data; 
// 	new_node->next = (*top_ref); 

// 	(*top_ref) = new_node; 
// } 

// int pop(struct sNode** top_ref) 
// { 
// 	char res; 
// 	struct sNode* top; 
// 	if (*top_ref == NULL) { 
// 		printf("Stack overflow 
// "); 
// 		exit(0); 
// 	} 
// 	else { 
// 		top = *top_ref; 
// 		res = top->data; 
// 		*top_ref = top->next; 
// 		free(top); 
// 		return res; 
// 	} 
// } 
// void print(struct sNode* top) 
// { 
// 	printf(" 
// "); 
// 	while (top != NULL) { 
// 		printf(" %d ", top->data); 
// 		top = top->next; 
// 	} 
// }


// Power of a Number in C

// #include <stdio.h> 
// long power(int x, unsigned n) 
// { 
// 	long long pow = 1; 

// 	for (int i = 0; i < n; i++) { 
// 		pow = pow * x; 
// 	} 

// 	return pow; 
// } 
// int main(void) 
// { 

// 	int x = 2; 
// 	unsigned n = 3; 
// 	int result = power(x, n); 
// 	printf("%d", result); 
// 	return 0; 
// }


