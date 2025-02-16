// // tmpfile() function in C

// #include <stdio.h> 

// int main() 
// { 
// 	char str[] = "Hello HumansForHumans"; 
// 	int i = 0; 

// 	FILE* tmp = tmpfile(); 
// 	if (tmp == NULL) 
// 	{ 
// 		puts("Unable to create temp file"); 
// 		return 0; 
// 	} 

// 	puts("Temporary file is created\n"); 
// 	while (str[i] != '\0') 
// 	{ 
// 		fputc(str[i], tmp); 
// 		i++; 
// 	} 

// 	rewind(tmp); 

// 	while (!feof(tmp)) 
// 		putchar(fgetc(tmp)); 
// } 


// // Read/Write Structure From/to a File in C

// #include <stdio.h>
// #include <stdlib.h>

// struct person {
//     int id;
//     char fname[20];
//     char lname[20];
// };

// int main()
// {
//     FILE* outfile;

//     outfile = fopen("person.bin", "wb");
//     if (outfile == NULL) {
//         fprintf(stderr, "\nError opening file\n");
//         exit(1);
//     }

//     struct person input1 = { 1, "Arjun", "Verma" };

//     int flag = fwrite(&input1, sizeof(struct person), 1, outfile);
//     if (flag) {
//         printf("Contents of the structure written successfully\n");
//     } else {
//         printf("Error Writing to File!\n");
//     }

//     fclose(outfile);
//     return 0;
// }


// // rename function in C

// #include <stdio.h>

// int main()
// {
//     char old_name[] = "animals.txt";
//     char new_name[] = "wildlife.txt";
//     int value;

//     value = rename(old_name, new_name);

//     if (!value) {
//         printf("File name changed successfully\n");
//     } else {
//         perror("Error");
//     }

//     return 0;
// }



// C fopen() Function

// #include <stdio.h>
// #include <stdlib.h>

// int main() {
//     FILE* fptr;

//     fptr = fopen("demo_file.txt", "w+");

//     if (fptr == NULL) {
//         printf("Error opening file!\n");
//         return 1;
//     }
//     fprintf(fptr, "%s", "Animals and Nature");
//     fclose(fptr);

//     return 0;
// }


// C program to compare two files and report mismatches

// #include <stdio.h>
// #include <stdlib.h>

// void compareFiles(FILE *fp1, FILE *fp2) {
//     char ch1 = getc(fp1);
//     char ch2 = getc(fp2);
//     int error = 0, pos = 0, line = 1;

//     while (ch1 != EOF && ch2 != EOF) {
//         pos++;

//         if (ch1 == '\n' && ch2 == '\n') {
//             line++;
//             pos = 0;
//         }

//         if (ch1 != ch2) {
//             error++;
//             printf("Line Number: %d \tError Position: %d \n", line, pos);
//         }

//         ch1 = getc(fp1);
//         ch2 = getc(fp2);
//     }

//     printf("Total Errors: %d\n", error);
// }

// int main() {
//     FILE *fp1 = fopen("file1.txt", "r");
//     FILE *fp2 = fopen("file2.txt", "r");

//     if (fp1 == NULL || fp2 == NULL) {
//         printf("Error: Files not opened\n");
//         exit(0);
//     }

//     compareFiles(fp1, fp2);

//     fclose(fp1);
//     fclose(fp2);
//     return 0;
// }


// C program to copy contents of one file to another file

// #include <stdio.h>
// #include <stdlib.h>

// int main() {
//     FILE *fptr1, *fptr2;
//     char filename[100];
//     int c;

//     printf("Enter the filename to open for reading: ");
//     scanf("%s", filename);

//     fptr1 = fopen(filename, "r");
//     if (fptr1 == NULL) {
//         printf("Cannot open file %s\n", filename);
//         exit(1);
//     }

//     printf("Enter the filename to open for writing: ");
//     scanf("%s", filename);

//     fptr2 = fopen(filename, "w");
//     if (fptr2 == NULL) {
//         printf("Cannot open file %s\n", filename);
//         exit(1);
//     }

//     while ((c = fgetc(fptr1)) != EOF) {
//         fputc(c, fptr2);
//     }

//     printf("Contents copied to %s\n", filename);

//     fclose(fptr1);
//     fclose(fptr2);
//     return 0;
// }


// Naive algorithm for Pattern Searching

// #include <stdio.h>
// #include <string.h>

