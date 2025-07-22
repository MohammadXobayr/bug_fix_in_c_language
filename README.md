# bug_fix_in_c_language
# ✅ C Program Bug Fix: Three & Five Checker

This project demonstrates a simple C program that takes an integer input `N` and prints numbers from 1 to N. Alongside each number:
- If divisible by **3**, prints `"Three"`
- If divisible by **5**, prints `"Five"`
- If divisible by both **3 and 5**, prints `"ThreeFive"`

⚠️ Problems in the Code
✅ Missing condition for both 3 and 5 divisible numbers:

No handling of numbers like 15, 30, etc.

Output would show only "Three" or "Five" (whichever came first).

✅ Logical order of conditions:

The check for (i % 3 == 0 && i % 5 == 0) should come before the separate checks.

Otherwise, the first condition matched will skip the rest.


---

## 🔴 Original Buggy Code

```c
#include <stdio.h>

int main()
{
    int n;
    int i;
    scanf("%d",&n);

    for (int i = 1; i <= n; i++)
    
        if (i % 3 == 0 )
        {
            printf("%d Three\n",i);
        }
        else if (i % 5 == 0)
        {
            printf("%d Five\n",i);
        }
        else
        {
            printf("%d\n",i);

        }

    return 0;
}

Bug fix and improvement by [Mohammad xobayr]


