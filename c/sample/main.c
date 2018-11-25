#include <stdio.h>

#include "file.h"


int main(int argc, char const *argv[])
{
    printf("C Application Template...\n\n");

    MyFile* myFile = MyFile_New();
    printf("myFile->value => %d\n", MyFile_Get_Value(myFile));
    MyFile_Set_Value(myFile, 2018);
    printf("myFile->value => %d\n", MyFile_Get_Value(myFile));

    /* Unused args */
    (void)argc;
    (void)argv;
        
    return 0;
}
