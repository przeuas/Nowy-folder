#include "C:\Users\p\Documents\[L]zawansowane metody programowania obiektowego\Nowy folder\Zadanie1\include\CMng.h"

CMng::CMng()
{
    //ctor
}

CMng::~CMng()
{
    //dtor
}
void CMng::vSetSizeTable(int i_index_elem, int i_New_size)
{
    if(i_index_elem < c_table_vector.size())
{

    c_table_vector[i_index_elem];


}


}//void CMng::vSetSizeTable(int i_index_elem, int i_New_size)
 void CMng::vCreate(int i_TableQuantity)
 {
     for(int i = 0; i < i_TableQuantity; i++)
        {
            CTable c_table_elem;
            c_table_vector.push_back(c_table_elem);
        }

 }
