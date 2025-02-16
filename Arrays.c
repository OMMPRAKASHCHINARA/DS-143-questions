// // 1. C Program to Print a 2D Array
// #include <stdio.h>
// void print2DArray(int arr[][3], int rows, int cols) {
//     for (int i = 0; i < rows; i++) {
//         for (int j = 0; j < cols; j++) {
//             printf("%d ", arr[i][j]);
//         }
//         printf("\n");
//     }
// }

// // 2. C Program to Find the Largest Element in an Array
// #include <stdio.h>
// int findLargest(int arr[], int n) {
//     int max = arr[0];
//     for (int i = 1; i < n; i++) {
//         if (arr[i] > max) max = arr[i];
//     }
//     return max;
// }

// // 3. C Program to Find the Maximum and Minimum in an Array
// #include <stdio.h>
// void findMaxMin(int arr[], int n, int *max, int *min) {
//     *max = *min = arr[0];
//     for (int i = 1; i < n; i++) {
//         if (arr[i] > *max) *max = arr[i];
//         if (arr[i] < *min) *min = arr[i];
//     }
// }

// // 4. C Program to Search an Element in an Array (Binary Search)
// #include <stdio.h>
// int binarySearch(int arr[], int low, int high, int key) {
//     while (low <= high) {
//         int mid = (low + high) / 2;
//         if (arr[mid] == key) return mid;
//         else if (arr[mid] < key) low = mid + 1;
//         else high = mid - 1;
//     }
//     return -1;
// }

// // 5. C Program to Calculate the Average of All the Elements Present in an Array
// #include <stdio.h>
// float calculateAverage(int arr[], int n) {
//     int sum = 0;
//     for (int i = 0; i < n; i++) sum += arr[i];
//     return (float)sum / n;
// }

// // 6. C Program to Sort an Array using Bubble Sort
// #include <stdio.h>
// void bubbleSort(int arr[], int n) {
//     for (int i = 0; i < n - 1; i++) {
//         for (int j = 0; j < n - i - 1; j++) {
//             if (arr[j] > arr[j + 1]) {
//                 int temp = arr[j];
//                 arr[j] = arr[j + 1];
//                 arr[j + 1] = temp;
//             }
//         }
//     }
// }

// // 7. C Program to Sort an Array using Merge Sort
// #include <stdio.h>
// void merge(int arr[], int l, int m, int r) {
//     int n1 = m - l + 1, n2 = r - m, L[n1], R[n2];
//     for (int i = 0; i < n1; i++) L[i] = arr[l + i];
//     for (int i = 0; i < n2; i++) R[i] = arr[m + 1 + i];
//     int i = 0, j = 0, k = l;
//     while (i < n1 && j < n2) arr[k++] = (L[i] <= R[j]) ? L[i++] : R[j++];
//     while (i < n1) arr[k++] = L[i++];
//     while (j < n2) arr[k++] = R[j++];
// }

// void mergeSort(int arr[], int l, int r) {
//     if (l < r) {
//         int m = l + (r - l) / 2;
//         mergeSort(arr, l, m);
//         mergeSort(arr, m + 1, r);
//         merge(arr, l, m, r);
//     }
// }

// // 8. C Program to Sort an Array Using Selection Sort
// #include <stdio.h>
// void selectionSort(int arr[], int n) {
//     for (int i = 0; i < n - 1; i++) {
//         int minIdx = i;
//         for (int j = i + 1; j < n; j++)
//             if (arr[j] < arr[minIdx]) minIdx = j;
//         int temp = arr[minIdx];
//         arr[minIdx] = arr[i];
//         arr[i] = temp;
//     }
// }

// // 9. C Program to Sort an Array Using Insertion Sort
// #include <stdio.h>
// void insertionSort(int arr[], int n) {
//     for (int i = 1; i < n; i++) {
//         int key = arr[i], j = i - 1;
//         while (j >= 0 && arr[j] > key) arr[j + 1] = arr[j--];
//         arr[j + 1] = key;
//     }
// }

