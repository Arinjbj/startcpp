#include <stdio.h>
#include <tchar.h>

//***************************************************
//������ �ڵ�
typedef struct USERDATA {
    int nAge;
    char szName[32];
    void(*Print)(struct USERDATA* a);
} USERDATA;

void PrintUserData(USERDATA* a)
{
    printf("%d %s\n", a->nAge, a->szName);
}

//***************************************************
//����� �ڵ�
int _tmain(int argc, _TCHAR* argv[])
{
    USERDATA a = { 20, "Hong", PrintUserData };

    //���
    //1
    printf("%d %s\n", a.nAge, a.szName);
    //2
    PrintUserData(&a);
    //3
    a.Print(&a);
    //4
    //a.Print();    //C++ ��Ÿ��

    return 0;
}