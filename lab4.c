#include <stdio.h>
#include <stdlib.h>


struct addressBook {

    char name [100];
    char email [100];
    int phone_no;

    };

int main()
{
//    int a = 33;
//    int* ptr_a = &a;
//    printf("%p\n", ptr_a);
//    ptr_a++;
//    printf("%p\n", ptr_a);
//    int *ptr;
//    ptr = (int*) malloc(100*sizeof(int));

    struct addressBook  addressbook;

    int no_of_people;
    char name [50];
    char email [50];
    int phone_no;
    printf("Enter the no. of people to add contacts of: ");
    scanf("%d", &no_of_people);
    int count = 0;

    while(count <= no_of_people) {
        printf("Enter the name: ");
        fgets(name, sizeof(name), stdin);


        printf("Enter the email: ");
        fgets(name, sizeof(email), stdin);


        printf("Enter the phone number: ");
        fgets(phone_no, sizeof(phone_no), stdin);
    }


    addressbook





    return 0;
}
