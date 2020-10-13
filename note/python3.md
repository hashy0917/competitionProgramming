# Python Note

## 入力

"""
a
b c
s
"""

a,b,cが整数、sが文字列
この状態で正しくinputされる手法のメモ

"""
# 整数の入力
a = int(input())
# スペース区切りの整数の入力
b, c = map(int, input().split())
# 文字列の入力
s = input()
"""

"""
# print時にformatで形を整える
print("{} {}".format(a+b+c, s))
"""
