#include <stdio.h>


int main(int argc, char* argv[])
{
    int age = 23;

    unsigned int abc = 23;

    unsigned char a = 'a';

    float weight = 10.0005f;

    double weight2 = 10.5;

    char c = 'a';

    const char* name1 = "John";

    const char name2[] = "John";

    char* strings[] = { "John", "Doe" };

    int numbers[] = {1, 2, 3};

    struct
    {
        int age;
        float weight;
    } person;

    person.age = 22;
    person.weight = 15.0f;

    return 0;
}
