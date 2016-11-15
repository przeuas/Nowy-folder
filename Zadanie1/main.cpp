#include <iostream>
#include "C:\Users\p\Documents\[L]zawansowane metody programowania obiektowego\Nowy folder\Zadanie1\include\CTable.h"
using namespace std;

int main()
{
    cout << "Hello world!" << endl;
    int i_SizeStart =10;


   // CTable c_table;
   CTable c_table("Janusz");
    c_table.vSetSizeTable(i_SizeStart,20);

    c_table.vSetInTable(4,55);
    c_table.iGetFromTable(4);

    CTable c_newTable(c_table);

   // cout<<"\n 1"<<c_newTable.s_GetName();

    //cout<<"\n 2"<<c_table.s_GetName();


//dj
    return 0;
}
