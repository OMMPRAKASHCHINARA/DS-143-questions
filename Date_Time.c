// 1. C Program to Format Time in AM-PM Format

// #include <stdio.h>
// #include <time.h>

// int main() {
//     time_t now;
//     struct tm *local;
//     char time_str[100];

//     now = time(NULL);
//     local = localtime(&now);

//     strftime(time_str, sizeof(time_str), "%I:%M:%S %p", local);
//     printf("Time in AM-PM format: %s\n", time_str);

//     return 0;
// }


// 2. C Program to Print Digital Clock with the Current Time

// #include <stdio.h>
// #include <time.h>
// #include <unistd.h>

// int main() {
//     while (1) {
//         time_t now;
//         struct tm *local;
//         char time_str[100];

//         now = time(NULL);
//         local = localtime(&now);

//         strftime(time_str, sizeof(time_str), "%H:%M:%S", local);
//         printf("Digital Clock: %s\r", time_str);
//         fflush(stdout);

//         sleep(1);
//     }

//     return 0;
// }


// 3. C Program to Display Dates of Calendar Year in Different Formats

// #include <stdio.h>
// #include <time.h>

// int main() {
//     time_t now;
//     struct tm *local;

//     now = time(NULL);
//     local = localtime(&now);

//     printf("Date Formats:\n");
//     printf("DD/MM/YYYY: %02d/%02d/%04d\n", local->tm_mday, local->tm_mon + 1, local->tm_year + 1900);
//     printf("MM-DD-YYYY: %02d-%02d-%04d\n", local->tm_mon + 1, local->tm_mday, local->tm_year + 1900);
//     printf("YYYY/MM/DD: %04d/%02d/%02d\n", local->tm_year + 1900, local->tm_mon + 1, local->tm_mday);

//     return 0;
// }



// 4. C Program to Display Current Date and Time

// #include <stdio.h>
// #include <time.h>

// int main() {
//     time_t now;
//     struct tm *local;

//     now = time(NULL);
//     local = localtime(&now);

//     printf("Current Date and Time: %s", asctime(local));

//     return 0;
// }



// 5. C Program to Maximize Time by Replacing ‘_’ in a Given 24-Hour Format Time

// #include <stdio.h>
// #include <string.h>

// void maximize_time(char *time) {
//     for (int i = 0; i < strlen(time); i++) {
//         if (time[i] == '_') {
//             if (i == 0) time[i] = (time[1] <= '3') ? '2' : '1';
//             else if (i == 1) time[i] = (time[0] == '2') ? '3' : '9';
//             else if (i == 3) time[i] = '5';
//             else if (i == 4) time[i] = '9';
//         }
//     }
// }

// int main() {
//     char time[] = "2_:4_";
//     maximize_time(time);
//     printf("Maximized Time: %s\n", time);

//     return 0;
// }



// 6. C Program to Convert the Local Time to GMT

// #include <stdio.h>
// #include <time.h>

// int main() {
//     time_t now;
//     struct tm *gmt;

//     now = time(NULL);
//     gmt = gmtime(&now);

//     printf("Local Time: %s", asctime(localtime(&now)));
//     printf("GMT Time: %s", asctime(gmt));

//     return 0;
// }


// 7. C Program to Convert Hours into Minutes and Seconds

// #include <stdio.h>

// int main() {
//     int hours, minutes, seconds;

//     printf("Enter hours: ");
//     scanf("%d", &hours);

//     minutes = hours * 60;
//     seconds = hours * 3600;

//     printf("%d hours = %d minutes = %d seconds\n", hours, minutes, seconds);

//     return 0;
// }