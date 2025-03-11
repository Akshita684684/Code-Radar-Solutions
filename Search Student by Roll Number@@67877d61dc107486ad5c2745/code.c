#include<stdio.h>
struct student{
    int rollno;
    char name[100];
    float marks;
};
int main()
{
    int N, search_roll ,i;
    scanf("%d",&N);
    struct student students[N];
    for (i=0;i<N;i++){
        if(students[i].rollno == search_roll){
            printf("roll number :%d\n",students[i].rollno);
            printtf("Name : %s\n",students[i].name);
            printf("marks: %.2f\n",students[i].marks);
        }
        else{
            printf("Student not found");
        }
        return 0;
    }
}