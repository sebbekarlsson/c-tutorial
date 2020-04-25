#include <stdio.h>
#include <stdlib.h>
#include <string.h>


int add(int a, int b)
{
    return a + b;
}

char* get_string(size_t length)
{
    char* my_str = calloc(length, sizeof(char));

    sprintf(my_str, "%s", "hello");

    return my_str;
}

typedef struct
{
    int age;
    char* name;
} person_T;

person_T* new_person(int age, const char* name)
{
    person_T* person = calloc(1, sizeof(person_T));
    person->age = age;
    person->name = calloc(strlen(name) + 1, sizeof(char));
    strcpy(person->name, name);

    return person;
}

int main(int argc, char* argv[])
{
    for (int i = 0; i < 10; i++)
    {
        person_T* person = new_person(23 + i, "john");
        printf("%d %s\n", person->age, person->name);
    }

    return 0;
}
