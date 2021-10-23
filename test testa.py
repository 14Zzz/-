# Ввод числа, в котором цифры не повторяются. Поиск возможных комбинаций. Поиск макс комбинации.
while True:    # Кручусь в цикле просто потому что могу :^)
    try:
        x = int(input("Введите целое трехзначное число, цифры которого не повторяются: "))
        if x < 0:
            x *= -1
        else:
            x = str(x)
            if len(x) == 3:
                if x[0] != x[1] != x[2] != x[0]:
                    l = [x[0], x[1], x[2]]
                    biggest = 1
                    for a1 in range(len(x)):
                        for a2 in range(len(x)):
                            for a3 in range(len(x)):
                                if a1 != a2 != a3 != a1:
                                    print(l[a1], l[a2], l[a3])
                                    if int(l[a1] + l[a2] + l[a3]) > biggest:
                                        biggest = int(l[a1] + l[a2] + l[a3])
                    print("Наибольшая комбинация =", biggest)
                else:
                    print()
                    print("///Цифры в числе не должны повторяться///")
            else:
                print()
                print("///Число должно быть трехзначным///")
    except ValueError:
        print()
        print("///Введите целое число///")
