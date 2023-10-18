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
   int a = numb(user_int, array_length - 1,  in_array);
   std::cout << "\n\t Maybe answer is:\t" << 9 - a << std::endl;
    return 0;
}

int numb(int x, int max_index,  int array [])
{
    
    int left_index = 0;
    int right_index = max_index ;
   // std::cout << right_index << left_index << std::endl;
    int middle ;//((left_index + right_index)) / 2;
    while (left_index != right_index)
    {
   
        

        middle = ((left_index + right_index)) / 2;
        std::cout << right_index << left_index << middle << std::endl;
        if ((array[middle] == x))
        {
            while (((array[middle] == array[middle + 1]) && ((middle + 1)) < max_index))
           { ++middle; }
            std::cout << "\n\t middle" << middle <<std::endl;
            return max_index  - middle;
            
        }
        else if ((x < array[middle]))
        {
          right_index = middle;
           
          
        }
        else if(x >= array[middle])
        {
           
            left_index = middle + 1 ;
           
        }
        
      
            std::cout << right_index << left_index << middle <<max_index<< std::endl;
           if (left_index == right_index) {  return  right_index; }
    };
   // std::cout << "\n\t middle" << middle << std::endl;
  
  
   
  //  std::cout <<"\n\t" << "items number: " << right_index << std::endl;
   

}