import sys
import random


def generate_password(input_str):

    codex = "A-CHRDw87lNS0E9B2TibgpnMVys5XzvtOGJcYLU+4mjW6fxqZeF3Qa1rPhdKIouk"
    len_input = len(input_str)

    tmp = (len_input ^ 59) & 63
    password = codex[tmp]

    tmp = 0
    for char in input_str:
        tmp += ord(char)
    tmp = (tmp ^ 79) & 63
    password += codex[tmp]

    tmp = 1
    for char in input_str:
        tmp *= ord(char)
    tmp = (tmp ^ 85) & 63
    password += codex[tmp]

    tmp = 0
    for char in input_str:
        if ord(char) > tmp:
            tmp = ord(char)
    random.seed(tmp ^ 14)
    tmp = random.randint(0, 63)
    password += codex[tmp]

    tmp = 0
    for char in input_str:
        tmp += (ord(char) * ord(char))
    tmp = (tmp ^ 239) & 63
    password += codex[tmp]

    for i in range(ord(input_str[0])):
        tmp = random.randint(0, 63)
        tmp = (tmp ^ 229) & 63
        password += codex[tmp]
    return password
	
if len(sys.argv) != 2:


   print("Usage: python3 generate_password.py <input_string>")
else:
   input_string = sys.argv[1]
   password = generate_password(input_string)
print(password)
