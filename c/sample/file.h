#ifndef __FILE_H__
#define __FILE_H__

typedef struct _MyFile MyFile;

MyFile* MyFile_New(void);
void MyFile_Delete(MyFile*);

int MyFile_Get_Value(MyFile*);
int MyFile_Set_Value(MyFile*, int);

#endif /* __FILE_H__ */
