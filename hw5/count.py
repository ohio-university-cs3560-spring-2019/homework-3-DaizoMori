#
# Daizo Mori
# CS3560 HW5
# this program counts number of lines, words, and characters in all files
#

#!/usr/bin/python
import sys

for line in sys.stdin:
        elements = line.split()

print "Lines      : ", elements[0]
print "Words      : ", elements[1]
print "Characters : ", elements[2]