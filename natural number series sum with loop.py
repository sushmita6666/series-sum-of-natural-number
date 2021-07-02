n = int(input("Enter the Nth number of the series:"))
sum = 0
for x in range(n+1):
    sum = sum+x

print("The sum of the series for {}th is {}".format(n,sum))
print("\n")