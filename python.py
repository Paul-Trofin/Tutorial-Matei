print("This is a Python script that goes through some examples.")
print("\n------------\nTUPLES\n------------\n")
x = ("a", "b", "c")
print(x, "length: ", len(x))
y = list(x)
y.append("d")
x = tuple(y)
print(x, "length: ", len(x))

letters = x
numbers = (1, 2, 3, 4)
join_tuples = letters + numbers
print(join_tuples)
multiply_tuples = 3 * letters
print(multiply_tuples)