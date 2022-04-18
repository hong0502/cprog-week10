import sys


def check(fn):
    fh = open(fn, "r")
    dat = []
    for l in fh:
        dat.extend([n for n in l.split()])
    fh.close()
    cnt = 0
    for n in dat:
        cnt += n.count('7')
    return cnt

def main(fn):
    expected = check(fn)
    result = ""
    for line in sys.stdin:
        result += line
        # sys.stdout.write(line)
    if int(result) == expected:
        print("測試通過!")
        exit(0)
    print(f"Your Output : \n{result}")
    print(f"Expected    : \n{expected}")
    exit(1)


if __name__ == "__main__":
    fn = sys.argv[1]
    main(fn)
