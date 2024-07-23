#include <stdio.h>

struct students
{
    char name;
    int reg_no;
    char course;
    char departement;

};
struct students student [100];
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
  void insert_students(){
  	char name;
    int reg_no;
    char course;
    char department;
    char grade;
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
  void display_student(){
  	char name;
    int reg_no;
    char course;
    char department;
    char grade;
    float average_score;
    
    
    int i;
    for (int i = 0; i < num_students; i++)
   if (i < num_students){

        printf("enter name");
        printf("enter reg_no");
        printf("enter department");
        printf("enter course");
        printf("enter average score");
        printf("enter grade");
    }
    else
    printf("student record not found");
    
  }
  int main(){
   int choice;
   do
   {
    printf("\n1.insert student record");
    printf("2.display student record");
    printf("3.delete record");
    printf("4.update student record");
    printf("5.search for student record");
    printf("6.exit");

    switch (choice) {
    case 1:
        insert_students();
        break;
    
    case 2:
    display_student();
        break;
    case 3:
    printf("deleting record");
    break;
    case 4:
    printf("updating record");
    break;
    case 5:
    printf("searching record");
    break;
    case 6:
    printf("exiting program");
    break;
    default:
    printf("invalid choice");

    }

   } while (choice !=6);
   return 0;
   
  }

