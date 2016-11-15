#include <iostream>
#include "C:\Users\p\Documents\[L]zawansowane metody programowania obiektowego\Nowy folder\Zadanie1\include\CTable.h"
#include "C:\Users\p\Documents\[L]zawansowane metody programowania obiektowego\Nowy folder\Zadanie1\include\CManage.h"
#include "C:\Users\p\Documents\[L]zawansowane metody programowania obiektowego\Nowy folder\Zadanie1\include\CManger.h"
using namespace std;

int main()
{
    cout << "Hello world!" << endl;
    //int i_SizeStart =10;



    CTable c_table("Janusz");
    c_table.vSetSizeTable(60);

    c_table.vSetInTable(4,55);
    c_table.iGetFromTable(4);

    CTable c_newTable(c_table);

    cout<<"\n 1"<<c_newTable.sGetName();

    cout<<"\n 2"<<c_table.sGetName();
   // CManage cm;
   // cm.vCreate(50);

    CManger cam;
    cout<<cam.i_GetVectorSize()<<"&&&&&&&&&&&&&\n\n ----------------";

    cam.vCreateTables(5);
    cout<<cam.i_GetVectorSize();

   cam.vSetNameToTable("pies",4);


//
//CMng c;
   // c.vCreate(50);

//dj
    return 0;
}
