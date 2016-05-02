import re
def cal_words(path):
	f = open(path,'r')
	lines = f.readlines()
	count = 0
	for line in lines:
		count += len(re.spilt('[,.! ?:]',line))
		return count - len(lines)

words_number = cal_words('test.text')
print words_number
