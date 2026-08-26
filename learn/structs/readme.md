# Structs

A user defined data type that groups related variables of different types under one name, so one `Student` holds the name, age, gpa, and status instead of four loose arrays.

```c
typedef struct{
    char name[50];
    int age;
    float gpa;
    bool isFullTime;
}Student;

Student student1 = {"Andre", 19, 3.6, true};
```

Members are reached with the dot operator and can be set after the fact, except strings, those need `strcpy` since you can't assign to an array. `Student student4 = {0}` zeroes it all out first so nothing is left as garbage.

### Code
- [main.c](main.c)
