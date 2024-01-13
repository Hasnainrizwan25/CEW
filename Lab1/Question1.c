
#include <stdio.h>

int main() {
    // Write C code here
    int employeeId, totalWorkedHour;
    float salary;
    scanf("%d", &employeeId);
    scanf("%d", &totalWorkedHour);
    scanf("%f", &salary);
    printf("Employee ID: %d\n", employeeId);
    printf("Total Worked Hour: %d\n", totalWorkedHour);
    printf("Salary: %.2f\n", salary*totalWorkedHour);

    return 0;
}
