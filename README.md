# Extra Important Points in CPP

>  1. When taking char array input, always clear the buffer using `cin.ignore()` to avoid runtime errors. 

>  2. If output of string (char array) prints garbage values. Initialize array with empty array.
>> - Eg: `char arr[200] = {};` instead of `char arr[200];`

>  3. Focus on understanding the sorting and similar algorithms and no need to write code individually in each prog.
>> - Use header file `#include<algorithm>` for using inbuilt functions like sorting.
>> - Eg: `int b[n]; sort(b, b+n);` in ascending order by default.