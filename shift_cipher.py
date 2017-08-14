import random

#aphabe = ['a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j', 'k', 'l', 'm', 'n',	'o', 'p', 'q', 'r', 's', 't', 'u', 'v', 'w', 'x', 'y', 'z']

your_mess = str(raw_input('Please enter your message > '))
key = random.randint(1, 5)
#print key

print "processing a shift cipher with key = %r " %key

ciphertext = []

for i in your_mess:
    ciphertext.append(chr(ord(i) + key))

print "ciphertext message: \n"
print(''.join(ciphertext))



