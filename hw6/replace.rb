#
# Daizo Mori
# CS3560 HW6
# This program replaces beggining of f to gh,  end of sh to ti, and middle of i to o
#

puts "Enter a word"
word = gets
word = word.gsub(/\bf/, 'gh').gsub(/\bF/, 'Gh')
word = word.gsub(/sh\b/, 'ti').gsub(/Sh\b/, 'Ti').gsub(/sH\b/, 'tI').gsub(/SH\b/, 'TI')
word = word.gsub(/\Bi\B/, 'o').gsub(/\BI\B/, 'O')
puts "replaced word is " + word