// // 10. C Program to Sort the Elements of an Array in Descending Order
// #include <stdio.h>
// void sortDescending(int arr[], int n) {
//     for (int i = 0; i < n - 1; i++) {
//         for (int j = i + 1; j < n; j++) {
//             if (arr[i] < arr[j]) {
//                 int temp = arr[i];
//                 arr[i] = arr[j];
//                 arr[j] = temp;
//             }
//         }
//     }
// }

// // 11. C Program to Sort the Elements of an Array in Ascending Order
// #include <stdio.h>
// void sortAscending(int arr[], int n) {
//     for (int i = 0; i < n - 1; i++) {
//         for (int j = i + 1; j < n; j++) {
//             if (arr[i] > arr[j]) {
//                 int temp = arr[i];
//                 arr[i] = arr[j];
//                 arr[j] = temp;
//             }
//         }
//     }
// }

// int main() {
//     int arr[] = {10, 3, 7, 5, 2};
//     int n = sizeof(arr) / sizeof(arr[0]);
    
//     printf("Largest Element: %d\n", findLargest(arr, n));
    
//     int max, min;
//     findMaxMin(arr, n, &max, &min);
//     printf("Max: %d, Min: %d\n", max, min);
    
//     sortDescending(arr, n);
//     printf("Sorted Descending: ");
//     for (int i = 0; i < n; i++) printf("%d ", arr[i]);
//     printf("\n");
    
//     sortAscending(arr, n);
//     printf("Sorted Ascending: ");
//     for (int i = 0; i < n; i++) printf("%d ", arr[i]);
//     printf("\n");
    
//     return 0;
// }

// // 12. C Program to Remove Duplicate Elements From a Sorted Array
// #include <stdio.h>
// int removeDuplicates(int arr[], int n) {
//     if (n == 0 || n == 1) return n;
//     int temp[n], j = 0;
//     for (int i = 0; i < n - 1; i++)
//         if (arr[i] != arr[i + 1]) temp[j++] = arr[i];
//     temp[j++] = arr[n - 1];
//     for (int i = 0; i < j; i++) arr[i] = temp[i];
//     return j;
// }

// // 13. C Program to Merge Two Arrays
// #include <stdio.h>
// void mergeArrays(int arr1[], int arr2[], int n1, int n2, int merged[]) {
//     for (int i = 0; i < n1; i++) merged[i] = arr1[i];
//     for (int i = 0; i < n2; i++) merged[n1 + i] = arr2[i];
// }

// // 14. C Program to Remove All Occurrences of an Element in an Array
// #include <stdio.h>
// int removeElement(int arr[], int n, int key) {
//     int j = 0;
//     for (int i = 0; i < n; i++) {
//         if (arr[i] != key) arr[j++] = arr[i];
//     }
//     return j;
// }

// // 15. C Program to Find Common Array Elements
// #include <stdio.h>
// void findCommonElements(int arr1[], int arr2[], int n1, int n2) {
//     printf("Common Elements: ");
//     for (int i = 0; i < n1; i++) {
//         for (int j = 0; j < n2; j++) {
//             if (arr1[i] == arr2[j]) {
//                 printf("%d ", arr1[i]);
//                 break;
//             }
//         }
//     }
//     printf("\n");
// }

// // 16. C Program for Array Rotation
// #include <stdio.h>
// void rotateArray(int arr[], int n, int d) {
//     int temp[d];
//     for (int i = 0; i < d; i++) temp[i] = arr[i];
//     for (int i = d; i < n; i++) arr[i - d] = arr[i];
//     for (int i = 0; i < d; i++) arr[n - d + i] = temp[i];
// }

// // 17. C Program to Sort the 2D Array Across Rows
// #include <stdio.h>
// void sortRows(int arr[][3], int rows, int cols) {
//     for (int i = 0; i < rows; i++) {
//         for (int j = 0; j < cols - 1; j++) {
//             for (int k = j + 1; k < cols; k++) {
//                 if (arr[i][j] > arr[i][k]) {
//                     int temp = arr[i][j];
//                     arr[i][j] = arr[i][k];
//                     arr[i][k] = temp;
//                 }
//             }
//         }
//     }
// }

// // 18. C Program to Find the Transpose of a Matrix
// #include <stdio.h>
// void transposeMatrix(int arr[][3], int trans[][3], int rows, int cols) {
//     for (int i = 0; i < rows; i++) {
//         for (int j = 0; j < cols; j++) {
//             trans[j][i] = arr[i][j];
//         }
//     }
// }

