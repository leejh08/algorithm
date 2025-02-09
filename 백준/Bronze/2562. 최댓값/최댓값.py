max_value = 0  # 최댓값 저장 변수
max_index = 0  # 최댓값의 위치 저장 변수

for i in range(9):  
    num = int(input())  # 입력받기
    if num > max_value:  # 현재 숫자가 저장된 최댓값보다 크면 갱신
        max_value = num
        max_index = i + 1  # 1부터 시작하는 위치를 저장

print(max_value)
print(max_index)
