# Extra Important Points in CPP

>  1. When taking char array input, always clear the buffer using `cin.ignore()` to avoid runtime errors. 

>  2. If output of string (char array) prints garbage values. Initialize array with empty array.
>> - Eg: `char arr[200] = {};` instead of `char arr[200];`

>  3. Focus on understanding the sorting and similar algorithms and no need to write code individually in each prog.
>> - Use header file `#include<algorithm>` for using inbuilt functions like sorting.
>> - Eg: `int b[n]; sort(b, b+n);` in asc order by default.

>  4. Vectors in C++
>> - https://www.geeksforgeeks.org/vector-in-cpp-stl/

>  5. Avoid using `using namespace std`. 
>> - This directive has been added for compatibility purpose and can lead into multiple definitions in larger projects. It breaks the namespace principle.  
>> - However, we can use it for literals (e.g. `using namespace std::chrono_literals`). 
>> - If we really don't want to use the `std::` prefix, we can use `using std::cout`, `using std::endl` and so on for each function, class, etc. you want to import in the global namespace.