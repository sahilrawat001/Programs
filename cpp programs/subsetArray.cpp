/**
 * Problem:- Program to check whether an array B is subset of array A or not.
 * Solution: Create an unordred_map of ary1 and set its values as 1 or we can also create
 * frequency map for ary 1 not loop through the second array so if any element comes which
 * is not present in the unordered_map of arr1 then that second array is not the subse of the first array.
 * 
 **/
#include <iostream>
#include <stdio.h>
#include <unordered_map>
using namespace std;

string isSubset(int a1[], int a2[], int lena1, int lena2)
{
    unordered_map<int, int> uMap;
    int flag = 1;
    // int lena1 = sizeof(a1) / sizeof(int);
    // int lena2 = sizeof(a2) / sizeof(int);
    for (int i = 0; i < lena1; i++)
    {
        if (uMap[a1[i]])
            uMap[a1[i]] = ++uMap[a1[i]];
        else
            uMap[a1[i]] = 1;
    }
    for (int j = 0; j < lena2; j++)
    {
        // cout << "uMap values" << a2[j] << ":" << uMap[a2[j]] << endl;
        if (!uMap[a2[j]])
        {
            flag = 0;
            break;
        }
    }
    return flag ? "Yes" : "No";
}

int main()
{

    int a1[] = {11, 1, 13, 21, 7};
    int a2[] = {11, 3, 7, 1};
    cout << isSubset(a1, a2, 5, 4);
    return 0;
}