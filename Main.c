# include "StrList.h"
# include <string.h>

int main(int argc, char const *argv[])
{
    //Define input stopper and list
    int input;
    int run = 1;
    StrList* list = StrList_alloc();


    while (run)
    {

    //Get int input from the user until its a numbr between 0 and 13
    do
    {
        scanf("%d", &input);
    } while (input < 0 || input > 13);
 
        
    //Switch case for the input
    switch (input)
    {
    //Exit the program
    case 0:
        run = 0;
        break;

    // Get a story from the user and add it to the list word by word
    case 1:
        // char* story = (char*)malloc(1000);
        // scanf("%s", story);
        // char* word = strtok(story, " ");
        // free(story);

        break;

    // Get index and word from the user and add the word to the list at the given index
    case 2:
    //Scan the index and the word
    scanf("%d", &input);

    char* word = (char*)malloc(100);
    scanf("%s", word);

    StrList_insertAt(list, word, input);
    free(word);
        break;

    // Print the list
    case 3:
    StrList_print(list);
        break;
    
    // Print the size of the list
    case 4:
    printf("%d\n", StrList_size(list));
        break;

    // Print the word at the given index
    case 5:
    scanf("%d", &input);
    StrList_printAt(list, input);
        break;
    
    // Print the number of characters in the list
    case 6:

    int overallsize = 0;
    size_t listSize = StrList_size(list);
    for (size_t i = 0; i < listSize; i++){
        overallsize += strlen(StrList_getData(list, i));
    }
    printf("%d\n", overallsize);
    break;


    // Print how many times the word appears in the list
    case 7:
    char* word = (char*)malloc(100);
    scanf("%s", word);
    printf("%d\n", StrList_count(list, word));
    free(word);
    break;

    // Get a Word and delete all the nodes containing the word
    case 8:
    char* word = (char*)malloc(100);
    scanf("%s", word);
    StrList_remove(list, word);
    free(word);
    break;

    // Get an index and delete the node at the given index
    case 9:
    scanf("%d", &input);
    StrList_removeAt(list, input);
    break;

    // Reverse the list
    case 10:
    StrList_reverse(list);
    break;

    // Delete all the nodes in the list
    case 11:
    StrList_free(list);
    StrList* list = StrList_alloc();
    break;

    // Sort the list in lexicographical order
    case 12:
    StrList_sort(list);
    break;

    // Print is sorted in lexicographical order
    case 13:
    StrList_isSorted(list);
    break;
}
    






    }

    StrList_free(list);
    return 0;









}
/*
TODO: Check if in case 4 the size type is correct for the print function
TODO:  if you have freed everything you allocated
TODO:  finish 6 


*/
