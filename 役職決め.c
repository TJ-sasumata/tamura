#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main()
{
    srand(time(0));
    int in = (rand() % 20) + 1;;
    int st = (rand() % (20 - in)) + 1;;
    int ch = 20- in - st;;
    printf("intelligence = %d\nstamina = %d\ncharisma = %d\n", in, st, ch);
    
    if(in > st){
        if(in > ch){
            printf("Class:'mage'");
            return 0;
        }else if(in < ch){
            printf("Class:'theif'");
            return 0;
        }else if(in = ch){
        printf("Class:'mage' or 'thief' ");
        return 0;
    }else if(st > ch){
        printf("Class:'knight'");
        return 0;
    }else if(st < ch){
        printf("Class:'theif'");
        return 0;
    }else if(st = ch){
        printf("Class:'knight' or 'thief' ");
        return 0;
    }

    return 0;
}
