#include<iostream>
using namespace std;
class Solution
{
    int r;
    int m=0;
    int p;
public:
    bool isPalindrome(int x)
    {
        p=x;
        while(x!=0){
            r=x%10;
            m=m*10+r;
            x=x/10;
        }
        if(x==0 && m==p){
            return true;
        }
    }
};
int main () {
    
    return 0;
}