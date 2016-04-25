import random
number = random.randint(1,100)
guess_times=0
game_not_end=True

while game_not_end:
	guess_times=guess_times+1
	player_input=int(raw_input("input a number({0}):".format(guess_times)))
	if number == player_input:
		print "Congratulation you win!"
		game_not_end = False
	elif player_input > number:
		print "too big"
	else:
		print "too small"