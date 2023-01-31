# C++ Useful functions/code Reference 

## Just keep snippets of code here that can be re-used and useful to know about 

### Transform function

Allows you to run a function/code on a range of elements, and save it to another range
e.g. useful if we want to do something with elements in an array/string, and save to another array/string

**std:transform(source_arr.begin(), source_arr.end(), destination_range_beginning.begin(), function_to_run_on_elements)**

```c++
`std::transform(word_copy.begin(), word_copy.end(), word_copy.begin(), [](unsigned char c){return tolower(c); });`
```

### Vector arrays

#### *Declaring an empty string vector with unknown size*

```c++
vector <string> array;
```
#### *Declaring array with elements*

```c++
vector <string> array = {"string1", "string2", "stringn"};
```

#### *Printing contents of a vector - Use for loop and const auto* 

*Using array declared above:*

```c++
for (const auto &str : array) 
{
    cout << str << endl;
}
```

### Count function

Can use to count occurance of char in an string


**std::count(str.begin(), std.end(), 'search_character');**

e.g. 

```c++
std::string test_string = "ytrwhuyyewy";
char c = 'y';

std::cout << std::count(test_string.begin(), test_string.end(), c);
```
