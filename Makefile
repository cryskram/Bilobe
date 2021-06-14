install:
	git pull --rebase
	g++ -Wall -std=c++11 *.cpp utils/*.h -o bilobe
	cp bilobe /usr/bin/
	echo "Successfully built and installed bilobe on your system..."

uninstall:
	rm -f bilobe
	sudo rm -f /usr/bin/bilobe
