#include <stdio.h>
#include <stdlib.h>
#include <string.h>


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

void person_free(person_T* person)
{
    free(person->name);
    free(person);
}

int main(int argc, char* argv[])
{
    for (int i = 0; i < 10; i++)
    {
        person_T* person = new_person(23 + i, "john");

        printf("%d %s\n", person->age, person->name);

        person_free(person);
    }

    return 0;
}
