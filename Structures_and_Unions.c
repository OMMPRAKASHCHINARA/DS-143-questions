// // C Program to Store Information of Students Using Structure

// #include <stdio.h>
// #include <stdlib.h>
// #include <string.h>

// struct Student {
//     char* name;
//     int roll_number;
//     int age;
//     double total_marks;
// };

// int main() {
//     struct Student students[5];
//     int n = sizeof(students) / sizeof(struct Student);

//     students[0].roll_number = 1;
//     students[0].name = "John";
//     students[0].age = 12;
//     students[0].total_marks = 78.50;

//     students[1].roll_number = 5;
//     students[1].name = "David";
//     students[1].age = 10;
//     students[1].total_marks = 56.84;

//     students[2].roll_number = 2;
//     students[2].name = "Emily";
//     students[2].age = 11;
//     students[2].total_marks = 87.94;

//     students[3].roll_number = 4;
//     students[3].name = "Sophia";
//     students[3].age = 12;
//     students[3].total_marks = 89.78;

//     students[4].roll_number = 3;
//     students[4].name = "Michael";
//     students[4].age = 13;
//     students[4].total_marks = 78.55;

//     printf("========================================\n");
//     printf("           Student Records              \n");
//     printf("========================================\n");

//     for (int i = 0; i < n; i++) {
//         printf("\nStudent %d:\n", i + 1);
//         printf("  Name        : %s\n", students[i].name);
//         printf("  Roll Number : %d\n", students[i].roll_number);
//         printf("  Age         : %d\n", students[i].age);
//         printf("  Total Marks : %.2f\n", students[i].total_marks);
//     }

//     printf("========================================\n");

//     return 0;
// }


// // C program to store Student records as Structures and Sort them by Name

// #include <stdio.h> 
// #include <stdlib.h> 
// #include <string.h> 

// struct Student { 
// 	char name[50]; 
// 	int id; 
// 	int age; 
// }; 

// int comparator(const void* p, const void* q) 
// { 
// 	return strcmp(((struct Student*)p)->name, 
// 				((struct Student*)q)->name); 
// } 

// int main() 
// { 
// 	int i, n = 5; 

// 	struct Student arr[] = {
// 		{ "David", 1, 12 },
// 		{ "Alice", 2, 10 },
// 		{ "Charlie", 3, 8 },
// 		{ "Bob", 4, 9 },
// 		{ "Eve", 5, 10 }
// 	};

// 	printf("Unsorted Student Records:\n"); 
// 	for (i = 0; i < n; i++) { 
// 		printf("Id = %d, Name = %s, Age = %d \n", 
// 			arr[i].id, arr[i].name, arr[i].age); 
// 	} 

// 	qsort(arr, n, sizeof(struct Student), comparator); 

// 	printf("\n\nStudent Records sorted by Name:\n"); 
// 	for (i = 0; i < n; i++) { 
// 		printf("Id = %d, Name = %s, Age = %d \n", 
// 			arr[i].id, arr[i].name, arr[i].age); 
// 	} 

// 	return 0; 
// }


// // C Program to Add N Distances Given in inch-feet System using Structures

// #include <stdio.h>

// struct InchFeet {
// 	int feet;
// 	float inch;
// };

// void findSum(struct InchFeet arr[], int N) {
// 	int feet_sum = 0;
// 	float inch_sum = 0.0;

// 	for (int i = 0; i < N; i++) {
// 		feet_sum += arr[i].feet;
// 		inch_sum += arr[i].inch;
// 	}

// 	if (inch_sum >= 12) {
// 		int x = (int)inch_sum;
// 		inch_sum -= x;
// 		inch_sum += x % 12;
// 		feet_sum += x / 12;
// 	}

// 	printf("Feet Sum: %d\n", feet_sum);
// 	printf("Inch Sum: %.2f\n", inch_sum);
// }

// int main() {
// 	struct InchFeet arr[] = { { 10, 3.7 }, { 10, 5.5 }, { 6, 8.0 } };
// 	int N = sizeof(arr) / sizeof(arr[0]);

