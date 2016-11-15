#include "C:\Users\p\Documents\[L]zawansowane metody programowania obiektowego\Nowy folder\Zadanie1\include\CTable.h"
#ifndef CMANAGE_H
#define CMANAGE_H
#include <list>


class CManage
{
    public:
        CManage();
        virtual ~CManage();
        CManage(const CManage& other);
        CTable * vCreate(int i_TableQuantity);
        void vSetLengthTable(int i_Table_length,int  i_Table_index);
        void vAddElem(string s_Name,int i_Table_index,int i_Numbers[]);
        void vAddElem(CTable & ClonTable);
        void vClone(int i_IndexElem);
        void vSetSizeTable(int i_SizeTable, int i_New_size);
        void vSetNameToTable(string s_Name,int i_Table_index);
        int iGetSize();

        int v;
    protected:
    private:
    CTable *c_Table_Object;
    int i_actual_size;
    static const  int i_DEFAULT_SIZE= 10;
    CTable
};

#endif // CMANAGE_H
