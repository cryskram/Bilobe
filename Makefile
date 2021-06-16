install:
	g++ -Wall main.cpp -o bilobe
	mv bilobe /usr/bin/

uninstall:
	rm -rf /usr/bin/bilobe

update:
	git pull --rebase
	g++ main.cpp *.h -o bilobe
	mv bilobe /usr/bin/