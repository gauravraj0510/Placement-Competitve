# Extra Important Points in CPP

>  1. When taking char array input, always clear the buffer using `cin.ignore()` to avoid runtime errors. 

>  2. If output of string (char array) prints garbage values. Initialize array with empty array.
>> - Eg: `char arr[200] = {};` instead of `char arr[200];`

>  3. Focus on understanding the sorting and similar algorithms and no need to write code individually in each prog.
>> - Use header file `#include<algorithm>` for using inbuilt functions like sorting.
>> - Eg: `int b[n]; sort(b, b+n);` in asc order by default.
>> - Alternate way `sort(b.begin(), b.end())`
>> - Descending order `sort(b.begin(), b.end(), greater<int>())`

>  4. Vectors in C++
>> - https://www.geeksforgeeks.org/vector-in-cpp-stl/

>  5. Avoid using `using namespace std`. 
>> - This directive has been added for compatibility purpose and can lead into multiple definitions in larger projects. It breaks the namespace principle.  
>> - However, we can use it for literals (e.g. `using namespace std::chrono_literals`). 
>> - If we really don't want to use the `std::` prefix, we can use `using std::cout`, `using std::endl` and so on for each function, class, etc. you want to import in the global namespace.

>  6. Pointers: `int *p = &val;`  assigns the memory address of `val` to pointer `p`.

>  7. Set or HashSet does not contain duplicate elements. 
>> - `unordered_set<int> s; int a[n];`
>> - Adding elements to set `s.insert(a, a+n);`
>> - Gives size of set `s.size();`
>> - Print set elements `for (auto const &i: s) cout << i << " ";`

>  8. Transform functions for strings: Header file required: `#include <bits/stdc++.h>`
>> - String to Upper Case `transform(s.begin(), s.end(), s.begin(), ::toupper);`

>  9. Input strings with whtitespaces: `getline(cin, string_name)`
    	   
