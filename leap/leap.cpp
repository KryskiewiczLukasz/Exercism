#include "leap.h"


namespace leap {

bool is_leap_year(int a){
    return((a%4==0 && a%100!=0) || a%400==0);
}

}  // namespace leap
