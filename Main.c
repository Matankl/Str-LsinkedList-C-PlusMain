# include "StrList.h"
# include <string.h>

int main(int argc, char const *argv[])
{
    //define input stopper and list
    int input;
    int run = 1;
    StrList* list = StrList_alloc();


    while (run)
    {

    //get int input from the user until its a numbr between 0 and 13
    do
    {
        scanf("%d", &input);
    } while (input < 0 || input > 13);
 
        
    //switch case for the input
    switch (input)
    {
    //case 0 - exit the program
    case 0:
        run = 0;
        break;

    //get a story from the user and add it to the list word by word
    case 1:
        char* story = (char*)malloc(1000);
        scanf("%s", story);
        char* word = strtok(story, " ");

        break;
    }
    return 0;








    }

}


