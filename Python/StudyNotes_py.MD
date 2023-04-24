# Useful Python Code snippets

## Map() 

### Syntax

```python
map(function, iter)

```

- function: function which map() passes each element in the given iterable list
- iter: iterable to be mapped (note: can pass one or more iterables)

Returns:
Returns a list of the results after applying the given function to each item of a given iterable (list, tuple etc.) 

e.g. Convert strings in iterable list to int

```python
x = ['0', '1', '2']
y = (map(int, x))
list(y)
```
output:

`
[0, 1, 2]

`