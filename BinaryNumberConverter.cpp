#include "BNCFunctions.h"



int main()
{

  bool Main_Menu_Loop = 1;
  while (Main_Menu_Loop)
  {
    cout << "\n\n   -Binary Number Converter Program- \n" << endl
         << "  Choose an option:" << endl
         <<   "  [1] - Convert base 10 to base 2" << endl
         <<   "  [2] - Convert base 2 to base 10" << endl
         <<   " ->";

    cin >> Input_1;

    if (Input_1 == 1)
    {
      Convert_To_Base_2();
    }

    if (Input_1 == 2)
    {

    }

    if ((Input_1 != 1) && (Input_1 != 2))
    {
      cout << endl << endl
           <<      " ==================" << endl
           <<      " = Invalid input! =" << endl
           <<      " ==================" << endl;
    }
  }
}
