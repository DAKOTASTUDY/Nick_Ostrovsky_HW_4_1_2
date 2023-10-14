// Nick_Ostrovsky_HW_4_1_2.cpp : This file contains the 'main' function. Program execution begins and ends there.


#include <iostream>
#include <array>
int numb(int x, int max_index, int array[]);
int main()
{
    int in_array[] = { 14, 16, 19, 32, 32, 32, 56, 69, 72 };
    int array_length = std::size(in_array);
    int user_int = 0;
    std::cout << array_length << std::endl;
    std::cout << "Please, enter your number:\n" << std::endl;
    std::cin >> user_int;
   int a = numb(user_int, array_length,  in_array);
   std::cout << "\n\t Maybe:" << a << std::endl;
    return 0;
}

int numb(int x, int max_index,  int array [])
{
    
    int left_index = 0;
    int right_index = max_index - 1;
    std::cout << right_index << left_index << std::endl;
    while (left_index < right_index)
    {
   
       
        int middle = (left_index + right_index) / 2;
        if ((array[middle] == x))
        {
            std::cout << "(array[middle] == x)\n" << right_index << left_index <<std::endl;
            return max_index - middle;
            
        }
        else if ((x < array[middle]))
        {
          right_index = middle - 1;
           
           std::cout << "(x < array[middle])\n" <<  right_index << left_index <<std::endl;
        }
        else if(x > array[middle])
        {
           
            left_index = middle + 1 ;
            std::cout << "x > array[middle]" << right_index << left_index << std::endl;
        }
         
    };

   
  //  std::cout <<"\n\t" << "items number: " << right_index << std::endl;
   

}