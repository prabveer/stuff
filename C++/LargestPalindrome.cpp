#include <iostream>
#include <vector>
#include <string>
#include <bits/stdc++.h>

using namespace std;

// Simple Program that gets the largest palindrome of 3 digit numbers //
// Prabveer Pannu //
bool palibdromeCheck(string num)
{
    string reversednum = num;
    reverse(num.begin(), num.end());
    if(reversednum == num)
        return true;
    return false;
}
int main()
{   
    int number1 = 999, number2 = 999, max = 0, firstmulti, secondmulti;
    for(int i = 999; i > 100; i--)
    {
       
        for(int x = i; x > 100; x--)
        {
            string sum = to_string(x * i);
            if(palibdromeCheck(sum))
            {
                if(stoi(sum) > max )
                {
                    max = stoi(sum);
                    firstmulti = x;
                    secondmulti = i;
                }


            }
        }
    }

    cout << "The largest plaindrome it the number " << firstmulti << " times the number " << secondmulti << " which equals: " << max << endl;
    return 0;

}