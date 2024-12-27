#include <stdio.h>

union Data
{
    int id;
    // float score;
};

int main()
{
    union Data data;
    data.id = 101;
    // data.score = 100;

    printf("data.id: %d\n", data.id);
    // printf("data.score: %.2f", data.score);

    return 0;
}
