// C Program to Concatenate Two Strings Without Using strcat

// #include <stdio.h>

// void concat(char *s1, char *s2) {
//     int i = 0;
//     while (s1[i] != '\0')
//         i++; 

//     int j = 0;
//     while (s2[j] != '\0') {
//         s1[i] = s2[j];  
//         i++;
//         j++;
//     }

//     s1[i] = '\0';
// }

// int main() {
//     char s1[50] = "Hey ";
//     char s2[] = "jayadev";

//     concat(s1, s2);

//     printf("%s", s1);
//     return 0;
// }

// C Program to Add 2 Binary Strings
// #include <stdio.h>
// #include <string.h>

// void sum(char b1[], char b2[], int l1, int l2) {
//     int carry = 0, temp, num1, num2, i;
//     char result[101];
//     result[l1 + 1] = '\0';

//     while (l2 > 0) {
//         num1 = b1[l1 - 1] - '0';
//         num2 = b2[l2 - 1] - '0';
//         temp = num1 + num2 + carry;
//         carry = temp / 2;
//         result[l1] = (temp % 2) + '0';
//         l1--;
//         l2--;
//     }

//     while (l1 > 0) {
//         temp = (b1[l1 - 1] - '0') + carry;
//         carry = temp / 2;
//         result[l1] = (temp % 2) + '0';
//         l1--;
//     }

//     if (carry) {
//         result[0] = '1';
//         printf("%s + %s = %s\n", b1, b2, result);
//     } else {
//         printf("%s + %s = %s\n", b1, b2, result + 1);
//     }
// }

// int main() {
//     char b1[100], b2[100];
//     int l1, l2;

//     printf("Enter binary number 1: ");
//     scanf("%s", b1);
//     printf("Enter binary number 2: ");
//     scanf("%s", b2);

//     l1 = strlen(b1);
//     l2 = strlen(b2);

//     if (l1 >= l2) {
//         sum(b1, b2, l1, l2);
//     } else {
//         sum(b2, b1, l2, l1);
//     }

//     return 0;
// }


// Find first non-repeating character of given string

// #include <stdio.h>
// #include <string.h>

// char nonRepeatingChar(char s[]) {
//     int n = strlen(s);

//     for (int i = 0; i < n; ++i) {
//         int found = 0;

//         for (int j = 0; j < n; ++j) {
//             if (i != j && s[i] == s[j]) {
//                 found = 1;
//                 break;
//             }
//         }

//         if (found == 0)
//             return s[i];
//     }

//     return '$';
// }

// int main() {
//     char s[] = "racecar";
//     printf("%c", nonRepeatingChar(s));
//     return 0;
// }


// C Program to Check for Palindrome String

// #include <stdio.h>
// #include <string.h>
// #include <stdlib.h>

// char *strrev(char *str) {
//     int len = strlen(str);
//     char *rev = (char *)malloc(sizeof(char) * (len + 1));

//     for (int i = 0; i < len; i++) {
//         rev[i] = str[len - i - 1];
//     }
//     rev[len] = '\0';
//     return rev;
// }

// void isPalindrome(char *str) {
//     char *rev = strrev(str);

//     if (strcmp(str, rev) == 0)
//         printf("\"%s\" is palindrome.\n", str);
//     else
//         printf("\"%s\" is not palindrome.\n", str);

//     free(rev);
// }

// int main() {
//     isPalindrome("madam");
//     isPalindrome("hello");

//     return 0;
// }


// Reverse Array in C

// #include <stdio.h>
// void rev(int arr[], int n) {
//     int l = 0, r = n - 1;
//     while (l < r) {
//         int temp = arr[l];
//         arr[l] = arr[r];
//         arr[r] = temp;
//         l++;
//         r--;
//     }
// }

// int main() {
//     int arr[] = {1, 2, 3, 4, 5};
//     int n = sizeof(arr) / sizeof(arr[0]);

//     rev(arr, n);

//     for (int i = 0; i < n; i++)
//         printf("%d ", arr[i]);

//     return 0;
// }


// C Program to Reverse a String Using Recursion

// #include <stdio.h>
// #include <string.h>

// void revRecursive(char *l, char *r) {
//     if (l < r) {
//         char c = *l;
//         *l = *r;
//         *r = c;
//         revRecursive(l + 1, r - 1);
//     }
// }

// void rev(char *s) {
//     revRecursive(s, s + strlen(s) - 1);
// }

// int main() {
//     char s[] = "centurion";
//     rev(s);
//     printf("%s", s);
//     return 0;
// }


// C Program to Find the Length of a String

// #include <stdio.h>
// #include <string.h>

// int main() {
//     char s[] = "jayadev";
//     printf("%lu", strlen(s));
//     return 0;
// }


// C Program to Sort an array of names or strings

// #include <stdio.h> 
// #include <stdlib.h> 
// #include <string.h> 

// static int myCompare(const void* a, const void* b) { 
//     return strcmp(*(const char**)a, *(const char**)b); 
// } 

