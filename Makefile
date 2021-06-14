build:
	git pull
	g++ -Wall -std=c++11 *.cpp utils/*.h -o bilobe
	cp bilobe /usr/bin/
	echo "Successfully built and installed bilobe on your system..."

clean:
	rm -f bilobe