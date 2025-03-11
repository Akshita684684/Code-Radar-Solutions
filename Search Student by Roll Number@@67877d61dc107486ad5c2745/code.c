#include<stdio.h>

struct student {
    int rollno;
    char name[100];
    float marks;
};

int main() {
    int N, search_roll, i;
    
   
    scanf("%d", &N);
    
   
    struct student students[N];
    
    
    for (i = 0; i < N; i++) {
        printf("Enter roll number: ");
        scanf("%d", &students[i].rollno);
        printf("Enter name: ");
        scanf("%s", students[i].name);
        printf("Enter marks: ");
        scanf("%f", &students[i].marks);
    }
    

    printf("Enter roll number to search: ");
    scanf("%d", &search_roll);
    

    for (i = 0; i < N; i++) {
        if (students[i].rollno == search_roll) {
            printf("Roll number: %d\n", students[i].rollno);
            printf("Name: %s\n", students[i].name);
            printf("Marks: %.2f\n", students[i].marks);
            return 0;  
        }
    }
    
   
    printf("Student not found\n");
    return 0;
}
