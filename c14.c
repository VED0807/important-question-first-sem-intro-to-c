#include <stdio.h>

struct employee {
    char name[50];
    int basic_pay;
};

int main() {
    int num;

    printf("Enter the number of employees: ");
    scanf("%d", &num);

    struct employee emp[num];
    float gross;
    float da;

  
    for (int i = 0; i < num; i++) {
        printf("\nDetails for Employee %d\n", i + 1);
        printf("Enter name: ");
        scanf("%s", emp[i].name);
        printf("Enter basic pay: ");
        scanf("%d", &emp[i].basic_pay); 
    }

    printf("\n--- Employee Payroll --- \n");

    
    for (int i = 0; i < num; i++) {
        
        da = 0.52 * emp[i].basic_pay;
        gross = emp[i].basic_pay + da;

        printf("Name: %-15s | Basic: %-8d | Gross Salary: %.2f\n", 
                emp[i].name, emp[i].basic_pay, gross);
    }

    return 0;
}