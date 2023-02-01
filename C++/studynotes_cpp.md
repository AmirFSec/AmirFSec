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
#### Get size of vector using size()
```c++
array.size()
```

#### Adding element to end of vector
Use push_back() 

```c++
std::vector<std:string> array;
array.push_back(2);
```
#### Removing element from end of vector
Use pop_back()
```c++
array.pop_back(); 
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

### Allocating and freeing memory from Heap

## new operator 

- Dynamically allocated memory is stored in Heap (and need to point to it to gain access to it)
- Heap is free pool of memory
- Need to allocate and free it manually - isn't done automatically (memory leak occurs if not deallocated)
- Good to use Dynamic allocated mem when we need to allocate memory of variable size
- non-static and local variables get allocated memory on the Stack (pushed and popped on the stack, then released automatically once calling function exits)
- C uses calloc(), malloc() and free() to allocate memory in heap then free it, for C++, supports these, but also can use new and delete:
- For example, 
```c++
pointer-var = new data_type;    // pointer var is pointer of type data_type. data_type can ve built-in data type (int, float, char, etc..) including array or user-defined types such as struct or class
```

Example taken from geeksforgeeks:

```c++
// Poiinter initialized to NULL
int *p = NULL; 
p = new int; 

//Can also do
int *p = new int; 

```

- Can allocate block (array) of memor:

```c++
pointer-var = new data_type[size]
int *p = new int[10;]

```
- normal arrays declared locally are deallocated by compiler (since it's local), whereas dynamically allocated arrays are deallocated by programmer or when program exits. 

- Is not enough memory to allocate, new returns NULL, so best to handle this case using nothrow. e.g. 

```c++
int *p = new(nothrow) int;
if(!p)
{ 
    cout << "Memory not allocated" << endl; 
}
```

## delete operator

- Need to deallocate memory that's been allocated on Heap, using delete operator:
- To free mem pointed to by a declated pointer var and a allocated array:
```c++
//delete pointer-var
int *p = new int; 

delete p;

// or delete[] pointer-var - if an array
int *p = new(nothrow) int[20];

delete[] p; 

```
