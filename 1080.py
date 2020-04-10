# 1080.py
def main():
    i, t, n = 0, 0, 0
    t = int(input())
    while t>0:
        t -= 1
        n = int(input())
        i = n % 14;
        if (i == 0):
            print("snoopy wins the game!")
        else:
            print("flymouse wins the game!")
main()