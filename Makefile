dir_hw = src
dir_check = tools

all: main

prob01:
	g++ -std=c++11 $(dir_hw)/$@/main.cpp -o $(dir_hw)/$@/main

prob01_chk: prob01
	$(dir_hw)/$</main | python $(dir_check)/check.py "Hello STUST"
	

prob02:
	g++ -std=c++11 $(dir_hw)/$@/main.cpp -o $(dir_hw)/$@/main

prob02_chk: prob02
	$(dir_hw)/$</main | python $(dir_check)/check.py "Hello Github Classroom"
	
clean:
	rm $(dir_hw)/hw??/main
