#include "../include/numberGenerator.hpp"

double number_generator()
{
    srand(time(0));
    int random_num = rand();
    return (double)random_num / RAND_MAX;
}