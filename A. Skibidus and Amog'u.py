n = int(input())

li = []
for i in range(n):
    val = input()
    m = len(val)
    if m > 2:
        val = val[:-2]
        val += 'i'
        li.append(val)
    else:
        li.append('i')

for val in li:
    print(val)
