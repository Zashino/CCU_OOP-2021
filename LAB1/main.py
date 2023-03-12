import math

while True:
    print("Please enter 3 triangle sides:")
    a, b, c = map(float, input().split())
    
    if a==-1 and b==-1 and c==-1:
        break
    if a<=0 or b<=0 or c<=0:
        print("The input is not legal")
        continue
    if (a+b)<c or (a+c)<b or (b+c)<a:
        print("The input is not leagl")
        continue
    s = (a + b + c)/2
    area = math.sqrt(s * (s-a) * (s-b) * (s-c))
    print(f"The area of this tiangle is:{area}")

