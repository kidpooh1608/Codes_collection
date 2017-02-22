import random

number = random.randint(2,9)
print 'ogrin number is ' , number

print 'take a guess ^_^ '
iNumber = int(raw_input('>'))

while iNumber != number :

    if iNumber < number:
        print 'We need a higher number!'

    if iNumber > number:
        print 'We need a lower number!'

    iNumber = int(raw_input('>'))

print 'yeah you have a right decision'
