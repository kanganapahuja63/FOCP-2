#include <stdio.h>
int main ( ){
int marks;
int grade;
printf("enter yout marks(0-100): ");
scanf ("%d", &marks);

grade = marks / 10;

switch (grade) {
    case 10:
    case 9:
    printf ("grade: A+");
    break;
    case 8:
    printf("grade: A");
    break;
    case 7:
    printf( "grade: B");
    break;
    case 6:
    printf("grade: C");
    break;
    case 5:
    printf(" grade: D");
    break;
    default :
    if (marks >= 0 && marks < 50)
    printf("grade: F (Fail)");
    else 
    printf("inavlid marks!");
}
return 0;

}