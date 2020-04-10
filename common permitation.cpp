// common permitation
#include <bits/stdc++.h>
using namespace std;
const int N = 1050;

// 思路：对每个字符串，记录下每个字母出现的次数，然后进行比较
// ，从a-z进行输出，输出较小的次数
int main(){
    char str_a[N], str_b[N];
    int i = 0, j = 0;
    int len_a, len_b;
    int num_a[26], num_b[26];
    while (scanf("%s%s",str_a,str_b)!=EOF )
    {
        memset(num_a, 0, sizeof(num_a)); 
        memset(num_b, 0, sizeof(num_b));
        len_a = strlen(str_a);
        len_b = strlen(str_b);
        for (i = 0; i < len_a;++i)
            num_a[str_a[i] - 'a']++;
        for (i = 0; i < len_b;++i)
            num_b[str_b[i] - 'a']++;
        for (int i = 0; i < 26; i++)
        {
            for (j = 0; j < (num_a[i] < num_b[i] ? num_a[i] : num_b[i]);++j)
                printf("%c", 'a' + i);           
        }
        printf("\n");

    }
    return 0;
}