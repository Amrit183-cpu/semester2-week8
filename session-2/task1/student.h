#ifndef STUDENT_H //include guard defined
#define STUDENT_H

#include <stdio.h>
#include <string.h>
#include "structure.h"


#define NAME_LENGTH 50
#define NUM_MODULES 3

float calculate_average(Student student);
void display_student(Student student);
void update_name(Student *student, const char *new_name);
int update_mark(Student *student, int module_index, float new_mark);


#endif