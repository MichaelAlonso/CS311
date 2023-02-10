/******************************************
Template prepared by Kazumi Slott
CS311

Description of this program: ???????????????????

Your name: Michael 
Your programmer number: 1
Number of hours you spent: 
Any difficulties?: 
*******************************************/
//What do you need to include? HINT: What are you using in main()?
//include your matrix.h

#include <iostream>
#include <fstream>
#include "matrix.h"

int main()
{
  Matrix<double> m1(4,4);
  Matrix<double> m2(4,3);
  /*
    ?????
    Your matrices need to be of the same data type.  
    When you do multiplication, the data types of the 2 matrices need to be the same.
    
    //Create 2 input files yourself. You need to name them house_info.in and house_func.in, otherwise my auto-grader will not run your program.
    
    //Check matrixClient.cpp to see an example
    create fin
    open the first file (which file should be the first? You need to figure it out.)
    load the data into the first matrix
    close fin
    
    open the second file
    load the data into the second matrix
    close fin
    
    ?????
    use try and catch
    In catch, show the following message.
  cout << "SIZE ERROR" << endl;
  */
  
  ifstream fin;
  fin.open("house_info.in");
  fin >> m1;
  fin.close();

  fin.open("house_func.in");
  fin >> m2;
  fin.close();

  try
    {
      Matrix<double>r=m1*m2;
      cout << r << endl;
    }
  catch(Matrix<double>::size_error)
    {
      cout << "SIZE ERROR" << endl;
    }

  return 0;
}
