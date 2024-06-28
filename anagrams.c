// #include <stdio.h>
// //write a recursive function in c that computes f(m,n) = m^n
// int power(int m, int n) {
//     if (n == 0) {
//         return 1;
//     } else {
//         return m * power(m, n - 1);
//     }
// }
// int main() {
//     int base, exponent;
//     printf("Enter the base number: ");
//     scanf("%d", &base);
//     printf("Enter the exponent: ");
//     scanf("%d", &exponent);
//     int result = power(base, exponent);
//     printf("%d raised to the power of %d is %d\n", base, exponent, result);
//     return 0;
// }

#include <stdio.h>
//Program to check whether the two strings are anagrams or not. 
int main() {
    char str1[100], str2[100];
    int count1[26] = {0}, count2[26] = {0};
    int flag = 1;
    printf("Enter first string: ");
    scanf("%s", str1);
    printf("Enter second string: ");
    scanf("%s", str2);
    // Calculate frequency of characters in str1
    int i = 0;
    while (str1[i] != '\0') {
        count1[str1[i] - 'a']++;
     /* So, this line of code is essentially counting the occurrences of each character in str1.
     It uses an array count1 where each index represents a different character ('a' to 'z'), 
     and the value at that index represents the count of that character encountered in the string str1. 
     This process is repeated for str2 as well, populating the count2 array. */
        i++;
    }
    // Calculate frequency of characters in str2
    i = 0;
    while (str2[i] != '\0') {
        count2[str2[i] - 'a']++;
        i++;
    }
    // Compare the frequency arrays
    /*By comparing the counts of characters (from 'a' to 'z') in both count1 and count2, 
    the program determines if both strings have the same characters in the same quantities, indicating that they are anagrams.
    */
    for (i = 0; i < 26; i++) {
        if (count1[i] != count2[i]) {
            flag = 0; // Not anagrams
            break;
        }
    }
    // Check if strings are anagrams
    if (flag == 1) {
        printf("The strings are anagrams.\n");
    } else {
        printf("The strings are not anagrams.\n");
    }
    return 0;
}
