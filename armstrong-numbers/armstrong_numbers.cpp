#include "armstrong_numbers.h"
#include <cmath>
namespace armstrong_numbers {
    bool is_armstrong_number(int input){
        int sum = 0;
        int temp = input;
        int i =0;
        while(temp>0){
            temp /= 10;
            i++;
        }
        temp = input;
        while(temp>0){
            sum += std::pow(temp%10, i);
            temp /= 10;
        }

        return sum == input;
    }
}  // namespace armstrong_numbers
