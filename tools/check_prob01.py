import sys

def check(n):
    s = ""
    for i in range(2,n+1,2):
        s+=f"{i:4}"
        if i%8==0: s+="\n"
    return s 
        
def main(n):
    expected = check(n)
    result = ""
    for line in sys.stdin:
        result += line
        # sys.stdout.write(line)
    if result.strip() == expected.strip():
        print("測試通過!")
        exit(0)
    print(f"Your Output : \n{result}")
    print(f"Expected    : \n{expected}")
    exit(1)


if __name__ == "__main__":
    n = int(sys.argv[1])
    main(n)
