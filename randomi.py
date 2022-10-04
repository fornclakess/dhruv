import random
n = random.randint(1,100)
#print(n)
print("Enter a number between 1 and 100")
c = 0
while True:
    g = int(input("Enter guess:"))
    if g<n:
        print("Enter higher guess")
        c+=1
    elif g>n:
        print("Enter lower guess")
        c+=1
    else:
        print("You guessed the number in",c+1,"attempts")