#include<stdio.h>
struct student{
    int roll no;
    char name[100];
    float marks;
};
int main()
{
    int N, &search_roll ,i;
    scanf("%d",&N);
    struct student students[N];
    for (i=0;i<N;i++){
        if(students[i].roll_number == search_roll){
            printf("roll number :%d\n",student[i].roll_number);
            printf("Name : %s\n",student[i].name);
            printf("marks: %.2f\n",student[i].marks);
        }
        else{
            printf("Student not found");
        }
        return 0;
    }
}