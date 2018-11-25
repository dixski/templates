#include "file.h"

#include <stdlib.h>
#include <string.h>


struct _MyFile
{
    int value;
};

MyFile* MyFile_New(void)
{
    MyFile* myFile = (MyFile*)malloc(sizeof(MyFile));
    if (myFile)
    {
        memset(myFile, 0, sizeof(MyFile));
    }
    return myFile;
}

void MyFile_Delete(MyFile* myFile)
{
    if (myFile)
    {
        free(myFile);
    }
}

int MyFile_Get_Value(MyFile* myFile)
{
    if (myFile)
    {
        return myFile->value;
    }
    return -1;
}

int MyFile_Set_Value(MyFile* myFile, int value)
{
    if (myFile)
    {
        myFile->value = value;
        return value;
    }
    return -1;
}
