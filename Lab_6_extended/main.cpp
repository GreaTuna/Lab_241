#include "Human.h"
#include "HumanList.h"
#include "Student.h"
#include "Teacher.h"

int main() { 
    Student student2;

    Teacher teacher1;
    Teacher teacher2;
    Teacher teacher3;

    teacher2.createCoursework(12, 2, "AAAAAAAAAAAAAAAA", "BBBBBBBBBBBB");
    teacher2.createCoursework(6, 3, "sdfsdfsdf", "sdfsdfsdfsdf");
    
    teacher2.registerStudent(&student2);
    teacher2.registerStudent(&student2);
    teacher2.registerStudent(&student2);
    teacher2.registerStudent(&student2);
    teacher2.registerStudent(&student2);
    
    teacher2.printCourseworksLog();

    return 0;
}