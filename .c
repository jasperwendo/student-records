#include <stdio.h>

struct students
{
    char name;
    int reg_no;
    char course;
    char departement;

};
struct student student [100];

int num_students = 0;

void calculate_average_score( float average_score )
  {
    float total_scores;
    float num_scores;
    printf("enter total_score");
    scanf("%f",&total_scores);
    printf("enter num_scores");
    scanf("%f",&num_scores);

    average_score= total_scores / num_scores;
    printf("average_score:%f",average_score);


  }
  void calculate_grade(char grade,float average_score)
  {
    if (average_score >= 90 && average_score <= 100)
     printf("'A'");
     else if (average_score >= 80 && average_score < 90)
     
     printf("'B'");
     else if(average_score >= 70 && average_score < 80)
     printf("'C'");
     else if(average_score >= 60 && average_score < 70)
     printf("'D'");
     else
     printf("'F'");
    
  }
  void insert_students(char name,int reg_no,char course,char department,char grade){
   printf("enter student name");
   scanf("%c",&name);
   printf("enter reg_no");
   scanf("%d",&reg_no);
   printf("enter course name");
   scanf("%c",&course);
   printf("enter department");
   scanf("%c",&department);

    printf("enter grade|");
    scanf("%c",&grade);

    num_students = name, reg_no,course, department,grade;
    num_students++;
    printf("Student information added successfully.");
   
  }
  void display_student(char name,int reg_no,char department,char course){
    int i;
    for (int i = 0; i < num_students; i++)
    {
       printf("enter name");
        printf("enter reg_no");
        printf("enter department");
        printf("enter course");

    }
    
  }
