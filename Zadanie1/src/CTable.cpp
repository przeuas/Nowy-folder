#include "C:\Users\p\Documents\[L]zawansowane metody programowania obiektowego\Nowy folder\Zadanie1\include\CTable.h"
using namespace std;




CTable::CTable()
{
   I_intTable = new int [i_START_ROZMIAR];
   const string s_DEFAULT_NAME = "JAN";
   vSetName(s_DEFAULT_NAME);



   cout<<"bezp: "<< sGetName();
}

CTable::CTable(string s_Name)
{
    CTable();
    vSetName(s_Name);
    cout<<"parametr:  "<< sGetName();

/*        I_intTable = new int [i_SizeTable];
        I_intTable[1] = 5;
        cout<<"a to: "<<I_intTable[1];
takie tam testowanie*/
}
CTable::CTable(const CTable &pcOther)
{
    I_intTable = pcOther.I_intTable;
    s_name = pcOther.s_name + "_copy";
    cout<<"---------kopiuj : "<<s_name;
}



CTable::~CTable()
{
    delete [] I_intTable;

}
CTable & CTable::c_getClass()
{

    return (this);
}
void CTable::vSetSizeTable(int i_SizeTable, int i_New_size)
{
    i_Actual_size = i_New_size;

    int * i_TempTable = new int [i_New_size];
    for(int i = 0; i< i_SizeTable; i++)
         i_TempTable[i]= I_intTable[i];
      // {

     //   I_intTable[i]= i +5;
     //   cout<<I_intTable[i]<<"   ";

      // }
    I_intTable = i_TempTable;

    //cout<<"   to liczba "<<T[19];
}//CTable::vSetSizeTable(int i_SizeTable, int i_New_size

bool CTable::iProperSize(int i_SetIndex)
{
    if (i_Actual_size < i_SetIndex)
        return false;
    else
        return true;
}
void CTable::vSetInTable(int i_Postion, int i_Value)
{
    if(iProperSize(i_Postion))
        I_intTable[i_Postion] = i_Value;

}
int CTable::iGetFromTable(int i_Postion)
{
    int i = 0;

    if(iProperSize(i_Postion))
    {
        i = I_intTable[i_Postion];
        cout<<" ------   "<<i<<"---------"<<endl;
    }//

    return i;
}
int CTable::iGetSize()
{
        return i_Actual_size;
}
void CTable::vSetName(string s_Name)
{
    s_name = s_Name;
}
string CTable::sGetName()
{
    return s_name;
}