// 	findSum(arr, N);

// 	return 0;
// }


// // C Program to Add Two Complex Numbers

// #include <stdio.h>

// typedef struct complexNumber {
// 	int real;
// 	int img;
// } complex;

// complex add(complex x, complex y);

// int main() {
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

// complex add(complex x, complex y) {
// 	complex add;
// 	add.real = x.real + y.real;
// 	add.img = x.img + y.img;
// 	return add;
// }


// // C program to store Student records as Structures and Sort them by Age or ID

// #include <stdio.h> 
// #include <stdlib.h> 
// #include <string.h> 

// struct Student { 
// 	char name[50]; 
// 	int id; 
// 	int age; 
// }; 

// int comparator(const void* p, const void* q) { 
// 	return (((struct Student*)p)->age - ((struct Student*)q)->age); 
// } 

// int main() { 
// 	int i = 0, n = 5; 

// 	struct Student arr[] = { 
// 		{ "John", 1, 12 }, 
// 		{ "Alice", 2, 10 }, 
// 		{ "Bob", 3, 8 }, 
// 		{ "Charlie", 4, 9 }, 
// 		{ "David", 5, 10 } 
// 	}; 

// 	printf("Unsorted Student Records:\n"); 
// 	for (i = 0; i < n; i++) { 
// 		printf("Id = %d, Name = %s, Age = %d \n", 
// 			arr[i].id, arr[i].name, arr[i].age); 
// 	} 

// 	qsort(arr, n, sizeof(struct Student), comparator); 

// 	printf("\n\nStudent Records sorted by Age:\n"); 
// 	for (i = 0; i < n; i++) { 
// 		printf("Id = %d, Name = %s, Age = %d \n", 
// 			arr[i].id, arr[i].name, arr[i].age); 
// 	} 

// 	return 0; 
// }


// // Read/Write Structure From/to a File in C

// #include <stdio.h>
// #include <stdlib.h>

// struct Person {
//     int id;
//     char fname[20];
//     char lname[20];
// };

// int main() {
//     FILE* outfile;

//     outfile = fopen("person.bin", "wb");
//     if (outfile == NULL) {
//         fprintf(stderr, "Error opening file\n");
//         exit(1);
//     }

//     struct Person person1 = {1, "John", "Doe"};

//     if (fwrite(&person1, sizeof(struct Person), 1, outfile)) {
//         printf("Structure written successfully\n");
//     } else {
//         printf("Error writing to file\n");
//     }

//     fclose(outfile);

//     return 0;
// }


// // Flexible Array Members in a structure in C

// #include <stdio.h>
// #include <stdlib.h>
// #include <string.h>

// struct student {
//     int stud_id;
//     int name_len;
//     int struct_size;
//     char stud_name[]; 
// };
// struct student* createStudent(int id, const char* name) {
//     struct student* s = malloc(sizeof(*s) + (strlen(name) + 1) * sizeof(char));
    
//     if (s == NULL) {
//         perror("Failed to allocate memory");
//         exit(EXIT_FAILURE);
//     }

//     s->stud_id = id;
//     s->name_len = strlen(name);
//     strcpy(s->stud_name, name); 

//     s->struct_size = sizeof(*s) + (s->name_len + 1) * sizeof(char);

//     return s;
// }

// void printStudent(const struct student* s) {
//     printf("Student ID: %d\n", s->stud_id);
//     printf("Student Name: %s\n", s->stud_name);
//     printf("Name Length: %d\n", s->name_len);
//     printf("Allocated Struct Size: %d bytes\n\n", s->struct_size);
// }

// int main() {
//     struct student* s1 = createStudent(523, "Cherry");
//     struct student* s2 = createStudent(535, "Sanjayulsha");

//     printStudent(s1);
//     printStudent(s2);

//     printf("Size of struct student (without FAM): %zu bytes\n", sizeof(struct student));
//     printf("Size of struct pointer: %zu bytes\n", sizeof(s1));

//     free(s1);
//     free(s2);

//     return 0;
// }
