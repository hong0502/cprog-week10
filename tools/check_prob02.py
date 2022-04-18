import sys


def check(fn):
    fh = open(fn, "r")
    dat = []
    for l in fh:
        dat.extend([int(n) for n in l.split()])
    fh.close()
    s = ""
    col = 0
    for n in dat:
        if n % 3 == 0 or n % 4 == 0:
            s += f"{n:<8}"
            col += 1
            if col % 5 == 0:
                s += "\n"
    return s


def main(fn):
    expected = check(fn)
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
    fn = sys.argv[1]
    main(fn)
