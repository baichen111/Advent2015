# part 1
with open("input.txt") as f:
    s = 0
    for line in f:
        s += len(line[:-1]) - len(eval(line))  # eval in python makes it easier
print(s + 1)  # plus 1 because the very last char is gone : 1350

# part 2
with open("input.txt") as f:
    s = 0
    for line in f:
        s += 2+line.count('\\')+line.count('"')
print(s)  
