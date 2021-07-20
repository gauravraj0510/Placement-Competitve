# Extra Important Points in CPP

>  1. When taking char array input, always clear the buffer using `cin.ignore()` to avoid runtime errors. 

>  2. If output of string (char array) prints garbage values. Initialize array with empty array.
>> - Eg: `char arr[200] = {};` instead of `char arr[200];`