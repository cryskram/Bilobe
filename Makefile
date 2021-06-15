install:
	g++ main.cpp *.h -o bilobe
	mv bilobe /usr/bin/
	echo "Successfully installed Bilobe"

uninstall:
	rm -rf /usr/bin/bilobe
	echo "Successfully removed Bilobe"

update:
	git pull --rebase
	g++ main.cpp *.h -o bilobe
	mv bilobe /usr/bin/
	echo "Successfully reinstalled Bilobe"