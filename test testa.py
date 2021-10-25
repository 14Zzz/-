# Ввод числа, в котором цифры не повторяются. Поиск возможных комбинаций. Поиск макс комбинации.
# Не знаешь что пробовать - попробуй ВСЁ
# Читаемость кода в сделку не входила
import time  # чисто покекать над числом из 10ти цифр)) Хотя я не дождался((


def F(M):  # Проверка на совподения цифр в комбинации
    for j in range(11):
        if M.count(str(j)) > 1:
            return True


while True:    # Кручусь в цикле просто потому что могу :^)
    try:
        x = int(input("Введите целое число, цифры которого не повторяются: "))
        start_time = time.time()
        if x < 0:
            x *= -1
        x = str(x)
        l = []
        for i in range(0, len(x)):
            l.append(x[i])
        if not F(l):
            biggest = 1
            for a1 in range(len(x)):
                if len(x) == 1:
                    print(l[a1])
                    if int(l[a1]) > biggest:
                        biggest = int(l[a1])
                for a2 in range(len(x)):
                    if len(x) == 2:
                        if a1 != a2:
                            print(l[a1], l[a2])
                            if int(l[a1] + l[a2]) > biggest:
                                biggest = int(l[a1] + l[a2])
                    for a3 in range(len(x)):
                        if len(x) == 3:
                            if a1 != a2 != a3 != a1:
                                print(l[a1], l[a2], l[a3])
                                if int(l[a1] + l[a2] + l[a3]) > biggest:
                                    biggest = int(l[a1] + l[a2] + l[a3])
                        for a4 in range(len(x)):
                            if len(x) == 4:
                                M = [l[a1], l[a2], l[a3], l[a4]]
                                if not F(M):
                                    print(l[a1], l[a2], l[a3], l[a4])
                                    if int(l[a1] + l[a2] + l[a3] + l[a4]) > biggest:
                                        biggest = int(l[a1] + l[a2] + l[a3] + l[a4])
                            for a5 in range(len(x)):
                                if len(x) == 5:
                                    M = [l[a1], l[a2], l[a3], l[a4], l[a5]]
                                    if not F(M):
                                        print(l[a1], l[a2], l[a3], l[a4], l[a5])
                                        if int(l[a1] + l[a2] + l[a3] + l[a4] + l[a5]) > biggest:
                                            biggest = int(l[a1] + l[a2] + l[a3] + l[a4] + l[a5])
                                for a6 in range(len(x)):
                                    if len(x) == 6:
                                        M = [l[a1], l[a2], l[a3], l[a4], l[a5], l[a6]]
                                        if not F(M):
                                            print(l[a1], l[a2], l[a3], l[a4], l[a5], l[a6])
                                            if int(l[a1] + l[a2] + l[a3] + l[a4] + l[a5] + l[a6]) > biggest:
                                                biggest = int(l[a1] + l[a2] + l[a3] + l[a4] + l[a5] + l[a6])
                                    for a7 in range(len(x)):
                                        if len(x) == 7:
                                            M = [l[a1], l[a2], l[a3], l[a4], l[a5], l[a6], l[a7]]
                                            if not F(M):
                                                print(l[a1], l[a2], l[a3], l[a4], l[a5], l[a6], l[a7])
                                                if int(l[a1] + l[a2] + l[a3] + l[a4] + l[a5] + l[a6] + l[
                                                    a7]) > biggest:
                                                    biggest = int(
                                                        l[a1] + l[a2] + l[a3] + l[a4] + l[a5] + l[a6] + l[a7])
                                        for a8 in range(len(x)):
                                            if len(x) == 8:
                                                M = [l[a1], l[a2], l[a3], l[a4], l[a5], l[a6], l[a7], l[a8]]
                                                if not F(M):
                                                    print(l[a1], l[a2], l[a3], l[a4], l[a5], l[a6], l[a7], l[a8])
                                                    if int(l[a1] + l[a2] + l[a3] + l[a4] + l[a5] + l[a6] + l[a7] +
                                                           l[a8]) > biggest:
                                                        biggest = int(
                                                            l[a1] + l[a2] + l[a3] + l[a4] + l[a5] + l[a6] + l[a7] +
                                                            l[a8])
                                            for a9 in range(len(x)):
                                                if len(x) == 9:
                                                    M = [l[a1], l[a2], l[a3], l[a4], l[a5], l[a6], l[a7], l[a8],
                                                         l[a9]]
                                                    if not F(M):
                                                        print(l[a1], l[a2], l[a3], l[a4], l[a5], l[a6], l[a7],
                                                              l[a8], l[a9])
                                                        if int(l[a1] + l[a2] + l[a3] + l[a4] + l[a5] + l[a6] + l[
                                                            a7] + l[
                                                                   a8] + l[a9]) > biggest:
                                                            biggest = int(
                                                                l[a1] + l[a2] + l[a3] + l[a4] + l[a5] + l[a6] + l[
                                                                    a7] + l[a8] +
                                                                l[a9])
                                                for a10 in range(len(x)):
                                                    if len(x) == 10:
                                                        M = [l[a1], l[a2], l[a3], l[a4], l[a5], l[a6], l[a7], l[a8],
                                                             l[a9], l[a10]]
                                                        if not F(M):
                                                            print(l[a1], l[a2], l[a3], l[a4], l[a5], l[a6], l[a7],
                                                                  l[a8], l[a9],
                                                                  l[a10])
                                                            if int(l[a1] + l[a2] + l[a3] + l[a4] + l[a5] + l[a6] +
                                                                   l[a7] + l[
                                                                       a8] + l[a9] + l[a10]) > biggest:
                                                                biggest = int(
                                                                    l[a1] + l[a2] + l[a3] + l[a4] + l[a5] + l[a6] +
                                                                    l[a7] + l[a8] +
                                                                    l[a9] + l[a10])
            print("Наибольшая комбинация =", biggest)
            print("--- %s seconds ---" % (time.time() - start_time))  # Но кека можно и не дождаться KekWait
        else:
            print()
            print("///Цифры в числе не должны повторяться///")
    except ValueError:
        print()
        print("///Введите целое число///")
