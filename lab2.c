#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

//struct distances {
//
//int inch_distance;
//float feet_distance;
//
//};


int main(){
    // Question 1
//    int input;
//    int sum = 0;
//    int for_count = 1;
//   printf("Enter a number: ");
//   scanf("%d", &input);
//    for (int i = 0; i<input; i++) {
//        printf("%d\n", for_count);
//        sum += for_count;
//        for_count += 2;
//    }
////    printf("Total sum: %d", sum);
//
//
//    int iteration = 0;
//    int while_count = 1;
//    int while_sum = 0;
//    while (iteration<input) {
//        printf("%d \n", while_count);
//        while_sum += while_count;
//        while_count += 2;
//
//    iteration++;
//    }
//    printf("Total sum using while loop is: %d", while_sum);


//    int iteration2 = 0;
//    int do_while_count = 1;
//    int do_while_sum = 0;
//    do {
//        printf("%d \n", do_while_count);
//        do_while_sum += do_while_count;
//        do_while_count += 2;
//        iteration2++;
//    } while (iteration2< input);
//    printf("Total sum using do-while loop is: %d", iteration2);

// Question 2
//    int input5 = 0;
//    printf("Enter a number to get the pattern: ");
//    scanf("%d", &input5);
//    int spaces = input5-1;
//    for (int i =1; i <= input5; i++) {
//        for (int j = spaces; j>= 1; j--) {
//            printf(" ");
//        }
//        for (int k = 0; k < i; k++) {
//            printf("* ");
//        }
//    printf("\n");
//    spaces--;

    // Question 3

//    char first_word [30];
//    char second_word [30];
//    printf("Enter a word: ");
//    scanf("%s", first_word);
//    printf("Enter second word: ");
//    scanf("%s", second_word);
//    int x = compare_strings(first_word, second_word);
//    if (x == 0) {
//        printf("Strings are equal!");
//    }
//    else {
//        printf("Strings are not equal!");




    // Question 4


//    char sentence[100];
//    int i;
//
//    printf("Enter a sentence: ");
//    gets(sentence);
//
//    for (i = 0; sentence[i] != '\0'; i++) {
//        if (islower(sentence[i])) {
//            sentence[i] = toupper(sentence[i]);
//        } else if (isupper(sentence[i])) {
//            sentence[i] = tolower(sentence[i]);
//        }
//    }
//
//    printf("Converted sentence: %s\n", sentence);


// Question 5
//    int array [6] = {1,2,5,5,5,6};
//    printf("Unique elements of the array are: ");
//    for (int i =0; i<6; i++) {
//        int count = 0;
//        for (int j =0; j<6; j++) {
//            if (array[i] == array[j]) {
//                count += 1;}
//                }
//        if (count == 1) {
//            printf(" %d ", array[i]);
//        }
//
}

// Question 6
//    struct distances my_distance;
//    my_distance.inch_distance = 12;
//    int input6;
//    my_distance.feet_distance = my_distance.inch_distance/12.0;
//    printf("Current distance in inches: %d\n", my_distance.inch_distance);
//    printf("Current distance in feet: %.2f\n", my_distance.feet_distance);
//    printf("Add a value: ");
//    scanf("%d", &input6);
//    my_distance.inch_distance += input6;
//    printf("New distance in inches is: %d\n", my_distance.inch_distance);
//    printf("New distance in feet is: %.2f\n", my_distance.inch_distance/12.0);
//}
//int compare_strings(char*, char*);
//int compare_strings(char*str1, char*str2) {
//    int i  = 0;
//    int check = 0;
//    while(*str1!= "\0" && *str2 != "\0"){
//        if (*str1 != *str2) {
//            check = 1;
//            return check;
//        str1++;
//        str2++;
//        }
//    return check;
//    }
}








// break is the same as in python. Same for continue, which skips the current iteration and rechecks the condition

//
//    int input2;
//    while (input2>0) {
//        printf("Enter a number greater than 0 to get its table. Type less than 0 to quit: ");
//        scanf("%d", &input2);
//        for (int i = 1; i <= input2; i++) {
//            if (i % 2 == 0) {
//                continue;
//        }
//        printf("Odd table is: %d x %d = %d\n", i, input2, i*input2);
//    }
//    }

//    int matrix[2][3] = { {1, 4, 2}, {3, 6, 8} };
//    int input4;
//    printf("Enter a number to add to the matrix: ");
//    scanf("%d", &input4);
//    for (int i = 0; i < 2; i++) {
//        for (int j = 0; j < 3; j++) {
//            int element = matrix[i][j];
//            element += input4;
//            matrix[i][j] = element;
//            printf("%d ", matrix[i][j]);
//    }
//    printf("\n");
//}

//    }
//    struct Books {
//        char title[50];
//        char author[50];
//        char subject[100];
//        int book_id;
//    };
//
//    struct Books myBooks;
//    strcpy(myBooks.title, "Operating Systems: Internals and Design Principles");
//    printf("Title%s\n", myBooks.title);
//    return 0;
