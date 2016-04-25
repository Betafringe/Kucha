# coding=utf-8
def recur_fibo(n):
    if n <= 1:
        return n
    else:
        return (recur_fibo(n - 1) + recur_fibo(n - 2))
def div(x,y):
    return x / y


nterms = int(input("您要输出几项? "))


if nterms <= 0:
    print("输入正数")
else:
    print("斐波那契数列:")
    for i in range(nterms):
        if recur_fibo(i+1) <= 1:
            x=0
            y=1
        else:
            x=float(recur_fibo(i))
            y=float(recur_fibo(i+1))
        print(recur_fibo(i)),(div(x,y));





def recur_fibo(n):
   """递归函数
   输出斐波那契数列"""
   if n <= 1:
       return n
   else:
       return(recur_fibo(n-1) + recur_fibo(n-2))


# 获取用户输入
nterms = int(input("您要输出几项? "))

# 检查输入的数字是否正确
if nterms <= 0:
   print("输入正数")
else:
   print("斐波那契数列:")
   for i in range(nterms):
       print(recur_fibo(i))