#include "binary_search.h"

namespace binary_search {
   
    std::size_t find(std::vector<int> const& data, int number){
        auto begin = data.begin();
        auto end = data.end();

            while(begin < end){
                auto middle = (end- begin)/2 + begin;
                if(number < *middle){
                    end = middle  ;
                   
                }
                else if(number > *middle){
                    begin = middle +1;
                }
                else {return std::distance(data.begin(), middle);
                    }
            }
         
        throw std::domain_error("error");
    }
   
}  // namespace binary_search
 