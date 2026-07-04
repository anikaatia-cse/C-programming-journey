# include<stdio.h>

int main()
{
    printf("===POINTERS MASTER PROGRAM===\n\n");
    
    int user_age = 18;
    int *age_ptr;   // Declaring our pointer 
    age_ptr = &user_age;  // Connecting our pointer to the variable user_age

    printf("User age is: %d\n", user_age);  //Direct Access to the variable (user_age)
    printf("User age is: %d\n", *age_ptr); // Indirect Access to the variable user_age through the pointer (*age_ptr)
    printf("Address of user_age is: %p\n", (void*)age_ptr);   // Address of the variable user_age
    printf("Address of age_ptr is: %p\n", (void*)&age_ptr);   // Address of the pointer variable age_ptr
    return 0;
}