// int main() {
//     int arr1[] = {1, 2, 2, 3, 4, 4, 5};
//     int n = sizeof(arr1) / sizeof(arr1[0]);
//     n = removeDuplicates(arr1, n);
//     printf("Array after removing duplicates: ");
//     for (int i = 0; i < n; i++) printf("%d ", arr1[i]);
//     printf("\n");

//     int arr2[] = {2, 3, 5, 7};
//     findCommonElements(arr1, arr2, n, 4);

//     return 0;
// }

// // 19. Transpose of a Matrix in C
// #include <stdio.h>

// #define ROW 3
// #define COL 3

// void findTranspose(int matrix[ROW][COL], int transpose[COL][ROW]) {
//     for (int i = 0; i < ROW; i++) {
//         for (int j = 0; j < COL; j++) {
//             transpose[j][i] = matrix[i][j];
//         }
//     }
// }

// void printMatrix(int matrix[ROW][COL]) {
//     for (int i = 0; i < ROW; i++) {
//         for (int j = 0; j < COL; j++) {
//             printf("%d ", matrix[i][j]);
//         }
//         printf("\n");
//     }
// }

// int main() {
//     int matrix[ROW][COL] = {
//         {1, 2, 3},
//         {4, 5, 6},
//         {7, 8, 9}
//     };
    
//     int transpose[COL][ROW];

//     printf("Original Matrix:\n");
//     printMatrix(matrix);

//     findTranspose(matrix, transpose);

//     printf("\nTranspose of the Matrix:\n");
//     for (int i = 0; i < COL; i++) {
//         for (int j = 0; j < ROW; j++) {
//             printf("%d ", transpose[i][j]);
//         }
//         printf("\n");
//     }

//     return 0;
// }

// 20. C Program to Find Determinant of a Matrix
// #include <stdio.h>

// #define SIZE 3

// int findDeterminant(int matrix[SIZE][SIZE]) {
//     int determinant = matrix[0][0] * ((matrix[1][1] * matrix[2][2]) - (matrix[1][2] * matrix[2][1]))
//                     - matrix[0][1] * ((matrix[1][0] * matrix[2][2]) - (matrix[1][2] * matrix[2][0]))
//                     + matrix[0][2] * ((matrix[1][0] * matrix[2][1]) - (matrix[1][1] * matrix[2][0]));
//     return determinant;
// }

// void printMatrix(int matrix[SIZE][SIZE]) {
//     for (int i = 0; i < SIZE; i++) {
//         for (int j = 0; j < SIZE; j++) {
//             printf("%d ", matrix[i][j]);
//         }
//         printf("\n");
//     }
// }

// int main() {
//     int matrix[SIZE][SIZE] = {
//         {1, 2, 3},
//         {4, 5, 6},
//         {7, 8, 9}
//     };

//     printf("Matrix:\n");
//     printMatrix(matrix);

//     int determinant = findDeterminant(matrix);
//     printf("\nDeterminant of the matrix: %d\n", determinant);

//     return 0;
// }


// 21.  C Program to Find the Normal and Trace of a Matrix

// #include <stdio.h>
// #include <math.h>

// void findNormalAndTrace(int mat[][10], int n) {
//     int trace = 0;
//     double normal = 0;

//     for (int i = 0; i < n; i++) {
//         trace += mat[i][i];  
//         for (int j = 0; j < n; j++) {
//             normal += mat[i][j] * mat[i][j]; 
//         }
//     }
//     normal = sqrt(normal);

//     printf("Trace of the matrix: %d\n", trace);
//     printf("Normal of the matrix: %.2lf\n", normal);
// }

// int main() {
//     int n, mat[10][10];

//     printf("Enter the size of the square matrix: ");
//     scanf("%d", &n);

//     printf("Enter the elements of the matrix:\n");
//     for (int i = 0; i < n; i++)
//         for (int j = 0; j < n; j++)
//             scanf("%d", &mat[i][j]);

//     findNormalAndTrace(mat, n);
//     return 0;
// }


// 22. C Program to Add Two Matrices

// #include <stdio.h>

