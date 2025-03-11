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
        if(students[i].roll_number == search_roll){
            scanf("roll number :%d\n",students[i].roll_number);
            scantf("Name : %s\n",students[i].name);
            scanf("marks: %.2f\n",students[i].marks);
        }
        else{
            printf("Student not found");
        }
        return 0;
    }
}