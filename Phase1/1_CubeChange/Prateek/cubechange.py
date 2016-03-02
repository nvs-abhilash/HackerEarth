t = int(raw_input())
while t > 0:
	n = long(raw_input())
	if n == 1:
		print n
	else:
		x = (2*n*n) + ((n-2)*((4*n)-4))
		print x
	t = t - 1