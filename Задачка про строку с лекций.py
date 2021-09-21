print("Введите строку: ")
s = input()
l = []
for i in range(0, 10):
    l.append(s.count(str(i)))
print("Наибольшее количество цифр:", max(l))
print("Это цифра(ы):")
for n in range(0, 10):
    if l[n] == max(l) and max(l) != 0:
        print(n)
