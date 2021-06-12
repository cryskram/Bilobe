build:
	g++ -Wall -std=c++11 main.cpp utils/customFunc.h -o bilobe
	cp bilobe /usr/bin/
	echo "Successfully built and installed bilobe on your system..."

clean:
	rm -f bilobe