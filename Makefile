install:
	g++ main.cpp utils/*.h -o bilobe
	echo "Successfully installed Bilobe onto your system"
	cp bilobe /usr/bin/

uninstall:
	rm -rf bilobe
	rm -rf /usr/bin/bilobe

update:
	git pull --rebase
	g++ main.cpp utils/*.h -o bilobe
	rm -rf /usr/bin/bilobe
	echo "Successfully reinstall Bilobe onto your system"
	cp bilobe /usr/bin/