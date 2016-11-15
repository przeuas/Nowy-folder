#include "C:\Users\p\Documents\[L]zawansowane metody programowania obiektowego\Nowy folder\Zadanie1\include\CManage.h"

CManage::CManage()
{
    c_Table_Object = new CTable[5];


}


CManage::~CManage()
{
    //dtor
}

CManage::CManage(const CManage& other)
{
    //copy ctor
}

/*
CTable * CManage::vCreate(int i_TableQuantity)
{
    c_Table_Object = new CTable [i_TableQuantity];
    i_actual_size = i_TableQuantity;

    return c_Table_Object;
}
void CManage::vSetLengthTable(int i_Table_length,int i_Table_index)
{
    (* (c_Table_Object +i_Table_index)).vSetSizeTable((* (c_Table_Object +i_Table_index)).iGetSize(),i_Table_length);
}
void CManage::vSetNameToTable(string s_Name,int i_Table_index)
{
   c_Table_Object[i_Table_index].vSetName(s_Name);
}
void CManage::vAddElem(string s_Name,int i_Table_index,int  i_Numbers[])
{
   //c_Table_Object->vSetSizeTable(i_actual_size,i_actual_size + 1);
    //c_Table_Object.[i_actual_size] =

}
void CManage::vClone(int i_IndexElem)
{
    //CTable c_clone = new CTable(c_Table_Object->);

  //      vAddElem(c_clone);

//    CTable aa = new CTable(*(c_Table_Object[i_IndexElem].c_getClass()));
}
void CManage::vAddElem(CTable & c_AddTable)
{
    c_Table_Object->vSetSizeTable(i_actual_size,i_actual_size + 1);
    (*(c_Table_Object +i_actual_size)) = c_AddTable;

    //c_Table_Object.[i_actual_size] =

}
void CManage::vSetSizeTable(int i_SizeTable, int i_New_size)
{
    i_actual_size = i_New_size;

    CTable * c_TempTable = new CTable [i_New_size];
    for(int i = 0; i< i_SizeTable; i++)
         c_TempTable[i]= c_Table_Object[i];
      // {

     //   I_intTable[i]= i +5;
     //   cout<<I_intTable[i]<<"   ";

      // }
    c_Table_Object = c_TempTable;

    //cout<<"   to liczba "<<T[19];
}//CTable::vSetSizeTable(int i_SizeTable, int i_New_size
 int CManage::iGetSize()
{
       return i_actual_size;
}
*/
