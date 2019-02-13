##
#
# Daizo Mori
# HW4 CS3560
# Program that prints the sum of numbers divisible by 3 and 5 from 0 to 1000
#
#


sum = 0

#it goes until 1000
for x in range(1000):

#it works only if the number is 3 or 5
	if (x % 3 == 0 or x % 5 == 0):
		sum = sum + x

#it prints the sum of multip[le of 3 and 5
print("Sum :", sum)