// void addMatrices(int a[][10], int b[][10], int res[][10], int r, int c) {
//     for (int i = 0; i < r; i++)
//         for (int j = 0; j < c; j++)
//             res[i][j] = a[i][j] + b[i][j];
// }

// void displayMatrix(int mat[][10], int r, int c) {
//     for (int i = 0; i < r; i++) {
//         for (int j = 0; j < c; j++)
//             printf("%d ", mat[i][j]);
//         printf("\n");
//     }
// }

// int main() {
//     int r, c, a[10][10], b[10][10], res[10][10];

//     printf("Enter the number of rows and columns: ");
//     scanf("%d%d", &r, &c);

//     printf("Enter elements of first matrix:\n");
//     for (int i = 0; i < r; i++)
//         for (int j = 0; j < c; j++)
//             scanf("%d", &a[i][j]);

//     printf("Enter elements of second matrix:\n");
//     for (int i = 0; i < r; i++)
//         for (int j = 0; j < c; j++)
//             scanf("%d", &b[i][j]);

//     addMatrices(a, b, res, r, c);
    
//     printf("Sum of matrices:\n");
//     displayMatrix(res, r, c);

//     return 0;
// }

// 23. C Program to Multiply Two Matrices

// #include <stdio.h>

// void multiplyMatrices(int a[][10], int b[][10], int res[][10], int r1, int c1, int c2) {
//     for (int i = 0; i < r1; i++)
//         for (int j = 0; j < c2; j++) {
//             res[i][j] = 0;
//             for (int k = 0; k < c1; k++)
//                 res[i][j] += a[i][k] * b[k][j];
//         }
// }

// void displayMatrix(int mat[][10], int r, int c) {
//     for (int i = 0; i < r; i++) {
//         for (int j = 0; j < c; j++)
//             printf("%d ", mat[i][j]);
//         printf("\n");
//     }
// }

// int main() {
//     int r1, c1, r2, c2, a[10][10], b[10][10], res[10][10];

//     printf("Enter rows and columns of first matrix: ");
//     scanf("%d%d", &r1, &c1);
//     printf("Enter rows and columns of second matrix: ");
//     scanf("%d%d", &r2, &c2);

//     if (c1 != r2) {
//         printf("Matrix multiplication not possible.\n");
//         return 0;
//     }

//     printf("Enter elements of first matrix:\n");
//     for (int i = 0; i < r1; i++)
//         for (int j = 0; j < c1; j++)
//             scanf("%d", &a[i][j]);

//     printf("Enter elements of second matrix:\n");
//     for (int i = 0; i < r2; i++)
//         for (int j = 0; j < c2; j++)
//             scanf("%d", &b[i][j]);

//     multiplyMatrices(a, b, res, r1, c1, c2);

//     printf("Product of matrices:\n");
//     displayMatrix(res, r1, c2);

//     return 0;
// }


// 24. C Program to Print Boundary Elements of a Matrix

// #include <stdio.h>

// void printBoundary(int mat[][10], int r, int c) {
//     for (int i = 0; i < r; i++) {
//         for (int j = 0; j < c; j++) {
//             if (i == 0 || j == 0 || i == r - 1 || j == c - 1)
//                 printf("%d ", mat[i][j]);
//             else
//                 printf("  ");
//         }
//         printf("\n");
//     }
// }

// int main() {
//     int r, c, mat[10][10];

//     printf("Enter the number of rows and columns: ");
//     scanf("%d%d", &r, &c);

//     printf("Enter the elements of the matrix:\n");
//     for (int i = 0; i < r; i++)
//         for (int j = 0; j < c; j++)
//             scanf("%d", &mat[i][j]);

//     printf("Boundary elements of the matrix:\n");
//     printBoundary(mat, r, c);

//     return 0;
// }


// 25. C Program to Rotate Matrix Elements

// #include <stdio.h> 

// #define R 4 
// #define C 4 

// void rotatematrix(int m, int n, int mat[R][C]) 
// { 
// 	int row = 0, col = 0; 
// 	int prev, curr; 

// 	while (row < m && col < n) { 

