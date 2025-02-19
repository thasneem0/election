#include<stdio.h>
#define MAX_SUBJECTS 10
void calculateTotalMarks(int marks[][MAX_SUBJECTS],int subjectsCount,int studentsCount, int totalMarks[]){
    for(int i=0;i<studentsCount;i++){
        totalMarks[i]=0;
        for(int j=0;j<subjectsCount;j++){
        totalMarks[i]+=marks[i][j];
    }
    }
}
void swap(int* first,int* second){
    int temp=(*first);
    (*first)=(*second);
    (*second)=temp;
}
void sortStudents(int totalMarks[],int n,int studentsCount){
    int isSwapped=0;
    do {
         isSwapped=0;
    for(int i=0;i<studentsCount-1;i++){
          if(totalMarks[i]>totalMarks[i+1]){
              swap(&totalMarks[i],&totalMarks[i+1]);
              isSwapped=1;
          }
        }
        studentsCount--;
    }while(isSwapped);
}
void readStudentMarks(int marks[][MAX_SUBJECTS],int studentsCount,int subjectsCount){
    printf("enter marks:\n");
    for(int i=0;i<studentsCount;i++){
        printf("student %d:",i+1);
        for(int j=0;j<subjectsCount;j++){
        scanf("%d",&marks[i][j]);
        }
    }
}
void printTotalMarks(int totalmarks[],int studentsCount){
    for(int i=0;i<studentsCount;i++){
        printf("Total Marks:%d\n",totalmarks[i]);
}
}
int main()
{
    int studentsCount;
    int subjectsCount;
    int marks[1000][MAX_SUBJECTS];
    int totalMarks[1000];
    printf("Enter number of students:");
    scanf("%d",&studentsCount);
    printf("Enter number of subjects:");
    scanf("%d",&subjectsCount);
    readStudentMarks(marks,studentsCount, subjectsCount);
    calculateTotalMarks(marks,studentsCount, subjectsCount, totalMarks);
    printTotalMarks(totalMarks,studentsCount);
    return 0;
}
