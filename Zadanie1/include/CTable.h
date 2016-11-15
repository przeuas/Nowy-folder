#ifndef CTABLE_H
#define CTABLE_H
#include <string>
#include <iostream>
using namespace std;

class CTable
{
    public:
        CTable();
        CTable(string s_Name);
        CTable(const CTable& a);
        virtual ~CTable();
        void vSetSizeTable(int i_SizeTable, int i_NewSize);
        void vSetInTable(int i_Postion, int i_Value);
        int iGetFromTable(int i_Postion);


        bool iProperSize(int i_Size);
        int iGetSize();
        void vSetName(string s_Name);
        string sGetName();

    protected:
    private:
        string s_name;
        static const  string s_DEFAULT_NAME;

        int *I_intTable;
        int i_Actual_size;
        static const  int i_START_ROZMIAR = 10;

};

#endif // CTABLE_H
