#include <cmath>
#include <iostream>

#define LOLO unsigned long long int  
#define ULO unsigned long int

using namespace std;

int main()
{
    LOLO first = 2;
    LOLO second = 3;
    ULO square_root = 0;
    cout << first << endl << second << endl << endl;
    ++first;
    short flag1 = 0;
    short flag2 = 0;
    ULO i = 2;
    while(1)
    {
        square_root = ceil(sqrt(first));
        for(i = 2; i <= square_root; ++i){
            if(!(first % i)) {
                flag1 = 1;
                break;
            }
        }
        if(!flag1){
            second = first+2;
            square_root = ceil(sqrt(second));
            for(i = 2; i <= square_root; ++i){
                if(!(second % i))  {
                    flag2 = 1; 
                    break;
                }
            }
            if(!(flag2)) cout << first << endl << second << endl << endl;
            flag2 ^= flag2;
        }
        flag1 ^= flag1;
        first+=2;

    }
    return 0;
}
