if __name__ == '__main__':
    n = int(input())
    student_marks = {}
    for _ in range(n):
        name, *line = input().split()
        scores = list(map(float, line))
        student_marks[name] = scores
    query_name = input()
    temp = 0
    for student in student_marks:
        if student == query_name:
            for i in student_marks[student]:
                temp += i
    print('%.2f'%(temp / 3))