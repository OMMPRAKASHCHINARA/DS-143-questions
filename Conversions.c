// // C Program For Boolean to String Conversion

// // #include <stdbool.h>
// // #include <stdio.h>

// // int main() {
// //     bool n = true;
// //     if (n == true) {
// //         printf("true");
// //     } else {
// //         printf("false");
// //     }
// //     return 0;
// // }

// // Convert a floating point number to string in C

// #include <math.h> 
// #include <stdio.h> 

// void reverse(char* str, int len) { 
// 	int i = 0, j = len - 1, temp; 
// 	while (i < j) { 
// 		temp = str[i]; 
// 		str[i] = str[j]; 
// 		str[j] = temp; 
// 		i++; 
// 		j--; 
// 	} 
// } 

// int intToStr(int x, char str[], int d) { 
// 	int i = 0; 
// 	while (x) { 
// 		str[i++] = (x % 10) + '0'; 
// 		x = x / 10; 
// 	} 
// 	while (i < d) 
// 		str[i++] = '0'; 
// 	reverse(str, i); 
// 	str[i] = '\0'; 
// 	return i; 
// } 

// void ftoa(float n, char* res, int afterpoint) { 
// 	int ipart = (int)n; 
// 	float fpart = n - (float)ipart; 
// 	int i = intToStr(ipart, res, 0); 
// 	if (afterpoint != 0) { 
// 		res[i] = '.'; 
// 		fpart = fpart * pow(10, afterpoint); 
// 		intToStr((int)fpart, res + i + 1, afterpoint); 
// 	} 
// } 

// int main() { 
// 	char res[20]; 
// 	float n = 233.007; 
// 	ftoa(n, res, 4); 
// 	printf("\"%s\"\n", res); 
// 	return 0; 
// }

// // C Program For Double to String Conversion

// #include <stdio.h> 

// int main() { 
// 	double n = 456321.7651234; 
// 	char str[100]; 
// 	sprintf(str, "%f", n); 
// 	printf("the string is: %s\n", str); 
// 	return 0; 
// } 


// // Converting String to Long in C

// #include <stdio.h>
// #include <stdlib.h>

// int main() {
// 	char string[10] = "1234567890";
// 	long integer;
// 	integer = strtol(string, NULL, 10);
// 	printf("Number is %ld", integer);
// 	return 0;
// }


// // C Program For Long to String Conversion

// #include <stdio.h> 
// #include <string.h> 

// #define Max_Digits 10 

// int main() { 
//     long N = 1243; 
//     char str[Max_Digits + sizeof(char)]; 
//     sprintf(str, "%ld", N); 
//     printf("string is: %s \n", str); 
//     return 0;
// }

// // C Program For Int to Char Conversion

// #include <stdio.h>

// int main() {
//     int N = 103;
//     printf("%c", (char)(N));
//     return 0;
// }


// // C Program For Char to Int Conversion

// #include <stdio.h>

// int main() {
//     char ch = '7';
//     int N = ch - '0';
//     printf("The integer value of character '%c' is %d\n", ch, N);
//     return 0;
// }


// // C Program For Octal to Decimal Conversion

// #include <stdio.h>

// int main() {
//     int n;
//     printf("Enter an Octal number: \n");
//     scanf("%o", &n);
//     printf("\nDecimal Representation is: %d", n);
//     return 0;
// }

// // C Program to Convert Decimal to Octal

// #include <stdio.h> 

// void decToOctal(int n) { 
// 	int octalNum[100]; 
// 	int i = 0; 
// 	while (n != 0) { 
// 		octalNum[i] = n % 8; 
// 		n = n / 8; 
// 		i++; 
// 	} 
// 	for (int j = i - 1; j >= 0; j--) 
// 		printf("%d", octalNum[j]); 
// } 

// int main() { 
// 	int n = 33; 
// 	decToOctal(n); 
// 	return 0; 
// }


// // C Program For Hexadecimal to Decimal Conversion

// #include <stdio.h> 

// int main() { 
// 	int n; 
// 	scanf("%x", &n); 
// 	printf("%d", n); 
// 	return 0; 
// }

// // C Program For Decimal to Hexadecimal Conversion

// #include <stdio.h> 

// int main() { 
// 	int decimalNumber = 45; 
// 	printf("Hexadecimal number is: %X", decimalNumber); 
// 	return 0; 
// }

// // Convert Decimal to Binary in C

// #include <stdio.h> 

// void decToBinary(int n) { 
// 	int binaryNum[1000]; 
// 	int i = 0; 
// 	while (n > 0) { 
// 		binaryNum[i] = n % 2; 
// 		n = n / 2; 
// 		i++; 
// 	} 
// 	for (int j = i - 1; j >= 0; j--) 
// 		printf("%d", binaryNum[j]); 
// } 

// int main() { 
// 	int n = 17; 
// 	decToBinary(n); 
// 	return 0; 
// }


// // Convert Binary to Decimal in C

// #include <stdio.h> 

// int binaryToDecimal(int n) { 
// 	int num = n; 
// 	int dec_value = 0; 
// 	int base = 1; 
// 	int temp = num; 

// 	while (temp) { 
// 		int last_digit = temp % 10; 
// 		temp = temp / 10; 
// 		dec_value += last_digit * base; 
// 		base = base * 2; 
// 	} 

// 	return dec_value; 
// } 

// int main() { 
// 	int num = 10101001; 
// 	printf("%d", binaryToDecimal(num)); 
// }