// 		if (row + 1 == m || col + 1 == n) 
// 			break; 
// 		prev = mat[row + 1][col]; 
// 		for (int i = col; i < n; i++) { 
// 			curr = mat[row][i]; 
// 			mat[row][i] = prev; 
// 			prev = curr; 
// 		} 
// 		row++; 
// 		for (int i = row; i < m; i++) { 
// 			curr = mat[i][n - 1]; 
// 			mat[i][n - 1] = prev; 
// 			prev = curr; 
// 		} 
// 		n--; 
// 		if (row < m) { 
// 			for (int i = n - 1; i >= col; i--) { 
// 				curr = mat[m - 1][i]; 
// 				mat[m - 1][i] = prev; 
// 				prev = curr; 
// 			} 
// 		} 
// 		m--; 
// 		if (col < n) { 
// 			for (int i = m - 1; i >= row; i--) { 
// 				curr = mat[i][col]; 
// 				mat[i][col] = prev; 
// 				prev = curr; 
// 			} 
// 		} 
// 		col++; 
// 	} 
// } 

// int main() 
// {  
// 	int mat[R][C] = { { 1, 2, 3, 4 }, 
// 					{ 5, 6, 7, 8 }, 
// 					{ 9, 10, 11, 12 }, 
// 					{ 13, 14, 15, 16 } }; 

// 	printf("\n Input Matrix \n"); 
// 	for (int i = 0; i < R; i++) { 
// 		for (int j = 0; j < C; j++) { 
// 			printf(" %d ", mat[i][j]); 
// 		} 
// 		printf("\n"); 
// 	} 
// 	rotatematrix(R, C, mat); 
// 	printf("\n Rotated Matrix \n"); 
// 	for (int i = 0; i < R; i++) { 
// 		for (int j = 0; j < C; j++) { 
// 			printf(" %d ", mat[i][j]); 
// 		} 
// 		printf("\n"); 
// 	} 

// 	return 0; 
// }


//26. C Program to Compute the Sum of Diagonals of a Matrix

// #include <stdio.h>

// int sumDiagonals(int mat[][10], int n) {
//     int sum = 0;
//     for (int i = 0; i < n; i++) {
//         sum += mat[i][i]; // Primary diagonal
//         if (i != n - i - 1)
//             sum += mat[i][n - i - 1]; // Secondary diagonal
//     }
//     return sum;
// }

// int main() {
//     int n, mat[10][10];

//     printf("Enter the size of the square matrix: ");
//     scanf("%d", &n);

//     printf("Enter the elements of the matrix:\n");
//     for (int i = 0; i < n; i++)
//         for (int j = 0; j < n; j++)
//             scanf("%d", &mat[i][j]);

//     printf("Sum of diagonals: %d\n", sumDiagonals(mat, n));

//     return 0;
// }


//27. C Program to Interchange First and Last Rows in a Matrix

// #include <stdio.h>

// void swapRows(int mat[][10], int r, int c) {
//     for (int j = 0; j < c; j++) {
//         int temp = mat[0][j];
//         mat[0][j] = mat[r - 1][j];
//         mat[r - 1][j] = temp;
//     }
// }


//28. C Program to Interchange First and Last Columns in a Matrix
// #include <stdio.h> 
// #define n 3 

// void interchangeFirstLast(int mat[][n]) 
// { 
// 	for (int i = 0; i < n; i++) { 
// 		int t = mat[i][0]; 
// 		mat[i][0] = mat[i][n - 1]; 
// 		mat[i][n - 1] = t; 
// 	} 
// } 

// int main() 
// { 
// 	int mat[n][n] 
// 		= { { 2, 4, 6 }, { 8, 2, 3 }, { 1, 9, 4 } }; 

// 	printf("Input Matrix: \n"); 
// 	for (int i = 0; i < n; i++) { 
// 		for (int j = 0; j < n; j++) { 
// 			printf("%d ", mat[i][j]); 
// 		} 
// 		printf("\n"); 
// 	} 
// 	interchangeFirstLast(mat); 
// 	printf("Output Matrix: \n"); 
// 	for (int i = 0; i < n; i++) { 
// 		for (int j = 0; j < n; j++) { 
// 			printf("%d ", mat[i][j]); 
// 		} 
// 		printf("\n"); 
// 	} 
// }