// void search(char* pat, char* txt) {
//     int M = strlen(pat);
//     int N = strlen(txt);

//     for (int i = 0; i <= N - M; i++) {
//         int j;

//         for (j = 0; j < M; j++) {
//             if (txt[i + j] != pat[j]) {
//                 break;
//             }
//         }

//         if (j == M) {
//             printf("Pattern found at index %d\n", i);
//         }
//     }
// }

// int main() {
//     char txt1[] = "AABAACAADAABAABA";
//     char pat1[] = "AABA";
//     printf("Example 1:\n");
//     search(pat1, txt1);
    
//     char txt2[] = "agd";
//     char pat2[] = "g";
//     printf("\nExample 2:\n");
//     search(pat2, txt2);

//     return 0;
// }




// C program to append content of one text file to another

// #include <stdio.h>

// void appendFiles(char source[], char destination[]) {
//     FILE *fp1, *fp2;

//     fp1 = fopen(source, "a+");
//     fp2 = fopen(destination, "a+");

//     if (!fp1 && !fp2) {
//         printf("Unable to open/detect file(s)\n");
//         return;
//     }

//     char buf[100];

//     fprintf(fp2, "\n");

//     while (!feof(fp1)) {
//         fgets(buf, sizeof(buf), fp1);
//         fprintf(fp2, "%s", buf);
//     }

//     rewind(fp2);

//     while (!feof(fp2)) {
//         fgets(buf, sizeof(buf), fp2);
//         printf("%s", buf);
//     }
// }
// int main() {
//     char source[] = "file1.txt", destination[] = "file2.txt";
//     appendFiles(source, destination);

//     return 0;
// }




// C program to copy contents of one file to another file

// #include <stdio.h>
// #include <stdlib.h>

// int main()
// {
//     FILE *fptr1, *fptr2;
//     char sourceFile[100], destFile[100];
//     int c;

//     printf("Enter the filename to open for reading: ");
//     scanf("%s", sourceFile);

//     fptr1 = fopen(sourceFile, "r");
//     if (fptr1 == NULL)
//     {
//         printf("Cannot open file %s\n", sourceFile);
//         exit(1);
//     }

//     printf("Enter the filename to open for writing: ");
//     scanf("%s", destFile);

//     fptr2 = fopen(destFile, "w");
//     if (fptr2 == NULL)
//     {
//         printf("Cannot open file %s\n", destFile);
//         fclose(fptr1);
//         exit(1);
//     }

//     while ((c = fgetc(fptr1)) != EOF)
//     {
//         fputc(c, fptr2);
//     }

//     printf("Contents copied from %s to %s\n", sourceFile, destFile);

//     fclose(fptr1);
//     fclose(fptr2);
//     return 0;
// }



// C Program to Read and Print All Files From a Zip File

// #include <stdio.h>
// #include <stdlib.h>
// #include <string.h>
// #include <zip.h>

// void print_file_contents(const char *filename, struct zip *archive) {
//     struct zip_file *file = zip_fopen(archive, filename, 0);
//     if (!file) {
//         fprintf(stderr, "Error opening file %s in zip archive\n", filename);
//         return;
//     }

//     char buffer[1024];
//     zip_int64_t bytes_read;
//     while ((bytes_read = zip_fread(file, buffer, sizeof(buffer))) {
//         if (bytes_read < 0) {
//             fprintf(stderr, "Error reading file %s\n", filename);
//             break;
//         }
//         fwrite(buffer, 1, bytes_read, stdout);
//     }

//     zip_fclose(file);
// }

// int main(int argc, char *argv[]) {
//     if (argc != 2) {
//         fprintf(stderr, "Usage: %s <zipfile>\n", argv[0]);
//         return 1;
//     }

//     int err = 0;
//     struct zip *archive = zip_open(argv[1], 0, &err);
//     if (!archive) {
//         fprintf(stderr, "Error opening zip archive %s\n", argv[1]);
//         return 1;
//     }

//     int num_files = zip_get_num_entries(archive, 0);
//     for (int i = 0; i < num_files; i++) {
//         const char *filename = zip_get_name(archive, i, 0);
//         if (!filename) {
//             fprintf(stderr, "Error reading file name at index %d\n", i);
//             continue;
//         }
//         printf("Contents of %s:\n", filename);
//         print_file_contents(filename, archive);
//         printf("\n");
//     }

//     zip_close(archive);
//     return 0;
// }



