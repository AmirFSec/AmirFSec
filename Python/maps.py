import sys


def addsum(num):
    num =+num 
    return num  


def main():

    x = [1, 32, 43, 54, 313, 13]

    print(list(map(addsum(x), x)))


if __name__ == "__main__":
    main()
