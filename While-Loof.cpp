#include <iostream>
using namespace std;

int main()
{
def gcd_iterative(num1, num2):
    smaller_num = min(num1, num2)
    for i in range(smaller_num, 0, -1):
        if num1 % i == 0 and num2 % i == 0:
            return i;
    return 1;
}



#include <iostream>
using namespace std;

int main()
{
#def gcd_recursive (num1, num2)
    if num2 == 0:
        return num1
    else:
        return gcd_recursive(num2, num1 % num2);
}


