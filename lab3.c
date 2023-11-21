#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// Question 1

//
//int swap_value(int* number, int *number2);
//
//int swap_value(int *number1, int* number2) {
//    int temporary = *number2;
//    *number2 = *number1;
//    *number1 = temporary;
//
//}
//
//int main()
//{
//
//    int num1 = 6624114;
//    int num2 = 7735225;
//    printf("Before swapping the values: num1 = %d and num2 = %d\n", num1, num2);
//
//    swap_value(&num1, &num2);
//    printf("After swapping the values: num1 = %d and num2 = %d\n", num1, num2);
//
//

//    Question 2
//    char string [] = "ufleidaczbiaf";
//    char *ptr = &string;
//    int len_of_str = strlen(string);
//    for (int i = len_of_str - 1 ; i >= 0; i--) {
//        printf("%c", *(ptr+i));
//    }
//    printf("\n");
//
//     Question 3
//    int len_array;
//
//    printf("Enter length of array: ");
//    scanf("%d", &len_array);
//
//    int input;
//    int array[len_array];
//    int *ptr2 =  array;
//    int count = 1;
//
//    while (ptr2 <= (&array[len_array]-1)) {
//        printf("Enter element %d of array: ", count);
//        scanf("%d", &input);
//        *ptr2 = input;
//        ptr2++;
//        count++;
//    }
//
//    ptr2 = array;  // Points to 0th index again
//
//    printf("Elements of the array are: ");
//    for (int i = 0; i < len_array; i++) {
//        printf(" %d ", *(ptr2+i));
//    }
//    printf("\n");
//
//     Question 4
//
//    int arr[4] = {6, 8, 26, 1};
//    int num_input;
//    int *ptr3 = arr;
//
//    printf("Enter a number to look for in the array: ");
//    scanf("%d", &num_input);
//
//    for (int i = 0; i < 4; i++) {  // 4 is the length of array
//            printf("%d\n", ptr3);
//            printf("%d\n", *ptr3);
//        if (*ptr3 == num_input) {
//            printf("The number exists in the array.");
//            break;
//        }
//       ptr3++;
//
//    }
//
////     Question 5
//int array1 [2][2] = {{1,2}, {3,4}};
//int array2 [2][2] = {{1,2}, {3,4}};
//
//int *ptr = array1;
//int *ptr2 = array2;
//
//for (int i = 0; i<2; i++) {
//   for (int j = 0; j<2; j++) {
//        int index = i*2 + j;
//        *(ptr+index) = *(ptr+index) + *(ptr2+index);
//   }
//
//
//}
//
//for (int i =0; i<2; i++) {
//
//    for (int j = 0; j<2; j++) {
//        int index = i*2 + j;
//        printf("%d\n", *(ptr+index));
//
//    }
//}


//}





