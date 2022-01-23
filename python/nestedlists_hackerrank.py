if __name__ == '__main__':
    students = []
    scores = []
    for _ in range (int(input())):
        students.append([])
        name = input()
        score = float(input())
        scores.append(score)
        students[_].append(name)
        students[_].append(score)
    minVal = min(scores)
    while True:
        checker = 0
        for student in students:
            if student[1] == minVal:
                scores.remove(student[1])
                students.remove(student)
                checker = 1
        if checker == 0:
            break
    minVal = min(scores)
    students.sort()
    for student in students:
        if student[1] == minVal:
            print(student[0])