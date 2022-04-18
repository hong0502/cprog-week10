import sys


def toLG(g):
    if (g >= 90):
        return "A+"
    if (g >= 85):
        return "A"
    if (g >= 80):
        return "A-"
    if (g >= 77):
        return "B+"
    if (g >= 73):
        return "B"
    if (g >= 70):
        return "B-"
    if (g >= 67):
        return "C+"
    if (g >= 63):
        return "C"
    if (g >= 60):
        return "C-"
    if (g >= 50):
        return "D"
    if (g >= 1):
        return "E"
    return "X"


def check(fn):
    fh = open(fn, "r")
    dat = []
    for l in fh:
        dat.append([int(n) for n in l.split()])
    fh.close()
    s = ""
    for st in dat:
        for g in st[1:]:
            s += f"{toLG(g):<6}"
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
