#include <iostream>

using namespace std;

bool isAlphanumeric(char ch) {
    return (ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <= 'Z') || (ch >= '0' && ch <= '9');
}

char toLowerCase(char ch) {
    if (ch >= 'A' && ch <= 'Z') {
        return ch + 32;
    }
    return ch;
}

bool isPalindrome(char s[], int length) {
    int left = 0;
    int right = length - 1;

    while (left < right) {
        while (left < right && !isAlphanumeric(s[left])) {
            left++;
        }
        while (left < right && !isAlphanumeric(s[right])) {
            right--;
        }
        if (toLowerCase(s[left]) != toLowerCase(s[right])) {
            return false;
        }
        left++;
        right--;
    }
    return true;
}

int main() {
    char s1[] = "A man, a plan, a canal: Panama";
    char s2[] = "race a car";
    int len1 = sizeof(s1) - 1;
    int len2 = sizeof(s2) - 1;

    cout << (isPalindrome(s1, len1) ? "true" : "false") << endl;
    cout << (isPalindrome(s2, len2) ? "true" : "false") << endl;

    return 0;
}

