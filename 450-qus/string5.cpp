// Write a Code to check whether one string is a rotation of another

# include <bits/stdc++.h>
using namespace std;
 
/* Function checks if passed strings (str1
   and str2) are rotations of each other */
bool areRotations(string str1, string str2)
{
   /* Check if sizes of two strings are same */
   if (str1.length() != str2.length())
        return false;
 
   string temp = str1 + str1;
  return (temp.find(str2) != string::npos);

        // for npos
        // It is a constant static member value with the highest possible value for an element of type size_t.
        // It actually means until the end of the string.
        // It is used as the value for a length parameter in the string’s member functions.
        // As a return value, it is usually used to indicate no matches.
}
 
/* Driver program to test areRotations */
int main()
{
   string str1 = "AACD", str2 = "ACDA";
   if (areRotations(str1, str2))
     printf("Strings are rotations of each other");
   else
      printf("Strings are not rotations of each other");
   return 0;
}