install:
	git pull --rebase
	echo "Installing Bilobe..."
	g++ -Wall main.cpp *.h -o bilobe
	sudo cp bilobe /usr/bin/

remove:
	rm -rf /usr/bin/bilobe
	rm -rf bilobe