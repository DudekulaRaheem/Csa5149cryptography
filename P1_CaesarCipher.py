str = input("Enter Plain Text = ")
k = int(input("Enter Key Value = "))
n = 0
print("Cipher Text = ", end = "")
for i in str:
    n = ((ord(i)-65) + k)%26
    print(chr(n+65), end = "")
