dir_hw = src
dir_check = tools

all: main

prob01:
	g++ -std=c++11 $(dir_hw)/$@/main.cpp -o $(dir_hw)/$@/main

prob01_chk: prob01
	echo 30 | $(dir_hw)/$</main | python $(dir_hw)/$/check.py 30
	echo 70 | $(dir_hw)/$</main | python $(dir_hw)/$/check.py 70
	echo 300 | $(dir_hw)/$</main | python $(dir_hw)/$/check.py 300

prob02:
	g++ -std=c++11 $(dir_hw)/$@/main.cpp -o $(dir_hw)/$@/main

prob02_chk: prob02
	cat $(dir_hw)/$</test1.txt | $(dir_hw)/$</main | python $(dir_hw)/$</check.py $(dir_hw)/$</test1.txt
	cat $(dir_hw)/$</test2.txt | $(dir_hw)/$</main | python $(dir_hw)/$</check.py $(dir_hw)/$</test2.txt
	cat $(dir_hw)/$</test3.txt | $(dir_hw)/$</main | python $(dir_hw)/$</check.py $(dir_hw)/$</test3.txt
	cat $(dir_hw)/$</test4.txt | $(dir_hw)/$</main | python $(dir_hw)/$</check.py $(dir_hw)/$</test4.txt

prob07:
	g++ -std=c++11 $(dir_hw)/$@/main.cpp -o $(dir_hw)/$@/main

prob07_chk: prob07
	cat $(dir_hw)/$</grade1.txt | $(dir_hw)/$</main | python $(dir_hw)/$</check.py $(dir_hw)/$</grade1.txt
	cat $(dir_hw)/$</grade2.txt | $(dir_hw)/$</main | python $(dir_hw)/$</check.py $(dir_hw)/$</grade2.txt
	cat $(dir_hw)/$</grade3.txt | $(dir_hw)/$</main | python $(dir_hw)/$</check.py $(dir_hw)/$</grade3.txt

prob10:
	g++ -std=c++11 $(dir_hw)/$@/main.cpp -o $(dir_hw)/$@/main

prob10_chk: prob10
	cat $(dir_hw)/$</test1.txt | $(dir_hw)/$</main | python $(dir_hw)/$</check.py $(dir_hw)/$</test1.txt
	cat $(dir_hw)/$</test2.txt | $(dir_hw)/$</main | python $(dir_hw)/$</check.py $(dir_hw)/$</test2.txt
	cat $(dir_hw)/$</test3.txt | $(dir_hw)/$</main | python $(dir_hw)/$</check.py $(dir_hw)/$</test3.txt


clean:
	rm $(dir_hw)/hw??/main
