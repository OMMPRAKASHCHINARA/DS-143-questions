// How to return a Pointer from a Function in C

#include <stdio.h> 

int* fun() { 
	int A = 10; 
	return (&A); 
} 

int main() { 
	int* p; 
	p = fun(); 

	printf("%p\n", p); 
	printf("%d\n", *p); 
	return 0; 
} 

// How to declare a Two Dimensional Array of pointers in C?

#include <stdio.h>

int main() {
	int arr1[5][5] = { { 0, 1, 2, 3, 4 },
					{ 2, 3, 4, 5, 6 },
					{ 4, 5, 6, 7, 8 },
					{ 5, 4, 3, 2, 6 },
					{ 2, 5, 4, 3, 1 } };
	int* arr2[5][5];

	for (int i = 0; i < 5; i++) {
		for (int j = 0; j < 5; j++) {
			arr2[i][j] = &arr1[i][j];
		}
	}

	printf("The values are\n");
	for (int i = 0; i < 5; i++) {
		for (int j = 0; j < 5; j++) {
			printf("%d ", *arr2[i][j]);
		}
		printf("\n");
	}

	return 0;
}


// C Program to Find Largest Element in an Array using Pointers

#include <stdio.h>
#include <stdlib.h>

void findLargest(int* arr, int N) {
	int i;
	for (i = 1; i < N; i++) {
		if (*arr < *(arr + i)) {
			*arr = *(arr + i);
		}
	}
	printf("%d ", *arr);
}

int main() {
	int i, N = 4;
	int* arr;
	arr = (int*)calloc(N, sizeof(int));

	if (arr == NULL) {
		printf("No memory allocated");
		exit(0);
	}

	*(arr + 0) = 14;
	*(arr + 1) = 12;
	*(arr + 2) = 19;
	*(arr + 3) = 20;

	findLargest(arr, N);
	return 0;
}


// C Program to Swap Two Numbers

#include <stdio.h>

int main() {
    int a = 5, b = 10, temp;
    temp = a;
    a = b;
    b = temp;
    printf("a = %d, b = %d\n", a, b);
    return 0;
}


// C program to sort an array using pointers

#include <stdio.h> 

void sort(int n, int* ptr) { 
    int i, j, t; 
    for (i = 0; i < n; i++) { 
        for (j = i + 1; j < n; j++) { 
            if (*(ptr + j) < *(ptr + i)) { 
                t = *(ptr + i); 
                *(ptr + i) = *(ptr + j); 
                *(ptr + j) = t; 
            } 
        } 
    } 
    for (i = 0; i < n; i++) 
        printf("%d ", *(ptr + i)); 
} 

int main() { 
    int n = 5; 
    int arr[] = { 0, 23, 14, 12, 9 }; 
    sort(n, arr); 
    return 0; 
}


// Sorting a dynamic 2-dimensional array of Strings

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void sort(char** names, int n) {
    int i, j;
    for (i = 0; i < n - 1; i++) {
        for (j = 0; j < n - i - 1; j++) {
            if (strcmp(names[j], names[j + 1]) > 0) {
                char* temp = (char*)calloc(30, sizeof(char));
                strcpy(temp, names[j]);
                strcpy(names[j], names[j + 1]);
                strcpy(names[j + 1], temp);
                free(temp);
            }
        }
    }
}

int main() {
    char** names;
    int n, i;
    printf("Enter the number of names to be printed: ");
    scanf("%d", &n);

    names = (char**)calloc(n, sizeof(char*));

    for (i = 0; i < n; i++) {
        names[i] = (char*)calloc(30, sizeof(char));
        scanf("%s", names[i]);
    }

    sort(names, n);

    printf("\nArray after sorting:\n");
    for (i = 0; i < n; i++) {
        printf("%s\n", names[i]);
        free(names[i]);
    }

    free(names);
    return 0;
}


// Check if a string is palindrome in C using pointers

#include <stdio.h>

void isPalindrome(char* string) {
    char *ptr = string, *rev = string;
    
    while (*ptr != '\0') {
        ++ptr;
    }
    --ptr;
    
    while (ptr >= rev) {
        if (*ptr != *rev) {
            printf("String is not a Palindrome");
            return;
        }
        --ptr;
        rev++;
    }
    printf("String is Palindrome");
}

int main() {
    char str[1000] = "madam";
    isPalindrome(str);
    return 0;
}


// C program to create copy of a singly Linked List using Recursion

#include <stdio.h> 
#include <stdlib.h> 

struct Node { 
    int data; 
    struct Node* next; 
}; 

void printList(struct Node* head) { 
    struct Node* ptr = head; 
    while (ptr) { 
        printf("%d -> ", ptr->data); 
        ptr = ptr->next; 
    } 
    printf("NULL"); 
} 

void insert(struct Node** head_ref, int data) { 
    struct Node* newNode = (struct Node*)malloc(sizeof(struct Node)); 
    newNode->data = data; 
    newNode->next = *head_ref; 
    *head_ref = newNode; 
} 

struct Node* copyList(struct Node* head) { 
    if (head == NULL) { 
        return NULL; 
    } 
    struct Node* newNode = (struct Node*)malloc(sizeof(struct Node)); 
    newNode->data = head->data; 
    newNode->next = copyList(head->next); 
    return newNode; 
} 

struct Node* create(int arr[], int N) { 
    struct Node* head_ref = NULL; 
    for (int i = N - 1; i >= 0; i--) { 
        insert(&head_ref, arr[i]); 
    } 
    return head_ref; 
} 

void printLists(struct Node* head_ref, struct Node* dup) { 
    printf("Original list: "); 
    printList(head_ref); 
    printf("\nDuplicate list: "); 
    printList(dup); 
} 

int main(void) { 
    int arr[] = { 1, 2, 3, 4, 5 }; 
    int N = sizeof(arr) / sizeof(arr[0]); 
    struct Node* head_ref = create(arr, N); 
    struct Node* dup = copyList(head_ref); 
    printLists(head_ref, dup); 
    return 0; 
}


