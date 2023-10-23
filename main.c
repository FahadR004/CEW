#include <stdio.h>
#include <stdlib.h>

void main()
{

    // Question 1
    /*
    int emp_id;
    printf("Enter employee id (only numbers): ");
    scanf("%d", &emp_id);

    int worked_hours;
    printf("Enter worked hours in a month: ");
    scanf("%d", &worked_hours);

    int salary_per_hour;
    printf("Enter salary per hour: ");
    scanf("%d", &salary_per_hour);

    printf("Salary of employee, %d, for this month will be: Rs. %.2f", emp_id, (float)worked_hours*salary_per_hour);
    */


    // Question 2
    /*
    float width;
    printf("Enter the width of the rectangle: ");
    scanf("%f", &width);

    float length;
    printf("Enter the length of a rectangle: ");
    scanf("%f", &length);

    printf("The perimeter of the rectangle is: %.2f m\n", (float)2*(length + width));
    printf("The area of the rectangle is: %.2f m^2", (float)(length*width));
    */

    // Question 3
    /*
    int height;
    printf("Please enter your height in centimeters: ");
    scanf("%d", &height);

    if (height>0 && height<150) {

        printf("You are a dwarf.");

    } else if (height >= 150 && height < 165) {

        printf("You have an average height.");

    } else if (height>=165) {

        printf("You are tall!");
    }
    */

    // Question 4
    /*int decimal_no;
    int remainder = 0;
    int result = 0;
    int decimal_place = 1;

    printf("Enter a number to get its binary equivalent: ");
    scanf("%d", &decimal_no);

    while (decimal_no) {
        remainder = decimal_no%2;
        decimal_no = decimal_no/2;
        result += (remainder*decimal_place);
        decimal_place = decimal_place*10;
    }

    printf("The binary conversion for this decimal number is: %d", result);
    */


    // Question 5
    // fibonacci(13, 0, 1);


}


/*
int fibonacci(int n, int a, int b) {
    int element1 = a;
    int element2 = b;
    int element3 = element1 + element2;
    if (element1==0) {
        printf("%d %d ", element1, element2);
    }
    if (n == element3) {
        printf("%d ", n);
        return n;
    }
    else {
        printf("%d ",element3);
        return fibonacci(n, element2, element3);
    }
}
*/

