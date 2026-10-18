#include <stdio.h>

struct student {
    char name[50];
    int roll;
    char address[50];
    int age;
    int marks[3]; 
    float avg;    
};

int main() {
    int n = 3;
    struct student s[3];

    for (int i = 0; i < n; i++) {
        int sum = 0; 
        printf("\n--- Enter details for Student %d ---\n", i + 1);
        
        printf("Name: ");
        scanf("%s", s[i].name);
        printf("Roll Number: ");
        scanf("%d", &s[i].roll);
        printf("Address: ");
        scanf("%s", s[i].address);
        printf("Age: ");
        scanf("%d", &s[i].age);

        printf("Enter marks for Physics, C, and Math:\n");
        for (int j = 0; j < 3; j++) {
            printf("Subject %d: ", j + 1);
            scanf("%d", &s[i].marks[j]);
            sum += s[i].marks[j];
        }
        s[i].avg = sum / 3.0; 
    }

    printf("\n--- Student Details ---\n");
    for (int i = 0; i < n; i++) {
        printf("\nName: %s | Roll: %d | Address: %s | Age: %d", 
                s[i].name, s[i].roll, s[i].address, s[i].age);
        printf("\nAverage Marks: %.2f\n", s[i].avg);
    }

    return 0;
}