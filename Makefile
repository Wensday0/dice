make:
	g++ *.cpp -o dice
install:
	cp dice /usr/local/bin/
uninstall:
	rm /usr/local/bin/dice