// void sort(const char* arr[], int n) { 
//     qsort(arr, n, sizeof(const char*), myCompare); 
// } 

// int main() { 
//     const char* arr[] = { "Jayadev Jena", "coding", "clanguage" }; 

//     int n = sizeof(arr) / sizeof(arr[0]); 
//     int i; 

//     printf("Given array is\n"); 
//     for (i = 0; i < n; i++) 
//         printf("%d: %s \n", i, arr[i]); 

//     sort(arr, n); 

//     printf("\nSorted array is\n"); 
//     for (i = 0; i < n; i++) 
//         printf("%d: %s \n", i, arr[i]); 

//     return 0; 
// }

// C Program to Check if String is Pangram

// #include <stdbool.h> 
// #include <stdio.h> 
// #include <string.h> 

// bool checkPangram(char str[]) { 
//     bool mark[26]; 
//     for (int i = 0; i < 26; i++) 
//         mark[i] = false; 

//     int index; 
//     size_t size = strlen(str); 
//     for (int i = 0; i < size; i++) { 
//         if ('A' <= str[i] && str[i] <= 'Z') 
//             index = str[i] - 'A'; 
//         else if ('a' <= str[i] && str[i] <= 'z') 
//             index = str[i] - 'a'; 
//         else
//             continue; 
//         mark[index] = true; 
//     } 

//     for (int i = 0; i < 26; i++) 
//         if (mark[i] == false) 
//             return false; 

//     return true; 
// } 

// int main() { 
//     char str[] = "The quick brown fox jumps over the lazy dog"; 
//     if (checkPangram(str)) 
//         printf("\"%s\" is a pangram", str); 
//     else
//         printf("\"%s\" is not a pangram", str); 
//     return 0; 
// }


// C Program to Print the First Letter of Each Word

// #include <stdio.h>
// #include <ctype.h>

// void printFirstLetters(char str[]) {
//     int inWord = 0;
//     for (int i = 0; str[i] != '\0'; i++) {
//         if (!isspace(str[i]) && (i == 0 || isspace(str[i - 1]))) {
//             printf("%c ", str[i]);
//         }
//     }
// }

// int main() {
//     char str[] = "coding is boring";
//     printFirstLetters(str);
//     return 0;
// }


// C Program to Determine the Unicode Code Point at a Given Index

// #include <stdio.h>

// void unicodeAtIndex(char str[], int index) {
//     if (index < 0 || index >= strlen(str)) {
//         printf("Invalid index\n");
//         return;
//     }
//     printf("Unicode at index %d: %d\n", index, str[index]);
// }

// int main() {
//     char str[] = "Hello";
//     int index = 2; 
//     unicodeAtIndex(str, index);
//     return 0;
// }


// C Program to Remove Leading Zeros
// #include <stdio.h>
// #include <string.h>

// void removeLeadingZeros(char str[]) {
//     int i = 0;
//     while (str[i] == '0') 
//         i++;
//     printf("%s\n", str + i);
// }

// int main() {
//     char str[] = "00012345";
//     removeLeadingZeros(str);
//     return 0;
// }


// C Program to Compare Two Strings

// #include <stdio.h>
// #include <string.h>

// void compareStrings(char str1[], char str2[]) {
//     if (strcmp(str1, str2) == 0)
//         printf("Strings are equal\n");
//     else
//         printf("Strings are not equal\n");
// }

// int main() {
//     char str1[] = "Hello";
//     char str2[] = "Hello";
//     compareStrings(str1, str2);
//     return 0;
// }


// C Program to Compare Two Strings Lexicographically

// #include <stdio.h>
// #include <string.h>

// void compareLexicographically(char str1[], char str2[]) {
//     int result = strcmp(str1, str2);
//     if (result < 0)
//         printf("%s comes before %s\n", str1, str2);
//     else if (result > 0)
//         printf("%s comes after %s\n", str1, str2);
//     else
//         printf("Both strings are equal\n");
// }

// int main() {
//     char str1[] = "Apple";
//     char str2[] = "Banana";
//     compareLexicographically(str1, str2);
//     return 0;
// }


// C Program to Insert a String into Another String

// #include <stdio.h>
// #include <string.h>

// void insertString(char str1[], char str2[], int pos) {
//     char result[100];
//     strncpy(result, str1, pos);
//     result[pos] = '\0';
//     strcat(result, str2);
//     strcat(result, str1 + pos);
//     printf("Resulting string: %s\n", result);
// }

// int main() {
//     char str1[100] = "Hello World";
//     char str2[] = "Beautiful ";
//     int pos = 6;
//     insertString(str1, str2, pos);
//     return 0;
// }


// C Program to Split a String into a Number of Sub-Strings

// #include <stdio.h>
// #include <string.h>

// void splitString(char str[], char delim[]) {
//     char *token = strtok(str, delim);
//     while (token != NULL) {
//         printf("%s\n", token);
//         token = strtok(NULL, delim);
//     }
// }

// int main() {
//     char str[] = "Geeks for Geeks is awesome";
//     char delim[] = " ";
//     splitString(str, delim);
//     return 0;
// }
