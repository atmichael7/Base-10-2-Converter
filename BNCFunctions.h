#ifndef BNCFunctions_H
#define BNCFunctions_H
#include <string>
#include <iostream>
#include <bits/stdc++.h>
using namespace std;

string Output_1_Strg = "", Output_2_Strg = "", Output_3_Strg = "";
int Output_1, Output_2, Output_3, Output_4, Output_5;
int Input_1, Input_2, Input_3, Input_4, Input_5, Tempnum_1, Tempnum_2;
bool Converting = 1, In_Function_Loop = 1;

void ReverseString();

void Convert_To_Base_2()
{
  while (In_Function_Loop)
  {
    cout << endl
         << " Cannot exceed 1 trillion!" << endl
         << " Enter number to convert to base 2 (BINARY): ";
    cin >> Input_1;
    Output_1_Strg = "";

    if (Input_1 != 0)
    {
      Converting = 1;
      while (Converting)
      {
        Tempnum_1 = Input_1 / 2;
        Tempnum_2 = Input_1 % 2;

        if (Tempnum_1 == 0)
        { Output_1_Strg += '1'; Converting = 0; break; }
        if (Tempnum_2 == 0)
        { Output_1_Strg += '0'; }
        else
        { Output_1_Strg += '1'; }

        Input_1 = Tempnum_1;
      }
      cout << endl << "The binary number is:";
      ReverseString();
      cout << endl;

      Converting = 0;
    }

    else
    { In_Function_Loop = 0; break; }

  }

}


void ReverseString()
{
  for (int i = Output_1_Strg.size(); i >= 0; i--)
  {
    Output_2_Strg += Output_1_Strg[i];
    Output_3_Strg += "-";
  }

  Output_3_Strg += "-";
  cout << endl << Output_3_Strg << endl << Output_2_Strg << endl << Output_3_Strg;
  Output_2_Strg = "";
  Output_3_Strg = "";
}



#endif
