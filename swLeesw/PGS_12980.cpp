#include <iostream>
#include <vector>
using namespace std;

int solution(int n)
{
    int ans = 0;
   
    while (n > 0) {
        if (n % 2 == 1) { //홀수면 짝수로
            ans += 1;
        }
        n = n / 2;
    }
    return ans;
}
