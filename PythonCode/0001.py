# -*- coding: utf-8 -*-  Betafringe20160428 0001 
#做为 Apple Store App 独立开发者，你要搞限时促销，为你的应用生成激活码（或者优惠券），使用 Python 如何生成 200 个激活码（或者优惠券）？

import random 
import string

def rand_str(num,length=8):
	f = open('Acv_code.txt','wb')
	for i in range(num):
		chars = string.letters + string.digits
		w = [random.choice(chars) for i in range(length)]
		f.write(''.join(w) + '\n')
	f.close()

if __name__ == '__main__':
	rand_str(200)