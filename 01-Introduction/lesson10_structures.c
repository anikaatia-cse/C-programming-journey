# include<stdio.h>
#include<string.h>  //Required for a string copy [ strcpy() ] function to assign text to a string variable safely.

int main()
{
    printf("STRUCTURES-MASTER-PROGRAM\n\n");

    struct student_info
    {
        char student_name[50];
        int student_age;
        float student_gpa;
    };

    struct student_info student1;  // Declaring a structure variable named student1 of type struct student_info
    strcpy(student1.student_name, "Anika Atia");  // Safely copies text into character array student_name of student1
    student1.student_age = 18;
    student1.student_gpa = 4.00;

    struct student_info student2;  // Declaring another structure variable named student2 of type struct student_info
    strcpy(student2.student_name, "Tasnim Ara Toma");  // Safely copies text into character array student_name of student2
    student2.student_age = 18;
    student2.student_gpa = 4.00;

    printf("Student 1 Name: %s\n", student1.student_name);
    printf("Student 1 Age: %d\n", student1.student_age);
    printf("Student 1 GPA: %.2f\n\n", student1.student_gpa);

    printf("Student 2 Name: %s\n", student2.student_name);
    printf("Student 2 Age: %d\n", student2.student_age);
    printf("Student 2 GPA: %.2f\n", student2.student_gpa);

    return 0;
}    











    
