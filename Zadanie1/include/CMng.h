#ifndef CMNG_H
#define CMNG_H
#include "C:\Users\p\Documents\[L]zawansowane metody programowania obiektowego\Nowy folder\Zadanie1\include\CTable.h"
#include <list>
#include <vector>
using namespace std;
class CMng
{
    public:
        CMng();
        void vSetSizeTable(int i_SizeTable, int i_New_size);
        void vCreate(int i_TableQuantity);
        virtual ~CMng();
    protected:
    private:
        vector<CTable> c_table_vector;
};
#endif // CMNG_H
